1 2 3 4 5
2     5
3  5
4 5
5
  //code
#include <iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for( j=i+1;j<n+1;j++)
        {
           if((j==i+1)||(i==0)||(j==n))
            cout<<j;
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
