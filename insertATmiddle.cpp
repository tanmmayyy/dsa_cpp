#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int>arr = {1,2,3,4,5};
    arr.resize(arr.size()+1);

    int val ;
    cin >> val;

    int mid = arr.size()/2;

    for (int i = arr.size(); i>=mid; i--){
        arr[i+1] = arr[i];
    }

    arr[mid]= val;
    
    for (int i =0; i<arr.size(); i++){
        cout << arr[i]<<endl;;
    }
}