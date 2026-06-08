#include <bits/stdc++.h> 
using namespace std;

// provided an array, remove all duplicate elements and return the array, maintain the order in which the elements were supplied

vector<int> removeDuplicates(vector<int> arr) {
  
  unordered_set<int> seen;
  vector<int> ans;

  for(int i=0; i<arr.size(); i++){
    if(seen.find(arr[i]) == seen.end()){
      ans.push_back(arr[i]);
      seen.insert(arr[i]);
    }
  }

  return ans;
}

int main(){
    // Optimal Solution

    // Space Complexity: O(n)
    // Time Complexity: O(n)

    vector<int> vec = {12, 22, 30, 45, 45, 86, 86, 90, 90, 90};

    vector<int> result = removeDuplicates(vec);
    
    cout << "New array: " << "\n" << "{ ";
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }cout << "}" << "\n";

    return 0;
}