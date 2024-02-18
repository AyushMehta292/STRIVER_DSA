// Sum of even & odd
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int evenSum=0, oddSum=0;
	// cout<<n<<endl;
	while(n){
		// cout<<"n="<<n<<" ";
		if((n%10)%2==0) evenSum+=(n%10);
		else oddSum+=(n%10);
		n/=10;
	}
	cout<<evenSum<<" "<<oddSum;
	return 0;
}
