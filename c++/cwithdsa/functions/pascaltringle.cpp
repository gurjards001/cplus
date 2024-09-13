#include<iostream>
using namespace std;
int fact(int n);
int fact(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
       fact=fact*i;
    }
    return fact;
    
}
void pascaltringle(int num);
void pascaltringle(int num){
cout<<"1"<<endl;
for (int n = 1; n < num; n++)
{
  for (int r = 0; r <=n ; r++)
  {
    
    
        cout<<fact(n)/(fact(n-r)*fact(r))<<" ";

    
  }
    cout<<endl;

}


}
int main(){

    int number;
    cin>>number;
    pascaltringle(number);
}