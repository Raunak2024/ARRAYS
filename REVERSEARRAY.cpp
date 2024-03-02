#include<iostream>
#include<algorithm>
using namespace std;


//Input - {4, 5, 1, 2}
//Output - {2, 1, 5, 4}

//Input - {4, 5, 1, 0, 2}
//Output - {2, 0, 1, 5, 4}

//Input - {3}
//Output - {3}

//INTUITION
//I/P      O/P
//0TH IDX  N-1TH IDX
//1ST IDX  N-2TH IDX
//2ND IDX  N-3RD IDX
//3RD IDX  N-4TH IDX


//APPROACH 1 - EXTRA ARRAY

void rev_arr(int arr[], int size )
{
    //DEC EXT ARR OF ORG ARR SIZE
    int ext_arr[size];

    //COPY ALL ORG ARR ELES INTO EXT ARR IN REVERSE ORDER
    for(int i = 0; i < size; i++)
    {
        ext_arr[i] = arr[size - 1 - i];
    }

    //COPY BACK ALL REV ARR ELS BACK INTO ORG ARR
    for(int i = 0; i < size; i++)
    {
        arr[i] = ext_arr[i];
    }
    
    //FINALLY PRINT THE ORG ARR
    for(int i = 0; i < size; i++)
    {
        cout<< arr[i];
    }

    //TC - O(N) SC-O(N)

//APPROACH 2 STACK - LIFO ORDER

stack<int>stack;//decl stack of int type

// Push each ele of the org arr into a stack
for(int i = 0; i < size; i++)
{
    stack.push(arr[i]);
}

// Pop ele from the stack to form the rev arr and print it
for(int i = 0; i < size; i++)
{
   arr[i] = stack.top();
   stack.pop();
   cout << arr[i];
}

// TC-O(N) SC-O(N)

//APPROACH 3 TWO POINTERS - SWAPPING
int left = 0, right = n - 1;

//SWAP WITH 2 POINTERS FROM START AND END
    while(left <= right) //< : EVEN = : ODD
    {
    swap(arr[left], arr[right]);
    //int temp = arr[left]; 
    //arr[left] = arr[right]; 
    //arr[right] = temp; 
    left++;
    right--;
    }

//FINALLY PRINT THE ORG ARR
    for(int i = 0; i < size; i++)
    {
        cout<< arr[i];
    }
    //TC - O(N), SC - O(1)

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    rev_arr(arr, size);
}




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


