//User Input / Output
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin>>ch;
	if(ch-'A'>=0 && ch-'Z'<=0) cout<< 1;
	else if(ch-'a'>=0 && ch-'z'<=0)cout<< 0;
	else cout<< -1;
	return 0;
}