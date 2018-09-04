# target_func_ptr

Contains the `typedef` for `TARGET_FUNC_PTR` that expect the
optimization variables `x`, the number of variables `n` and 
an array or pointer to function specifc parameters. 

Use the `double *param = NULL` pointer if the user defined 
optimization function does not expect other parameters.


### Installation
```
clib install hcnn/target_func_ptr
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/target_func_ptr": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/target_func_ptr/blob/master/test.c) and [demo.c](https://github.com/hcnn/target_func_ptr/blob/master/demo.c)

```
git clone git@github.com:hcnn/target_func_ptr.git
cd target_func_ptr
make validate
make showcase
```

### Explanations
Further explanations in [README.ipynb](README.ipynb)
