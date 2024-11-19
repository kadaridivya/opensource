#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(vector<int> &arr,int x){
    int l=0,r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x){
            return mid;
            break;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    
    return -1;
}
int main() {
     int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result=binary_search(arr,x);
    cout<<result<<endl;
    return 0;
}
