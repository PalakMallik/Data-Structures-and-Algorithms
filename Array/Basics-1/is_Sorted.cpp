#include <bits/stdc++.h>
using namespace std;


// Given an array, return 1 if it's sorted in ascending order, and 0 if not

int isSorted(const vector<int> &a) {

    for(int i=1; i<a.size()-1; i++){
        if(a[i] < a[i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    // Optimal solution 
    
    // Time complexity - O(n)
    // Space complexity - O(1) auxiliary space

    int arr[] = {22, 86, 90, 12, 45, 30};

    vector<int> vec = {22, 86, 90, 12, 45, 30};
    
    cout << "Sorted ? " << isSorted(vec) << "\n";

    return 0;
}

