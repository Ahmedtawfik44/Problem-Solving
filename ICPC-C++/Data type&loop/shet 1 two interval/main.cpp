#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a >= c && a <= d && b >= c && b <= d) {
        cout << a << " " << b;
    } else if (c >= b && c <= a && d >= b && d <= a) {
        cout << c << " " << d;
    } else if (c >= a && c <= d && b >= a && b <= d) {
        cout << c << " " << b;
    } else if (a >= b && a <= c && d >= b && d <= c) {
        cout << a << " " << d;
    } else if (a >= b && a <= d && c >= b && c <= d) {
        cout << a << " " << c;
    } else if (b >= a && b <= c && d >= a && d <= c) {
        cout << b << " " << d;
    } else {
        cout << "-1";
    }

    return 0;
}
