// Your code here...
#include <stdio.h>
int binarySearch(int arr[], int n, int target){
    int l =0, r = n-1;
    while(l <= r){
        int mid = (r+l)/ 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            return mid - 1;
        }
        else{
            return mid + 1;
        }
    }

}