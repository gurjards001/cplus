#include<iostream>
using namespace std;
int main(){
int count;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
 cin>>array[i];   /* code */
}
for (int i = 1; i < count; i++)
{
  for (int j = 0; j < count-i; j++)
  {
if (array[j]>array[j+1])
{
    /* code */int temmpo=array[j+1];
    array[j+1]=array[j];
    array[j]=temmpo;
}

  }
  
}
for (int i = 0; i < count; i++)
{
  cout<<array[i]<<" ";  /* code */
}






}