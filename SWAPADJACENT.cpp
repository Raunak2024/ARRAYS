#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    // Odd Case- i/p array=[2,3,4,5,6]    o/p array=[3,2,5,4,6]
    // Even Case-i/p array=[1,2,3,4,5,6]  o/p array=[2,1,4,3,6,5]
    for(int idx=0; idx<n; idx++){
        cin>>arr[idx];
    }
    int i=0,j=1;
    while(i<n){
       swap(arr[i],arr[j]);
       i=i+2;
       j=i+1;
    }
    for (int idx=0; idx<n; idx++){
        cout<<arr[idx];
    }
    cout<<endl;
} 