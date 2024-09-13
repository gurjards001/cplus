#include<iostream>
using namespace std;
int main(){
int n,i;
cin>>n;
for ( i = 2; i < n; i++) /* here we can limit i upto squreroot of n,for squarerootthe func is --- sqrt() to use this function we
have to iclude math header file which is #include<cmath> */
{
if (n%i==0)
{
    cout<<"number is non prime";
    break;
}

}
if(i==n){
    cout<<"numer is prime";
}




}