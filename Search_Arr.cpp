//array
//-> index, ele, size/length

#include <iostream>
using namespace std;

//true/false || ele[idx], -1

// int idx_of_ele(int arr[], int n, int key)
// {
//     //int n = sizeof(arr) / sizeof(int);
//     //traverse loop
    
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// bool if_ele_exists(int arr[], int key, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] == key)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// void print_arr(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         cout << i << "->" << arr[i] << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    //array input
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //array output
    // print_arr(arr, n);

    // int key;
    // cin >> key;

    //function call
    // cout << idx_of_ele(arr, n, key);
    // cout << boolalpha << if_ele_exists(arr, key, n) << endl;
    //boolalpha prints boolean value directly

}