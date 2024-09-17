#include<iostream>
using namespace std;
int main(){
int count;
cin>>count;
int a[count];
for (int i = 0; i < count; i++)
{
    cin>>a[i];
}
int y=1;
int ans=INT_MIN;
for (int i = 1; i < count; i++)
{
if (a[i]-a[i-1]==a[i+1]-a[i])
{
 y++;
}
ans=max(y,ans);
}

cout<<ans<<"\n";






    
}











