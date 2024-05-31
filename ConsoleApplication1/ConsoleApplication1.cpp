#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[10][10];
    arr[0][0] = n;

    for (int i = 1; i < 10; i++) {
        arr[i][0] = arr[i - 1][0] + 1;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}