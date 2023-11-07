1
2 * 2
3 * 3 * 3
4 * 4 * 4
//code
#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cout << "Enter n: ";
    cin >> n;
     for(int i = 0; i < n; i++) {
       // inverted pyramid;
       for(j=0;j<2*i+1;j++)
       {
           if(j%2==1)
           cout<<" * ";
           else
           cout<<i+1;
       }
        cout<<endl;
    }
   
    return 0;
}

