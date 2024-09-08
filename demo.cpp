#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
//     int arr [4];
//     for(int i=0; i<5; i++) {
//         cin >> arr[i];
//     }
//     for (int i=0; i<5; i++) {
//         cout << arr[i] << " ";
//     }
    int n;
    cout << "Enter the size of array is here " << endl;
    cin >> n;
    vector<char> arr(n);
    for (char i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Your character" << endl;
    for (const auto& element : arr) {
        cout << element << " ";
    }
}