cat c.cpp 
#include <iostream>
using namespace std;


int main() {
    //int a, b;
    //int a = 3;
    char c = 'c';

    cout << sizeof(int) << endl;
    int a = 3;
    cout << sizeof a << endl;
    //unsigned
    unsigned short ushort;
    unsigned int uint;
    unsigned long ulong;
    unsigned long long ull;
    cout << sizeof(ushort) << endl;
    cout << sizeof(uint) << endl;
    cout << sizeof(ulong) << endl;
    cout << sizeof(ull) << endl;
    return 0;
}
