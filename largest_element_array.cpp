#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    
    cout << "Enter the size of array: ";
    cin >> num;

    vector<int> arr(num);  // Using vector to handle dynamic array size

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < num; i++){  
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "The largest element is: " << largest;

    return 0;
}
