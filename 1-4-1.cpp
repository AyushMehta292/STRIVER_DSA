// You are given a number ’n’. Find the number of digits of ‘n’ that divide ‘n’.
int countDigits(int n){
	// Write your code here.	
	int x=n;       
	int count=0;
	while(x){
		// cout<<x;       
		int temp=x%10; 
		x/=10;         
		if(temp!=0 && n%temp==0) {count++;}
	}
	return count;
}