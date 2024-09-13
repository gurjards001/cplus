#include<iostream>
using namespace std;
int main()
{
int row,coloum;
cin>>row>>coloum;
for (int i = 1; i <=row; i++)
{
    for (int j= 1; j <=coloum; j++)
    {
   if (i==1||i==row||j==1||j==coloum)
   {
   cout<<"*"<<"\t";
   }
   else 
   cout<<"\t";
    }
    cout<<endl;
}

}