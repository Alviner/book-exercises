#include <iostream>

using namespace std;

bool accept() {
    cout << "Do u want to proceed (y or n)?" << endl;
    char answer = 0;
    cin >> answer;
    if (answer == 'y') return true;
    else if (answer != 'n') {
        cout << "I\'ll take that fot a no." << endl;
    }
    return false;
}

int main() {
    auto answer = accept();
    cout << "Ur answer is " << answer << endl;
}
