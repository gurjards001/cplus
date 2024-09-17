#include<iostream>
using namespace std;
int main(){
int count;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
    cin>>array[i];
}
for (int i = 0; i < count; i++)
{
    int sum=0;
    for (int j = i; j < count; j++)
    {
        sum=sum+array[j];
    }
    cout<<sum<<"\t";
}








}