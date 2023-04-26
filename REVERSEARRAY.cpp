// Reverse the array using minimum comparisons-
//The entire logic for reversing a array/string is based on using the opposite directional two-pointer approach!
#include<iostream>
#include<stack>
using namespace std;
int main(){
// #1) Traversing and Printing it from the last element till the 1st element T.C.=O(N), O(1)
   int n;
   cin>>n;
   int arr[n];
   // int n = sizeof(arr)/sizeof(arr[0]); Finding the array size when already i/p array is given
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   for(int i=n-1; i>=0; i--){
    cout<<arr[i]<<endl;
   }
// #2) Using Extra Auxillary Array, T.C.=O(N), S.C.=O(N)
    int k=0; int rev[n];
    for(int i=n-1; i>=0; i--){
        rev[k]=arr[i];
        k++;
    }
    for(int k=0;k<n;k++){
        cout<<rev[k]<<endl;
    }

// #3) Using Stack  T.C.=O(N), S.C.=O(N)
    stack <int> stack; // Declaring a stack variable
 
    for (int i = 0; i < n; i++) { //Initializing stack with array values
        stack.push(arr[i]);
    }
    int idx = 0;
    while (!stack.empty())
    {
        // assign each popped item back to the original array
        arr[idx] = stack.top();
        stack.pop();
        idx++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

/* #4)Best Approach-Swapping array elements using two pointers    (Start and End Pointers)       T.C.=O(N),S.C.=O(1) (In-Place)
   // Two cases: 
   i) Array is of odd length [2,3,4,5,6]
   ii) Array is of even length 
*/
int s=0,e=n-1;// Start Pointer, End Pointer
    while (s<e){
    swap(arr[s], arr[e]);
    s++;
    e--;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}


