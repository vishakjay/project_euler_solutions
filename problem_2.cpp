#include<bits/stdc++.h>
using namespace std;
long long fib(long long n){
	long long a=1,b=2,c=0;
	//unsigned long long last;
	unsigned long long sum=0;
	//vector<long long>v
	while(c<=n){
		
		if(b%2==0){
			//v.push_back(b);
			sum+=b;
			//cout<<b<<" ";
		}
		c=a+b;
		a=b;
		b=c;
	}
	//long long sum=0;
	//sum=accumulate(v.begin(),v.end(),sum);
	//cout<<sum/2<<" ";
	return sum;
}
int main(){
	long long ans=fib(4e6);
	cout<<ans;
	return 0;
}
