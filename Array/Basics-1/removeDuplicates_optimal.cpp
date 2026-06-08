#include <bits/stdc++.h>
using namespace std;


// You are given a sorted integer array 'arr' of size 'n'.
// You need to remove the duplicates from the array such that each element appears only once.
// Return the length of this new array.

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	for(int j=1; j<n; j++){
		if(arr[i] != arr[j]){
			arr[i+1] = arr[j];
			i++;
		}
	}
	return (i+1);
}

int main(){
    // Optimal Solution

    // Space Complexity: O(1)
    // Time Complexity: O(n)

    vector<int> vec = {12, 22, 30, 45, 45, 86, 86, 90, 90, 90};

    cout << "Total no of unique elements in array: " << removeDuplicates(vec, vec.size()) << "\n";
    
    cout << "Unique elements: " << "\n" << "{ ";
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }cout << "}" << "\n";


    for(int i=0; i<vec.size(); i++){          // see how the array has become after calling the function
        cout << vec[i] << " ";
    }cout << "\n";

    return 0;
}

