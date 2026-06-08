#include <bits/stdc++.h>
using namespace std;


// Given an array of size n, return the second largest element in the array
// If not found, return -1

int SecondLargest(int arr[], int n)
{
    if(n < 2) return -1;    // if not present, return -1
    int largest = arr[0];
    int secondLargest = INT_MIN;
    bool found = false;

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
            found = true;
        }

        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
            found = true;
        }
    }
    
    return found ? secondLargest : -1;   // if not found, return -1
}

int main(){
    // Optimal solution 
    
    // Time complexity - O(n)
    // Space complexity - O(1)

    int arr[] = {22, 86, 90, 12, 45, 30};
    
    cout << "Second largest element: " << SecondLargest(arr, 6) << "\n";

    return 0;
}

