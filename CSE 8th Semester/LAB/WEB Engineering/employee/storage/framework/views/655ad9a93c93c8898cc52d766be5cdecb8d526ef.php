<!doctype html>
<html lang="en">

<head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">

    <title>Add Employee</title>
</head>

<body>

    <div class="container">
        <a href="<?php echo e(url('/')); ?>" class="btn btn-primary my-3">Show Employee</a>

        <?php if(Session::has('message')): ?>
        <p class="alert alert-info"><?php echo e(Session::get('message')); ?></p>
        <?php endif; ?>

        <form action="<?php echo e(url('/store-data')); ?>" method="POST">

            <?php echo csrf_field(); ?>
            <div class="mb-3">
                <label for="name" class="form-label">Name</label>
                <input type="text" value="<?php echo e(old('name')); ?>" class="form-control" name="name" id="name">
            </div>
            <div class="mb-3">
                <label for="job_title" class="form-label">Job title</label>
                <input type="text" value="<?php echo e(old('job_title')); ?>" class="form-control" name="job_title" id="job_title">
            </div>
            <div class="mb-3">
                <label for="joining_date" class="form-label">Joining Date</label>
                <input type="date" value="<?php echo e(old('joining_date')); ?>" class="form-control" name="joining_date" id="joining_date">
            </div>
            <div class="mb-3">
                <label for="salary" class="form-label">Salary</label>
                <input type="number" value="<?php echo e(old('salary')); ?>" class="form-control" name="salary" id="salary">
            </div>
            <div class="mb-3">
                <label for="email" class="form-label">Email</label>
                <input type="email" value="<?php echo e(old('email')); ?>" class="form-control" name="email" id="email">
            </div>
            <div class="mb-3">
                <label for="mobile_no" class="form-label">Mobile No</label>
                <input type="number" value="<?php echo e(old('mobile_no')); ?>" class="form-control" name="mobile_no" id="mobile_no">
            </div>
            <div class="mb-3">
                <label for="address" class="form-label">Address</label>
                <input type="text" value="<?php echo e(old('address')); ?>" class="form-control" name="address" id="address">
            </div>
            
            <button type="submit" class="btn btn-primary">Submit</button>
        </form>


        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p" crossorigin="anonymous"></script>

        <!-- Option 2: Separate Popper and Bootstrap JS -->
        <!--
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.10.2/dist/umd/popper.min.js" integrity="sha384-7+zCNj/IqJ95wo16oMtfsKbZ9ccEh31eOz1HGyDuCQ6wgnyJNSYdrPa03rtR1zdB" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.min.js" integrity="sha384-QJHtvGhmr9XOIpI6YVutG+2QOK9T+ZnN4kzFN1RtK3zEFEIsxhlmWl5/YESvpZ13" crossorigin="anonymous"></script>
    -->
</body>

</html><?php /**PATH D:\Education\8th Semester\LAB\WEB Engineering\employee\resources\views/add_data.blade.php ENDPATH**/ ?>