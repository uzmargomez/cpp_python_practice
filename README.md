# C++ Python Practice

I made this repo as a simple practice to create C++ functions and classes, and used them in Python using Pybind11. I used this [repo](https://github.com/bast/pybind11-demo) as a guidance (I mostly copied everything there).

In order to use Pybind11 in your project, follow these steps:

1. Do either one of these

    - Create a new repository in Github, and then clone it locally. 

    - You could also clone this repo as a guidance using the command

            git clone --recursive https://github.com/bast/cpp_python_practice.git

        Notice the `--recursive` flag, which is necessary to get all the files contained in the pybind11 directory.

2. Add [pybind11](https://github.com/pybind/pybind11/tree/b490b44e34f57433e562a2f8f7de6202f30a017a) as a submodule of your repo using the following code

        git submodule add -b stable git@github.com:pybind/pybind11.git pybind11

3. Create a file similar to the [CMakeLists.txt](CMakeLists.txt). This defines the needed files and the pybind11 submodules you want to add.

4. The C++ files that contain the modules are located in [src](src)

5. Create a *build* directory and compile the files defined in [CMakeLists.txt](CMakeLists.txt). 

        mkdir build
        cd build
        cmake ..
        make

6. Then just run a python file as the one provided 

        ```python
        >>> from build.main_module import add
        >>> from build.other_module import multiply
        >>> from build.main_module import Pet

        >>> print(add(2,3))
        5
        >>> print(multiply(2,3))
        6
        >>> my_dog = Pet('Pluto', 5)
        >>> print(my_dog.get_name())
        Pluto
        >>> print(my_dog.get_hunger())
        5
        >>> my_dog.go_for_a_walk()
        >>> print(my_dog.get_hunger())
        6
        ```

    Here *build* is the name of the directory where the compiled files are, you could change it as you want. 


## Important things

- Notice that, in the file [src/main.cpp](src/main_file.cpp) we defined the module name as *main_module* 
        
        PYBIND11_MODULE(main_module, m)

    This should be the name you use to import the function in python.