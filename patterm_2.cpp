1
1 _ 2
1 _ _ 3
1 _ _ _ 4
1 2 3 4 5
//code
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <=n; i++) {
        // inverted pyramid
        for (int j = 1; j <= i; j++) {
            if (i == 1 || i == n ) {
                cout << j ;
            } else {
                if (j == 1 || j == n - i ) {
                    cout << j;
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
