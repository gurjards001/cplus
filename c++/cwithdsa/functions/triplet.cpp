#include<iostream>
using namespace std;
bool istriplet(int a,int b,int c);
bool istriplet(int a,int b,int c){
    if (a*a==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(a*a)+(b*b))
    {
        return true;

    }
    return false;

}
int main(){
int a,b,c;
cin>>a>>b>>c;
if (istriplet(a,b,c))
{
    /* code */cout<<" number is triplet";
}
else cout<<"not a triplet";

}