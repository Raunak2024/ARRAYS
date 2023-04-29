// Target Sum- Find all the possible Array pairs (Sub-Arrays) whose sum will be equal to the target value. Variations-2sum(Pairs),3sum(Triplets),4sum(Quadruplets),nsum imp-Subaray Sum
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //eg- i/p array={2,3,4,5,0} target=5                               o/p array pairs=count ({2,3}, {5,0})= 2
    //Brute-Force Approach
    int target;
    cin>>target;
    //i=0 j=1, i=0 j+2, i=0 j=3, i=0 j=4 .... i=0 j=n-1 
    //i=1 j=2, i=1 j=3, i=1 j=4 ...i=1 j=n-1
    //..
    //... i=n j=n loop terminates
    int pairs,triplets,quadruplets;
// TWO SUM -TWO NESTED LOOPS TC=O(N2)
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if (arr[i]+arr[j]==target){
            pairs++;
        }
    }
} 
// THREE SUM-THREE NESTED LOOPS TC=O(N3)
for (int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=2;k<n;k++){
        if (arr[i]+arr[j]+arr[k]==target){
            triplets++;
        }
            }
        }
}
// FOUR SUM TC=O(N4)
for (int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=2;k<n;k++){
            for(int l=3;l<n;l++){
        if (arr[i]+arr[j]+arr[k]==target){
            quadruplets++;
        }
            }
        }
}
}


cout<<pairs<<" "<<triplets<<" "<<quadruplets<<" "<<endl;
// First Iteration- outer loop-1 inner loop- n times total-1*n=n
// Second Iteration- outer loop-2 inner loop-n times total-2*n=2n
// Third Iteration- outer loop-3 inner loop-n times total-3*n=3n
// nth Iteration- outer loop-n inner loop-n total=(n)2
//Reason-i=0; j=i+1 is wrong and j=1 is right why->Because array elements are getting counted twice here  

// Better Approach-Hashing TC-O(N),SC-O(N)-traversing the array only one time for the solution

for(int i=0; i<n; i++){

    
}
//Best Approach-Two Pointers after sorting the i.p array-{2,3,6,7}
int s=0,e=n-1;
for(int idx=0; idx<n; idx++){
    if(arr[s]+arr[e]==target){
        pairs++;
    }
    else if(arr[s]+arr[e]<target){
        arr[s++];
    }
    else {
        arr[e--];
    }
}

}