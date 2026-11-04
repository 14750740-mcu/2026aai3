//week09-4.cpp SOIT106_ADVANCE_009
#include <iostream>
using namespace std;
void f(int n){
	if (n==0) return;
	cout <<n%10;
	f(n/10);
	//return f(n/10)*10+n%10;
}
int main(){
	int n;
	cin >>n;
	f(n);
	cout<<endl;
}
