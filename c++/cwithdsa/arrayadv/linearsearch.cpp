#include<iostream>
using namespace std;
int linearsearch(int array[],int n,int key);
int linearsearch(int array[],int n,int key){
for (int i = 0; i < n; i++)
{
    /* code */if (key==array[i])
    {
        /* code */return i;

    }
    
}
return -1;




}
int main(){
int count;
cin>>count;
int array1[count];
for (int i = 0; i < count; i++)
{
    /* code */cin>>array1[i];
}

int key;
cin>>key;
cout<<linearsearch(array1,count,key);




}