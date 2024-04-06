#include <iostream>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
//void Print(int *ptr)
//{
//    using namespace std;
//    if(ptr != nullptr)
//        cout<<*ptr<<"\n";
//}

void Print(int &ptr)
{
    using namespace std;
    cout<<ptr<<"\n";
}
int main()
{
    using namespace std;
    const int X = 4;
    int *ptr = &X;
    *ptr = 1;
    
    
    return 0;
}