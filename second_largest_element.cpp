#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    int num;

    cout << "Enter the size of the array: ";
    cin >> num;

    if (num < 2) {
        cout << "Array should have at least two elements." << endl;
        return 1;
    }

    vector<int> arr(num);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int slargest = INT_MIN; 

    for (int i = 1; i < num; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    if (slargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << slargest << endl;
    }

    return 0;
}
