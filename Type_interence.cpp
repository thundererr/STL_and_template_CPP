
//Type Inference refers to automatic deduction of the data type of an expression in a programming language
//typeid is an operator which is used where dynamic type of an object need to be known.
// typeid(x).name() return shorthand name of the data type of x,

// it return i for integers, d for doubles, Pi for the pointer to integer etc

//decltype lets you extract the type from the variable 
//so decltype is sort of an operator that evaluates the type of passed expression

#include <iostream>

using namespace std;

int main(){
	int p = 20;

	string s = " this is string";

	const char * ch = "this char pointer";

	cout<<typeid(p).name()<<endl;
	cout<<typeid(s).name()<<endl;
	cout<<typeid(ch).name()<<endl;

	auto a = "this is string";
	decltype(a) y;

	cout<<typeid(a).name()<<endl;
	cout<<typeid(y).name()<<endl;

	for (auto it = s.begin(); it != s.end(); ++it){
		cout<< (*it)<<" " ;
	}
	return 0;
}