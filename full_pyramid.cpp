    *
   * *
  * * *
 * * * *
* * * * *
// code
#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        // spacess
        for(j=0;j<n-i-1;j++)
        { 
          cout<<" ";  
        }
        //stars
        for(int j=0;j<i+1;j++)
        cout<<"* ";
        
        cout<<endl;
    }
    return 0;
}
