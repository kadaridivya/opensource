#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int t;
    cin>>t;
    int x,n;
    for(int i=0;i<t;i++){
        cin>>x>>n;
        cout<<n*(x/10)<<endl;
    }
    return 0;
}
