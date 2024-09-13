#include <iostream>
using namespace std;
int main ()
{
  int a,b;
  char operatorr;

  cin>>a>>b>>operatorr;
  switch (operatorr)
  {
  case '+':
  cout<<a+b;
    break;
  case '-':
  cout<<a-b;
    break;
    case '*':
  cout<<a*b;
    break;
    case '/':
  cout<<a/b;
    break;
    case '%':
  cout<<a%b;
    break;
  default:
cout<<"i am not a scientific calculator";   break;
  }
    
  
  
 

   
 }
 
 

