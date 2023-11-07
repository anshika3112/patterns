*     *
 *   *
  * *
   *
// code
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i <=n; i++) {
        for(int j = 0; j <i ; j++) {
            cout << " ";
        }
        int total=n-i;
        for(int j = 0; j <total; j++) {
            if((j==0)||(j==total-1))
            cout << "* ";
            else
            cout<<"  ";
        }
        cout << endl;
    }

    return 0;
}
