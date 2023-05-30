<?php

namespace App\Http\Controllers;

use App\Models\Crud;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Session;

class crudController extends Controller
{
    public function showData(Request $request){
        error_log('se called');
        if($request->has('search')){

            $showData = Crud::where('key', 'like', '%'.$request->search.'%')
                            ->orWhere('name', 'like', '%'.$request->search.'%')
                            ->paginate(4);
        }
        else{
            $showData = Crud::paginate(4);
        }

        return view('welcome', compact('showData'));
    }

    public function addData(){
        return view('add_data');
    }

    public function storeData(Request $request){
        
        $rules = [
            "name" => "required|max:255",
        ];

        $customM = [
            'name.max' => "Name will maximum 255 characters",
            'name.required' => "Name must not be en empty string"
        ];
        
        $this->validate($request, $rules, $customM);

        $crud = new Crud();
        $crud->name = $request->name;
        $crud->job_title = $request->job_title;
        $crud->joining_date = $request->joining_date;
        $crud->salary = $request->salary;
        $crud->email = $request->email;
        $crud->mobile_no = $request->mobile_no;
        $crud->address = $request->address;
        $crud->save();
        
        Session::flash('message', 'Successfuly added!'); 
     
        return redirect()->back();
    }

    public function editData($id){
        $editData = Crud::find($id);
        return view('edit_data', compact('editData'));
    }
    
    public function updateData(Request $request, $id){
        
        $rules = [
            "title" => "required|max:20",
            "isbn"  => "required"
        ];

        $customM = [
            'title.max' => "Title maximum 20 characters",
            'title.required' => "Title must not be en empty string"
        ];
        
        $this->validate($request, $rules, $customM);

        $crud = Crud::find($id);
        $crud->title = $request->title;
        $crud->isbn = $request->isbn;
        $crud->save();
     
        return redirect('/');
    }

   // public function deleteData($id){
        
   //     $deleteData = Crud::find($id);
   //     $deleteData->delete();

    //    return redirect('/');
    //}
}
