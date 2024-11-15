#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int x,y,z;
    cin>>x>>y>>z;
    if(x*y<=z*1440 ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
