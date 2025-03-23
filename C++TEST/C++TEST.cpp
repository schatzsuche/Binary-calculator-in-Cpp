#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string binary = "";

    cout << "Type the number you want to convert to binary: ";
    cin >> number;

    int test = number;

    while (number > 0) {
        int remainder = number % 2;
        binary = to_string(remainder) + binary;
        number = number / 2;
    }

    cout << "The binary of " << test << " is: " << binary << endl;
    return 0;
}
