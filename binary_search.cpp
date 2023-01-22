#include <iostream>

using namespace std;

int BinarySearch(int *arr, int low, int high, int key){
    int mid;
    if(low <= high){
        mid = (int(high + low)) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            return BinarySearch(arr, mid+1, high, key);
        }
        else{
            return BinarySearch(arr, low, mid-1, key);
        }
    }
    return -1;
}

int main(){
    int arr[10] = {2,5,9,12,14,18,23,25,28,30};
    int key;
    cout<<"Enter the key to search with : "<<endl;
    cin>>key;
    cout<<"Index of "<<key<<" : "<<BinarySearch(arr, 0, sizeof(arr)/sizeof(arr[0]), key)<<endl;
    return 0;
}