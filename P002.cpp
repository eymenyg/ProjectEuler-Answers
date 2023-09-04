#include <iostream>
int main() {
    int a, b, c;
    a = b = 1;
    int sum = 0;
    while(1) {
        c = a + b;
        sum += c;
        a = c + b;
        if(a >= 4000000)
            break;
        b = a + c;
    }
    std::cout << sum << std::endl;
}
