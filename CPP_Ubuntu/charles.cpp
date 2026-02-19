#include <optional>

int maybe_square(int x)
{
        if(x%2 == 0)
            return x*x;
        else 
            return -1;
}

int main()
{
    int foo = maybe_square(4);
    std::println("foo={}",foo);
    return 0;
}