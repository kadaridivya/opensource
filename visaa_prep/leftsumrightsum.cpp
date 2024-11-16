#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    long long left_sum = 0, right_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        right_sum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        right_sum -= arr[i];            
        cout << abs(left_sum - right_sum) << " "; 
        left_sum += arr[i];            
    }

    cout << endl;
    return 0;
}
