#include <iostream>
#include <cmath> // Include the cmath library for sqrt function
using namespace std;

bool isPrimeOptimised(int n){
    if (n <= 1) return false; // Handle edge cases
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the Value" << endl;
    cin >> n;

    if (isPrimeOptimised(n)) {
        cout << "Is a Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}