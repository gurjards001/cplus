#include<iostream>
using namespace std;
int binarysearch(int array[],int n,int key);
int bianrysearch(int array[], int n ,int key ){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (key==array[mid])
        {
            return mid;
        }
        else if (key<array[mid])
        {
            e=mid-1;
        }
        else if (key>array[mid])

        {
        s=mid+1;    /* code */
        }
        
    }
    return -1;
}
int main(){
int count;
cin>>count;
int array[count];
for (int i = 0; i < count; i++)
{
    /* code */cin>>array[i];
}
int key;
cin>>key;
cout<<bianrysearch(array,count,key);



}