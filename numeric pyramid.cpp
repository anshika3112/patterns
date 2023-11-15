1
1  2
1     3
1        4
1  2  3  4
//code
#include<iostream>
  using namespace std;
int main()  
{
    int n,j;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for( j=0;j<i+1;j++)
        {
           if((j==0)||(j==i)||(i==n-1))
            cout<<j+1;
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

