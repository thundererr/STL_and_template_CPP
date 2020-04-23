//The array::data() is a built-in function in C++ STL 
//which returns an pointer pointing to the first element in the array object.

#include <iostream>
#include <array>

using namespace std;

template <typename T, size_t n>
void print(array<T,n> &arr){
	for(auto i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	array<int, 5> arr = {1,2,3,4,5};
	print(arr);

	auto it = arr.data();

	cout<<*it<<endl;

	for(auto i = arr.begin(); i != arr.end(); ++i){
		cout<<*i<<" ";
	}
	cout<<endl;
	return 0;
}