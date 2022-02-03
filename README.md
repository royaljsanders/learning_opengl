# learning_opengl
## How to build
First need glfw set up
https://www.glfw.org/docs/latest/compile_guide.html

put the 'glfw-3.3.6' folder into your project root directory, rename it 'glfw'

```
cd learning_opengl/include/glfw-3.3.6
// follow instructions in glfw documentation
cmake ..
sudo make
sudo make install

```
Then, add glad. 
Now, you can compile the project.

```
cd learning_opengl
mkdir build
cd build
cmake ..
make
sudo make install
cd ..
g++ main.cpp glad.c -o main.o -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl
./main.o
```
