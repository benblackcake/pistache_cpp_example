# Pistache C++ Example
A simple example of creating a RESTful webservice using pistache (a modern c++ REST framework).

## Prerequisites:
1. C++
2. cmake
3. [Pistache](https://github.com/oktal/pistache)
4. [nlohmann/json](https://github.com/nlohmann/json)

## Steps to run the project:
1. Compile the whole implementation of respective headers (.cpp files) by the following command: **g++ -std=c++11 -c ./\*/\*.cpp**
2. Compile the main.cpp file along with the binary files (the output of all compiled implementation headers) by using the following command: **g++  -std=c++11 ./main.cpp ./\*.o -o ./main**
3. Run the project: **./main** then try to access localhost:9000/customers with method: GET.