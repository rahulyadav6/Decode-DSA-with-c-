#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i < a.size() && j<b.size()){
        if(a[i] <= b[j]){
            res[k++] = a[i++];
        }else{
            res[k++] = b[j++];
        }
    }
    if(i>= a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }else{
        while(i < a.size()){
            res[k++] = a[i++];
        }
    }
    
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);

    //copy pasting;

    for(int i=0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i=0; i<n2; i++){
        b[i] = v[i+n1];
    }


    //recursion 
    mergeSort(a);
    mergeSort(b);

    //merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);
    for(auto ele: v) cout<<ele<<" ";
    cout<<endl;
    mergeSort(v);
    for(auto ele: v) cout<<ele<<" ";
}