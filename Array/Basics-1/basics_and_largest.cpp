#include <bits/stdc++.h>
using namespace std;

int arr_global[6];   // array of six 0 values created (as it's declared outside main function)
                     // maximum size - 10^7 (globally)

int largestElement(int arr[], int n){

        int largest = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i] > largest){
            largest = arr[i];
            }
        }
        return largest;

        // Optimal solution 
    
        // Space complexity - O(1)
        // Time complexity - O(n)
    }

int secondLargest()

int main(){
    // Array - homogeneous data structure
    //       - fixed size
    //       - contiguous memory loactions

    // Brute
    //   |
    // Better
    //   |
    // Optimal  

    // int arr[6];   // array of 6 garbage values created (as it's declared inside main function)
                  // maximum size - 10^6 (inside main() function)


    int arr[] = {22, 86, 90, 12, 45, 30};
    
    cout << "Largest element: " << largestElement(arr, 6) << "\n";

    return 0;
}

