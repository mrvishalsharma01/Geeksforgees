#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // Write Code to Swap
    b=a+b;
    a=b-a;
    b=b-a;

    cout << a << " " << b << endl;
    return 0;
}