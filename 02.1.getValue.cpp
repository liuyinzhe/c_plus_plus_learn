#include <iostream>
using namespace std;
//命名空间避免重名函数冲突

int getValue(int x, int y) {
    return x + y;
}

int main() {
    cout << getValue(3, 5) << endl;
    return 0;
}
