#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    int x,y;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        cout<<(x-y)+1<<endl;
    }
    return 0;
}
