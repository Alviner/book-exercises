#include <iostream>

using namespace std;

double square(double num) {
    return num * num;
}

void print_square(double num) {
    cout << "the square of " << num << " is " << square(num) << endl;
}

int main() {
    print_square(1.234);
}
