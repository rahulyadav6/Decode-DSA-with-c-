/*
Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[][4] = {{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    // cout<<row<<" "<<col;
    int maxCount = 0;
    for(int i=0; i<row; i++){
        int low = 0;
        int high = col-1;
        int count;
        if(count > maxCount) maxCount = count;
        while(low <= high){
            count = 0;
            int mid = low + (high-low)/2;
            if(arr[i][mid] == 1){
                if(arr[i][mid -1] != 1){
                    count = col - mid;
                    break;
                }else{
                    high = mid -1;
                }
            }else if(arr[mid] == 0) low = mid + 1;
        }
    }
}