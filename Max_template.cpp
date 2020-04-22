// write max function for int max
//write template for int max

//do same of string , *char etc
#include <iostream>
#include <string>
using namespace std;
template <class T>
//class and type name are same. can be used in place of each other.
// T is alias for type used for call of template.
// template allows to write genric code without being concerned about type of variables
//template <typename T>

T maxof( const T &a, const T &b){
	return (a > b) ? a : b;
}

/*const char * maxof(const char * a , const char * b){
	return (a > b) ? a : b;
}*/

int main(){
	const char * a = "seven";
	const char * b = "12";

	cout<<"max of both is : " <<maxof<const char *>(a,b)<<endl;
	cout<<"max of both is : " <<maxof<int>(20,30)<<endl;
	return 0;
}