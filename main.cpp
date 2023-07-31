// Nathan Rapp
// CIS 1202-5T1
// July 30, 2023

#include <iostream>
#include <cmath>

using namespace std;

// Templated function for all types, specialized for integer
template<typename T>
T half(T value) {
    return value / 2;
}

// Specialization for integer type
template<>
int half(int value) {
    return static_cast<int>(round(static_cast<float>(value) / 2.0));
}

int main() {
    double a = 7;
    float b = 5.0f;
    int c = 3;

    cout << "half of " << a << " is " << half(a) << endl;
    cout << "half of " << b << " is " << half(b) << endl;
    cout << "half of " << c << " is " << half(c) << endl;

    return 0;
}
