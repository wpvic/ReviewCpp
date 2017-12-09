#include <iostream>
using namespace std;

struct myStruct{
    int x = 10;
    double y;
    
    struct myStruct *something;
    // this is a pointer that points to this struct
};

int main() {
    myStruct thing1;
    cout<<thing1.x<<endl;
    cout<<thing1.something<<"\n";
    cout<<&thing1<<"\n";
}