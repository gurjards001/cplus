#include<iostream>
#include<math.h>
using namespace std;
int hexa(int n);
int hexa(int n){
    int ans=0;
for (int  i = 0; n>0; i++)
{
    /* code */int remainder=n%16;
    ans=ans+remainder*pow(2,i);
    n=n/16;
}
return ans;


}
int decimal(int n);
int decimal(int n){
int ans=0;
for (int  i = 0; n>0; i++)
{
    /* code */int remainder=n%10;
    ans=ans+remainder*pow(2,i);
    n=n/10;
}
return ans;
}
int main(){
    int binarynum;
    cin>>binarynum;
    cout<<decimal(binarynum)<<hexa(binarynum)<<"\n";
}