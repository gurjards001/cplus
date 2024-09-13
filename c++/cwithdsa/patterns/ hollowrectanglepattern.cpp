
#include<iostream> // HOLLOW REACTANGLE PRINT WITH INPUT BY USER  
using namespace std;
int main()
{
int rows,coloum;
cin>>rows>>coloum;
for (int i = 1; i <=rows; i++)
{
if (i==1||i==rows)
{
  for (int j = 1; j <= coloum; j++)
  {
    /* code */cout<<"*"<<"\t";
  }
  cout<<endl;
}
else{

   
    for ( int k = 1; k <= coloum; k++)
    {
        if (k==1||k==coloum)
        {
            cout<<"*"<<"\t";
        }
        else
    {
        cout<<"\t";
    }
 if (k==coloum)
 {
    cout<<"\n";
 }
 
    }
    
    
}


}





}