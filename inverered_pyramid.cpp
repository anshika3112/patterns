* * * * *
 * * * *
  * * *
   * *
    *
// code
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter n";
    cin>>n;
   for(int i=0;i<n;i++)
   {
       //spaces
       for(j=0;j<i;j++)
       {
       cout<<" ";
       }
       //stars
       {
           for(int j=0;j<n-i;j++)
           cout<<"* ";
       }
       cout<<endl;
   }
    return 0;
}
