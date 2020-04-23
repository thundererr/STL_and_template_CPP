//Vector STL
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T> &v){
	if(v.empty())	return ;
	for(auto it = v.begin(); it != v.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}

template <typename Tm, typename Tv>
void log(const Tm &message, const Tv &value){
	cout<<message<<"  "<< value<<endl;
}

int main(){
	//using initilizer list;
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	//initilization with same value;
	vector<int> v2(5, 4);

	print(v);
	print(v2);
	//size , front, back
	log("size :",v.size());
	log("front :",v.front());
	log("back :",v.back());
	//index 
	log("element at 2 :", v[2]);
	log("element at 2 :", v.at(2));

	//insert
	v.insert(v.begin()+5, 23);
	print(v);

	v2.insert(v2.end(),{1,2,3,4,5});
	print(v2);

	//erase
	v.erase(v.begin()+5);
	print(v);

	//push back
	v.push_back(11);
	print(v);
	//pop back
	v.pop_back();
	print(v);
	//empty
	log("is empty :", v2.empty());

	//clear
	v2.clear();
	log("clear v2 :", v2.empty());

	//copy constructors
	vector<int> v3(v);
	cout<<"using copy constructor"<<endl;
	print(v3);

	//move constructor
	vector<int> v4(move(v3));
	log("v4 size :", v4.size());
	log("v3 size :", v3.size());


	return 0;
}