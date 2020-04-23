//pair STL
//using tuple STL

//Sets are a type of associative containers in which 
//each element has to be unique, because the value of the element identifies it
//The value of the element cannot be modified once it is added to the set, 
//though it is possible to remove and add the modified value of that element
//The pairs in a set are stored in sorted order, sorted by the key i.e. the first value of the pair
//set<pair<datatype1, datatype2>>set_name;
#include <iostream>
#include <utility>
#include <string>
using namespace std;

template <typename ft, typename st>

void print(pair<ft,st> &p){
	cout<<"first : "<< p.first <<", second : "<< p.second<<endl;
}
int main(){
	//using initilizer list
	pair<int, int> p = {20, 30};
	print(p);

	//using makepair
	pair<string, string> p2 = make_pair("suraj", "prasad");
	print(p2);

	//using default constructor
	pair<int, string> p3(22, "is a number");
	print(p3);

	//using comparator operator.

	pair<int, string> p4(25, "xyz");

	cout<< (p3 > p4)<<endl;
	cout<< (p3 < p4)<<endl;
	cout<<(p3 == p4)<<endl;

}






