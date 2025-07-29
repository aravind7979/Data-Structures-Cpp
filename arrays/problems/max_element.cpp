#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 4, 15, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val)
            max_val = arr[i];
    }

    cout << "Maximum element: " << max_val << endl;

    return 0;
}
