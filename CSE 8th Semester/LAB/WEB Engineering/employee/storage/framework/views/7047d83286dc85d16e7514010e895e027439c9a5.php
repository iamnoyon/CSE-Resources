

<?php $__env->startSection('page-content'); ?>
    <h1 class="text-center text-primary">Welcome to Employee information System</h1>

    <div class="container">
        <a href="<?php echo e(url('/add-data')); ?>" class="btn btn-primary my-3">Add Data</a>
        <a href="<?php echo e(url('/')); ?>" class="btn btn-primary my-3">Show Book</a>

        <form action="<?php echo e(url('/')); ?>", method="GET">
            <div class="input-group mb-3">
                <input type="text" name='search' class="form-control" value="<?php echo e(request('search')); ?>" placeholder="Keyword" aria-label="Recipient's username" aria-describedby="basic-addon2">
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
                <?php $__currentLoopData = $showData; $__env->addLoop($__currentLoopData); foreach($__currentLoopData as $key=>$employee_information): $__env->incrementLoopIndices(); $loop = $__env->getLastLoop(); ?>
                <tr>
                    <td><?php echo e($key); ?></td>
                    <td><?php echo e($employee_information->name); ?></td>
                    <td><?php echo e($employee_information->job_title); ?></td>
                    <td>
                        <a href="<?php echo e(url('/edit-data/'.$book->id)); ?>" class="btn btn-success">Edit</a>
                        <a href="<?php echo e(url('/delete-data/'.$book->id)); ?>" class="btn btn-danger">Delete</a>
                    </td>
                </tr>
                <?php endforeach; $__env->popLoop(); $loop = $__env->getLastLoop(); ?>
            </tbody>
        </table>
        <?php echo e($showData->links()); ?>

    </div>
<?php $__env->stopSection(); ?>

<?php echo $__env->make('layout', \Illuminate\Support\Arr::except(get_defined_vars(), ['__data', '__path']))->render(); ?><?php /**PATH D:\Education\8th Semester\LAB\WEB Engineering\employee\resources\views/welcome.blade.php ENDPATH**/ ?>