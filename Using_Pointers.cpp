#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 100;
    int *p = &x;
    int *q = p;
    
    cout<<x<<' '<<&x<<endl;
    cout<<p<<' '<<*p<<' '<<&p<<endl;
    cout<<q<<' '<<*q<<endl;
    // *q prints the value at the memory address of variable q. but q holds the memory address of p.
    // but p holds the memory address of x
    
    //p is the address of x. p is a pointer
    // *p is the value that the address of memory p is. In this case, it's x address.
    // &p is p address
    
    std::cout << x << '\n'; // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x
    std::cout << *&x << '\n'; /// print the value at the memory address of variable x
    
    int value = 5;
    int *ptr = &value; // ptr points to value
    *ptr = 7; // *ptr is the same as value, which is assigned 7
    std::cout << value; // prints 7
}
