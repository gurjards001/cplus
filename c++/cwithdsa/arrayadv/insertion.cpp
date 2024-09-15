#include<iostream>
using namespace std;
int main(){
int count;
cin>>count;
int array[count];
for (int  i = 0; i < count; i++)
{
    cin>>array[i];
    /* code */
}
for (int i = 1; i < count; i++)
{int current=array[i];
int x=i-1;
while (array[x]>current&&x>=0)
{
   array[x+1]=array[x];
   x--;

    
}
array[x+1]=current;

}
for (int i = 0; i < count; i++)
{
   cout<<array[i]<<" "; /* code */
}





}