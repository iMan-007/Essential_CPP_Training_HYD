// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int data;
int y;
int *p;

//deadliest pointer
p=&data;
*p = 100;
p=&y;
*p = 200;
cout<<*p<<endl;

//q is a pointer pointing towards a constant integer
const int *q;
q=&data;
*q = 100;//error it is not allowed
q=&y;//allowed
*q = 200;
cout<<*q<<endl; //error it is not allowed

//r is a constant pointer pointing towards a constant integer
const int* const *r;
r=&data;
*r = 100;
r=&y;
*r = 200;
cout<<*r<<endl;
    

    return 0;
}
