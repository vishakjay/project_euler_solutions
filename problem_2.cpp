#include<bits/stdc++.h>
using namespace std;
unsigned long long fib(unsigned long long){
  long long a=1,b=2,c=0;
  unsigned long long sum=0;
  while(b<=n){
    if(b%2==0){
      sum+=b;
    }
    c=a+b;
    a=b;
    b=c;
  }
}
int main(){
unsigned long long ans=fib(4e6);
  cout<<ans<<endl;
  return 0;
}
//Answer is 4613732
