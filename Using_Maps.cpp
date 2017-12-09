#include <bits/stdc++.h>
using namespace std;

int main(){
    map<vector<int>, int> my_map;
    std::vector<int> triple { 5,2,99 };
    my_map[triple] = 78;
    my_map[{1,2,3}] = 1234; 
    cout<<my_map[triple]<<endl;
    cout<<my_map[{1,2,3}];
}
