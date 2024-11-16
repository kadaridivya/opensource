#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        result^=arr[i];
    }cout<<result;
    return 0;
}
