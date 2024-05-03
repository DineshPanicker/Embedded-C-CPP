#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int>p1 {new int {69}};
    std::cout<<*p1.get()<<std::endl;
    p1.reset();
    if(p1)
        std::cout<<*p1<<std::endl;
    else
        std::cout<<"p1 is nullptr"<<std::endl;

    return 0;
}