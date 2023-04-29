// EQUALITY FOR TWO ARRAYS A={1,2,3,4} & B={4,3,2,1} o/p-1(True) or 0(False)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int A[m],B[n];
    for(int i=0; i<m; i++){ 
        cin>>A[i];
    }
    for(int i=0; i<n; i++){ 
        cin>>B[i];
    }
// BRUTE APPROACH-Sorting T.C.= O(nlogn), S.C.=O(1) TO O(n)
// How to do sorting without using inbuilt stl sort function
sort(A,A+m);
sort(B,B+n);
bool val;
for(int i=0; i<n; i++){
    if(A[i]!=B[i]){
    val=true;
    }
    else val=false;
}
if(val==true){
    cout<<"ARRAYS ARE EQUAL";
}
else{
    cout<<"ARRAYS ARE NOT EQUAL";
}

// BETTER APPROACH-HASHING-This approach is mainly used to genrellay find the frequency fo a given element





// BEST APPROACH- XORing of TWO ARRAYS

}