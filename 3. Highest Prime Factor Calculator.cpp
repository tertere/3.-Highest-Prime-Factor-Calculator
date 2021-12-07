#include <iostream>
using namespace std;

int main()
{

    int num;
    int del = 2;
    int fac = 2;
    while (true) {
        cout << "Enter the number: ";
        cin >> num;
        while (num != 1) {
            while (num % del == 0) {
                num /= del;
                fac = del;
            }
            del++;
        }
        del = 2;
        cout << fac << "\n";
    }
}
