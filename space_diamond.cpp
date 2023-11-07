* * * *   * * * *
* * *       * * *
* *           * *
*               *
*               *
* *           * *
* * *       * * *
* * * *    * * * *
// code
#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cout << "Enter n: ";
    cin >> n;
     for(int i = 0; i < n; i++) {
       // inverted pyramid;
       for(j=0;j<n-i;j++)
       cout<<"*";
       // spaces pyramid
       for(j=0;j<2*i+1;j++)
       cout<<" ";
       //mirror inverted pyramid
       for(j=0;j<n-i;j++)
       cout<<"*";
       cout<<endl;
    }
    for(int i = 0; i < n; i++) {
       // inverted pyramid;
       for(j=0;j<i+1;j++)
       cout<<"*";
       // spaces pyramid
       for(j=0;j<2*n-2*i-1;j++)
       cout<<" ";
       //mirror inverted pyramid
       for(j=0;j<i+1;j++)
       cout<<"*";
       cout<<endl;
    }
    return 0;
}
