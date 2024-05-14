#include <iostream>

void Print(const int &ref)
{
    using namespace std;
    cout << ref << endl;
}
int main()
{
    using namespace std;
    int x = 5;
    Print(x);
    cout << "X value in main: " << x << endl;
    return 0;
}