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

    //CONCEPTS
    /*
    int x=10;
int z=30;
int & y = x;
y=100;
y=z;

const int & a =x;
a=100;

int x;
int *p;
int & y; //not possible
int & y =x;

const int* p;
int* const p;
 const int* const p;
 
 const int & alias = x;//alias is an reference to an integer that is constant so no value change is possible
 alias = 100; //not possible because of above statement
 alias = z;//not possible in alias
    */
    

    return 0;
}
