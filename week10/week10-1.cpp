//week10-1.cpp SOIT108_Advance_002

# include <iostream>
using namespace std;
int isPrime(int N){ //只被1跟本身整除
    for (int i=2;i<N;i++){
        if (N%i==0)return 0;
    }
    return 1;
}
int main(){
    int a,b,ans=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i))ans++;
    }
    cout<<ans<<endl;
}
