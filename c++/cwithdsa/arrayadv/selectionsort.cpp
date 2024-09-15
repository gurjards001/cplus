#include<iostream>
using namespace std;
int main(){
int count;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
    cin>>array[i];/* code */
}
int start=0;
for (int  i = 0; i < count-1; i++)
{
    for (int j = i+1; j < count; j++)
    {
      if (array[i]>array[j])
      {int tempo;
tempo=array[j];
array[j]=array[i];
array[i]=tempo;

      }
      
    }
    
}
for (int i = 0; i < count; i++)
{
    cout<<array[i]<<" ";
}




}