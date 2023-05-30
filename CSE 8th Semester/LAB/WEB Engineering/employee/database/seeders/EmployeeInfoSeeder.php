<?php

namespace Database\Seeders;

use DB;
use Illuminate\Database\Seeder;
use Carbon\Carbon;

class EmployeeInfoSeeder extends Seeder
{
    /**
     * Run the database seeds.
     *
     * @return void
     */
    public function run()
    {
        DB::table('employee_information')->insert([
            'name' => 'Noyon',
            'job_title' => 'CEO',
            'joining_date' => Carbon::create('2020', '01', '01'),
            'salary' => '30000',
            'email' =>'mrnoyon.cse@gmail.com',
            'mobile_no' =>'01747430802',
            'address' => 'Dokhigojg, Rangpur',
            'created_at' => Carbon::now()->format('Y-m-d H:i:s'),
            'updated_at' => Carbon::now()->format('Y-m-d H:i:s')
        ]);
    }
}
