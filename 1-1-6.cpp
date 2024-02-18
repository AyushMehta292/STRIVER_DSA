// For loops (fibonacci)
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int a=1, b=1;
        int n;
        cin>>n;
        for(int i=3; i<=n; i++){
                int temp=a+b;
                a=b;
                b=temp;
        }
        cout<< b;
        return 0;
}