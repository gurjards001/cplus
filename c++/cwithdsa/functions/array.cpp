#include<iostream>
using namespace std;
int main(){
int count;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
    /* code */cin>>array[i];

}

int max=INT_MIN;
int min=INT_MAX;
for (int i = 0; i < count; i++)
{
    /* we can also write this code as
    max=max(max,array[i]);
    min=min(min,array[i]);
     */
    if (array[i]>max)
    {
        max=array[i];
    }
     if (array[i]<min)
    {
        /* code */min=array[i];
    }
    
}
    
cout<<"minimum number is "<<min<<"\t"<<"miaxmum number is "<<max<<"\n";



}