#include<iostream>
#include<algorithm>
using namespace std;
bool check(int a,int b, int c);
bool check(int a,int b, int c){
int x=max(a,max(b,c));int y,z;
if (x==a)
{
    /* code */y=b;z=c;
}
else if (x==b)
{
    /* code */y=a;z=c;
}
else{
    y=a;z=b;
}
if (x*x==y*y+z*z)
{
    /* code */return true;
}
return false;

}
int main(){
int a,b,c;
cin>>a>>b>>c;
if (check(a,b,c))
{
   cout<<" is triplet"; /* code */
}
else cout<<"not a triplet ";
}