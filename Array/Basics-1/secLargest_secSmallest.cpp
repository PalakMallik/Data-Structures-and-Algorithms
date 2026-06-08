#include <bits/stdc++.h>
using namespace std;


// Given an array of n elements, return second largest and second smallest elements in the array

int secondLargest(int arr[], int n){
        int largest = arr[0];
        int secLargest = INT_MIN;

        for(int i=1; i<n; i++){
            if(arr[i] > largest){
                secLargest = largest;
                largest = arr[i];
            }

            else if(arr[i] < largest && arr[i] > secLargest){
                secLargest = arr[i];
            }
        }

        return secLargest;
    }

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int secSmallest = INT_MAX;

    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            secSmallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] > smallest && arr[i] < secSmallest){
            secSmallest = arr[i];
        }
    }

    return secSmallest;
}

pair<int, int> getSecondOrderElements(int arr[], int n) {

    int secLargest = secondLargest(arr, n);
    int secSmallest = secondSmallest(arr, n);

    return {secLargest, secSmallest};
}


int main(){

    // Optimal solution 
    
    // Time complexity - O(n)
    // Space complexity - O(1)

    int arr[] = {22, 86, 90, 12, 45, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    auto result = getSecondOrderElements(arr, n);
    cout << "Second largest element: " << result.first << "\n";
    cout << "Second smallest element: " << result.second << "\n";

    return 0;
}

