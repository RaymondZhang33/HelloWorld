#include <iostream>
using namespace std;
int main()
{
    int integer = 0;
    cout << "Pick any integer you would like: " << endl;
    cin >> integer;
    float flo = (float) integer;
    cout << "The integer you picked converted to a decimal is " << (string) flo << ".";
}