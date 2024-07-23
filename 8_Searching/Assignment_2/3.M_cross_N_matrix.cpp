#include <iostream>
using namespace std;
int main(){
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    int row  =-1;
    if(target >= arr[0][0] && target <= arr[0][3]) row = 0;
    else if(target >= arr[1][0] && target <= arr[1][3]) row = 1;
    else if(target >= arr[2][0] && target <= arr[2][3]) row = 2;

    // int lo = arr[row][0];
    // int hi = arr[row][3];

    int lo = 0;
    int hi = 3;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[row][mid] == target){
            cout<<"Target is present at row no: "<<row+1<<" and column no: "<<mid+1;
            break;
        }
        else if(arr[row][mid] < target) lo = mid+1;
        else hi = mid-1;
    }
    if(lo>hi) cout<<"Element not found.";
}