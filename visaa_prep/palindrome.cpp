#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string s){
    string reversed_s =s;
    reverse(reversed_s.begin(),reversed_s.end());
    return s == reversed_s;
    }
int main() {
    string s;
    cin>>s;
    if(is_palindrome(s)){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
        
    return 0;
}
