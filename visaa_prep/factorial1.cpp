#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n;
    int result;
    cin>>n;
    result=factorial(n);
    cout<<result;   
    return 0;
}
