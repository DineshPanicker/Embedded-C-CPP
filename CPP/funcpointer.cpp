#include <iostream>
#include <functional>
typedef int (*IntgerOpeations)(int, int);

int add(int x, int y)
{
    return x + y;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    // int (*op)(int, int); // function pointer for functions:int name(int,int)
    // IntgerOpeations op;
    std::function<int(int, int)> op;
    int n;
    std::cout << "1 for add,2 for mult" << std::endl;
    std::cin >> n;
    if (n == 1)
        op = add;
    else if (n == 2)
        op = multiply;
    int x, y;
    std::cin >> x;
    std::cin >> y;

    std::cout << "Operation: " << op(x, y) << std::endl;
    return 0;
}