@extends('layout')

@section('page-content')
    <h1 class="text-center text-primary">Welcome to Employee information System</h1>

    <div class="container">
        <a href="{{url('/add-data')}}" class="btn btn-primary my-3">Add Data</a>
        <a href="{{url('/')}}" class="btn btn-primary my-3">Show Book</a>

        <form action="{{url('/')}}", method="GET">
            <div class="input-group mb-3">
                <input type="text" name='search' class="form-control" value="{{ request('search') }}" placeholder="Keyword" aria-label="Recipient's username" aria-describedby="basic-addon2">
                <div class="input-group-append">
                    <button class="btn btn-outline-danger" type="submit">Search</button>
                </div>
            </div>
        </form>

        <table class="table">
            <thead>
                <tr>
                    <th scope="col">ID</th>
                    <th scope="col">Title</th>
                    <th scope="col">ISBN</th>
                    <th scope="col">Action</th>

                </tr>
            </thead>
            <tbody>
                @foreach($showData as $key=>$employee_information)
                <tr>
                    <td>{{$key}}</td>
                    <td>{{$employee_information->name}}</td>
                    <td>{{$employee_information->job_title}}</td>
                    <td>
                        <a href="{{url('/edit-data/'.$employee_information->id)}}" class="btn btn-success">Edit</a>
                        <a href="{{url('/delete-data/'.$employee_information->id)}}" class="btn btn-danger">Delete</a>
                    </td>
                </tr>
                @endforeach
            </tbody>
        </table>
        {{$showData->links()}}
    </div>
@endsection
