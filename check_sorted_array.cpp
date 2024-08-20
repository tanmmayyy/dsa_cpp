#include <iostream>
using namespace std;
#include <vector>



int isSorted(int num,vector<int>arr){

    for (int i = 1; i<num; i++){
        if (arr[i]>arr[i-1]){
            
        }else{
            return false;
        }
        
    }
    return true;
}