#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int capacity = x * 100;
    if (capacity >= n) {
        cout << "0";  
        return 0;
    }
    int remaining_passenger = n - capacity;
    int new_planes = (remaining_passenger + 99) / 100;  
    cout << new_planes;
    
    return 0;
}
