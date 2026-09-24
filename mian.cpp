#include<iostream>
#include<queue>
#include<thread>
#include"add.h"
using namespace std;

int main() {
    int pid=fork();
    if(pid==0)
        cout << "Hello, World!" <<add(1,2) << endl;
    else
    {
        wait(NULL);
    }
    int pid=fork();
    if(pid==0)
        cout << "Hello, World!" <<add(1,2) << endl;
    else
    {
        wait(NULL);
    }
        

    return 0;

    
}

clang++ -std=c++17 -D_ALLOW_COMPILER_AND_STL_VERSION_MISMATCH .\new.cpp -o .\new.exe

clang -std=c++17 -D_ALLOW_COMPILER_AND_STL_VERSION_MISMATCH .\mian.cpp .\new.cpp  -o main.exe