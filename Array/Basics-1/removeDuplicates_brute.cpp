#include <bits/stdc++.h>
using namespace std;


// Given an array, return the no of unique elements in it and also print them

// Brute force approach  
// Detailed analysis: TC -  O(n log n + n)              base = 2
//        but simplified to O(n log n)

int removeDuplicates_brute(int arr[], int n) {

    set<int> s;            
    for(int i=0; i<n; i++){       // O(n log n)         base = 2
        s.insert(arr[i]);
    }

    int index = 0;
    for(auto val : s){            // O(n)
        arr[index] = val;
        index++;
    }

    return index;
}


int main(){
    // Brute force solution
     
    // Time complexity - O(n log n)            base = 2
    // Space complexity - O(n)

    // Each insertion into a set takes O(log n).   (most operations in sets have TC - O(log n)  except Traversal	- O(n)  and  size() - O(1))

    // insert(), erase(), find(), count() -> O(log n)
    // traversal -> O(n)
    // size() -> O(1)

    // So for n insertions:  O(n log n)

    int arr[] = {12, 22, 30, 45, 45, 86, 86, 90, 90, 90};

    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> vec = {12, 22, 30, 45, 45, 86, 86, 90, 90, 90};

    int k = removeDuplicates_brute(arr, n);

    cout << "Total no of unique elements in array: " << k << "\n";
    
    cout << "Unique elements: " << "\n" << "{ ";
    for(int i=0; i<k; i++){
        cout << arr[i] << " ";
    }cout << "}" << "\n";


    for(int i=0; i<n; i++){          // see how the array has become after calling the function
        cout << arr[i] << " ";
    }cout << "\n";

    return 0;
}

