#include <iostream>
#include <cmath>

int main() {
    long n = 600851475143;
    int largest;
    for(int i = 3; i <= n; i += 2) {
        if(n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    std::cout << largest << std::endl;
}
