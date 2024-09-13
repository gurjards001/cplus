#include<iostream>
using namespace std;
bool isprime(int n);
bool isprime(int n){
for (int i = 2; i < n; i++)
{
   if (n%i==0)
   {
    /* code */return false;
   }
} return true;
}
int main(){
int num1,num2;
cin>>num1>>num2;
for (int i = num1; i <= num2; i++)
{
    /* code */if (isprime(i))
    {
     cout<<i<<"\n";
    }
    
}




}