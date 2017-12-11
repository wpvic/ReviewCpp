#include <bits/stdc++.h>

using namespace std;

struct pointer_with_attributes{
    int id_of_pointer;
    string name_of_pointer;    
};

int main() {
	pointer_with_attributes* my_pointer = NULL;
	
	my_pointer = (struct pointer_with_attributes*)malloc(sizeof(struct pointer_with_attributes));
	
	my_pointer->id_of_pointer = 1983;
	my_pointer->name_of_pointer = "Spongebob";
	
	printf(" %d ", my_pointer->id_of_pointer);
	cout<<(*my_pointer).name_of_pointer;
	return 0;
}