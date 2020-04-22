#include <iostream>

using namespace std;
// main should never be templated.
/* constexpr indicates that the value, or return value, is constant and, where possible,
 is computed at compile time.A constexpr integral value can be used wherever a const 
 integer is required, such as in template arguments and array declarations. And when a value 
 is computed at compile time instead of run time, it helps your program run faster and use less memory.*/
template<typename T>
T var = T (23.33242335356353523234L);

int main(){
	
	cout.precision(20);
	cout<< var<int> <<endl;
	cout<< var<float> <<endl;
	cout<< var<double> <<endl;
	cout<< var<long double> <<endl;
	return 0;
}