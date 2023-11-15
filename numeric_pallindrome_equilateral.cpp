        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1
  // code
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int k=n;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=0;j<k;j++)
        {
            if(j<n-1-i)
          cout<<" ";
          else if(j<=n-1)
          {
          cout<<c;
          c++;
          }
          else if(j==n)
          {
            c=c-2;
            cout<<c;
            c--;
          }
          else
          {
              cout<<c;
              c--;
          }
        }
        k++;
        cout<<endl;
    }
    return 0;
}
