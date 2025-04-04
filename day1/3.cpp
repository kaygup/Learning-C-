#include <iostream>
//namespaces used to prevent name conflicts

using namespace std;
namespace num1 {
int x = 3;

}

namespace num2 {
int x = 4;
}

int main() {

cout << num1::x + num2::x;




return 0;
}
