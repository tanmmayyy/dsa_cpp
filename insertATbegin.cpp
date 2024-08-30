#include <iostream>
using namespace std;
#include <vector>

int main() {
    int value;
    cin >> value;
    vector<int> arr = {1,2,3,4,5};
    arr.resize(arr.size() + 1);
    
    for (int i = arr.size(); i>=0; i--){
        arr[i+1]= arr[i];
    }

    arr[0]= value;
    

    for (int i = 0; i<arr.size(); i++){
        cout << arr[i];
    }
}

