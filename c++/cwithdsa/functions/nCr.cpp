#include<iostream>
using namespace std;
int fact(int n);
int fact(int n){int fact=1;
for(int i =1;i<=n;i++){
    fact=fact *i;}
return fact;}
int main(){
int n,r;
cin>>n>>r;
cout<<"ncr is"<<fact(n)/(fact(n-r)*fact(r));



}