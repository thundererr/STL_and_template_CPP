/*
Sets vs Unordered Sets
Set is an ordered sequence of unique keys whereas unordered_set is a set in which key 
can be stored in any order, so unordered. Set is implemented as a balanced tree structure 
that is why it is possible to maintain order between the elements (by specific tree traversal). 
The time complexity of set operations is O(log n) while for unordered_set, it is O(1).

The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used.
*/

#include <iostream>
#include <set>

using namespace std;
template<typename T>
void print(set<T> s){
	for(auto it = s.begin(); it != s.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<endl;
} 
int main(){
	set<int> s1 = {1,2,4,5,6};
	print(s1);
	set<int> s2;
	s2 = s1;
	print(s2);
	cout<<(s2 == s1)<<endl;
	set<int> s3 = {1,2,4,7,8};
	cout<<(s3 > s1)<<endl;
	//copy constructor
	set<int> s4(s3);
	print(s4);

	swap(s1, s4);
	cout<<"s1"<<" ";
	print(s1);
	cout<<"s4 "<<" ";
	print(s4);

	//erase(const g)– Removes the value ‘g’ from the set.
	//clear() – Removes all the elements from the set.

	s1.clear();
	cout<<" Clear s1 ";
	print(s1);

	cout<<" erase :"<<s3.erase(9)<<endl;  // 0 beacuse key is not found
	cout<<" erase :"<<s3.erase(8)<<endl;	// 1 beacuse key is found

	//insert(const g) – Adds a new element ‘g’ to the set.
	return 0;
}