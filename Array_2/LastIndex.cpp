#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input, array size must be positive." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array values: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter the value to find: ";
    cin >> x;

    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        cout << "Value not found in the array." << endl;
    } else {
        cout << "Index is: " << idx << endl;
    }

    return 0;
}
