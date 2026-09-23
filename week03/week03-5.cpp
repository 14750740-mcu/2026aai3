///week03-5.cpp 想要真的認識 vector<int>a 
#include <iostream>
#include <vector> /// 本週教 C++ 陣列(伸縮自如的陣列) 
using namespace std;
int main(){
	vector<int> a;/// 宣告「伸縮自如」的陣列
	a.push_back(99);/// 塞入99 
	a.push_back(88);/// 塞人88 
	a.push_back(77);/// 塞入77
	for (int i=0; i < a.size(); i++) cout << a[i] << " ";
	cout << endl; ///跳行 
	
	a.push_back(88);/// 塞人88 
	a.push_back(77);/// 塞入77
	for (int i=0; i < a.size(); i++) cout << a[i] << " ";
	cout << endl; ///跳行 
}
