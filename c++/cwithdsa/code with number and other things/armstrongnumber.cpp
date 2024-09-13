#include<iostream>
//#include<math.h>
using namespace std;
int main(){
int n,i;
cin>>n;
i=n;
int cubesum=0;

while (n>0)
{
 
    int lastdigit=n%10;
    cubesum+=(lastdigit*lastdigit*lastdigit);/*here we can use a function power for cube which is pow(lastdigit,3) but addtionally 
    we have to use a header file of math*/
    n=n/10;// loop will make n =0 so here 
}



if (cubesum==i)
{
   cout<<i<<" armstrong";
}
else {cout<<"not a armstrong";}
cout<<i<<" "<<n<<" "<<cubesum;


}