#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
// math functions
using namespace std;

int main() {
int a = 2;
int b = 2;
int c = 2;
int d = 2;
int e = 2;
int f = 2;

a = max(a, b);
b = min(b, a);
c = pow(2, 4);
d = sqrt(4);
e = abs(-5);
f = round(3.14);

cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;
cout << e << endl;
cout << f << endl;

}
