// WEEK01-2.CPP
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >>N;
	int b=N,ans=0;
	while (N>0){
		ans=ans*10+N%10;
		N=N/10;
	}
	// cout <<b<<ans<<b+ans;
	cout <<b<<"+"<<ans<<"="<<b+ans<<endl;
}
	
	
