#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, c;
    const double pi = 3.141592653589793;

    cout << "r : ";
    cin >> a;

    c = (4.0 / 3.0) * pi * pow(a, 3);

    cout << "v : " << c << endl;

    return 0;
}
