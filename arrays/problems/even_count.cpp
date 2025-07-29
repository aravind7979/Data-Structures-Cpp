#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 6, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            count++;
    }

    cout << "Count of even numbers: " << count << endl;

    return 0;
}
