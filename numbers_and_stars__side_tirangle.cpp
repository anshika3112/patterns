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
     for(int i = 1; i <= n; i++) {
       // inverted pyramid;
       for(j=1;j<=i;j++)
       cout<<i <<"*" ;
        cout<<endl;
    }
   
    return 0;
}
