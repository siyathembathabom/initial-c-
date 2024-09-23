#include <iostream>
using namespace std;

void addition(int a, int b);

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;

    addition(a, b);
    cout << "Integer variable 'c' will equal " << c << " outside the function" << endl;
}

void addition(int a, int b) {
    int c = a + b;
    cout << "Integer variable 'c' will equal " << c << " inside the function" << endl;
}
