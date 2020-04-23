//tuple

//A tuple is an object that can hold a number of elements. The elements can be of different data types
//get() :- get() is used to access the tuple values and modify them,
//make_tuple() :- make_tuple() is used to assign tuple with values.
// tuple_size :- It returns the number of elements present in the tuple.
// swap() :- The swap(), swaps the elements of the two different tuples.
// tuple_cat() :- This function concatenates two tuples and returns a new tuple

#include <iostream>
#include <tuple>
#include <utility>
#include <string>

using namespace std;

template <typename T>
void print(T & tup){
	auto size = tuple_size<T> ::value;
	cout<<get<0>(tup)<<" : "<<get<1>(tup)<<" : "<<get<2>(tup)<<endl;
}

int main(){
		//using initilizer list
	tuple<int, int, int> tup1 = {12, 23, 34};
	print(tup1);
	tuple<int, int, int> tup2 = make_tuple(23,34,343);
	print(tup2);
	tuple<int,int,int> tup3(12, 24, 34);
	print(tup3);

	get<0>(tup1) = 14;
	get<2>(tup1) = 25;

	print(tup1);
	cout<<(tup1 > tup2)<<endl;
	cout<<(tup2 < tup1)<<endl;
	cout<<(tup1 == tup2)<<endl;
	return 0;
}