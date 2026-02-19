#include <iostream>
#include <memory>
#include <vector>
#include <thread>
#include <atomic>

void AdvancedSharedPtr();       //forward reference
void FileExample();             //forward reference
void WeakPtrDemo();             //forward reference

class Base{
    public:
        virtual void speak(){
            std::cout<<"I am a Base."<<std::endl;
        }
        virtual ~Base(){
            std::cout<<"Base Destroyed"<<std::endl;
        }
};

class Derived : public Base{
    public:
        void speak() override{
            std::cout<<"I am Derived"<<std::endl;
        }

        ~Derived() override{
            std::cout<<"Derived destroyed."<<std::endl;
        }
};

void custom_deleter(Base *ptr){
    std::cout<<"Custom Deleter called"<<std::endl;
    delete ptr;
}

int main()
{
    std::shared_ptr<Base> sp1 = std::make_shared<Base>();
    sp1->speak();
}
