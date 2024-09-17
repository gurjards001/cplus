#include<iostream>//max till i
using namespace std;
int main(){
int count;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
    cin>>array[i];
}
int max=INT_MIN;
int i;
cin>>i;
for ( int j = 0; j < i; j++)
{
if (array[j]>max)
{
   max=array[j];
}

}
cout<<max<<"\n";





}