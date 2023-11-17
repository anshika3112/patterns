#include<iostream>
using namespace std;                // stars number+star star
// * * * * * * * * 1 * * * * * * * *    8      1          8
// * * * * * * * 2 * 2 * * * * * * *    7     2+1         7
// * * * * * * 3 * 3 * 3 * * * * * *    6     3+2         6
// * * * * * 4 * 4 * 4 * 4 * * * * *    5     4+3         5
// * * * * 5 * 5 * 5 * 5 * 5 * * * *    4     5+4         4
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int start=8-i;
        int num=i+1;
        int count=num;
        for(int j=0;j<17;j++)
        {
          if(j==start && count>0)
          {
              cout<<num<<" ";
              start+=2; 
              count--;
          }
          else
          cout<<"* ";
        }
        cout<<endl;
    }
}
  
