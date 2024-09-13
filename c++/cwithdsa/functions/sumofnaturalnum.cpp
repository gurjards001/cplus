#include<iostream>
using namespace std;
int sumofnaturalnum(int n);
int sumofnaturalnum(int n){
    int sum=0;
for (int i = 1; i <=n; i++)
{
    /* code */sum = sum+i;

}
return sum;
}
int main(){
int n;
cin>>n;
cout<<sumofnaturalnum(n);


}