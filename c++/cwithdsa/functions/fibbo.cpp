#include<iostream>
#include<math.h>
using namespace std;
void fib(int n);
void fib(int n){
   int  fibb1=0;
   int fibb2=1;
   int fibb;
for (int  i = 1; i <=n; i++)
{cout<<fibb1<<" ";
 fibb=fibb1+fibb2;
 fibb1=fibb2;
 fibb2=fibb;

}
}int main(){
int a;
cin>>a;

fib(a);


}