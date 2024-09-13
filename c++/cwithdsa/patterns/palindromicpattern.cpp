#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for (int i = 01; i <=n; i++)
{ for (int j = 1;j<=n-i; j++)
    {
      cout<<" ";
}
    for (int k = 1; k<=(2*i+1); k++)
    {
 if ((i-k+1)>0)
        {
        cout<<(i-k+1);
 }   
    }
    for (int  p = 1; p <=(i-1); p++)
    {
     cout<<(p+1);
    }
cout<<endl;   
    }
}








