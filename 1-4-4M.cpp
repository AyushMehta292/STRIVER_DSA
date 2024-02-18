//1
#include<bits/stdc++.h>
int calcGCD(int n, int m){
    // Write your code here.
    return gcd(n,m);
}

//2
int calcGCD(int n, int m){
    // Write your code here.
    if(m>n) return calcGCD(m, n);
    if(m==n) return n;
    int divisor=n-m;
    // cout<<"divisor="<<divisor<<" ";
    if(n%divisor==0 && m%divisor==0) return divisor;
    else return calcGCD(m, divisor);
}