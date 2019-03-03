#include<iostream>
#include<memory>
using namespace std;

class Demo
{
    int n;
    std::string s;

    public:
        Demo()
        {
            std::cout<<"Constructing demo"<<std::endl;
            n = 0;
            s = "";
        }

        Demo(int n, std::string s)
        {
            std::cout<<"Constructing demo : "<< s << std::endl;
            this->n = n;
            this->s = s;
        }

        void printDemo()
        {
            std::cout<<"Demo : n : "<< n << ", s : "<< s << std::endl;
        }

        ~Demo()
        {
            std::cout<<"Destructing demo : "<< s << std::endl;
        }
};

int main()
{
    //Unique pointer
    std::unique_ptr<Demo> d1 = std::unique_ptr<Demo>(new Demo(1,"d1"));
    d1->printDemo();

    //Unique pointer - using make_unique
    std::unique_ptr<Demo> d2 = std::make_unique<Demo>(2,"d2");
    d2->printDemo();

    //std::unique_ptr<Demo> d3(d1);
    //error: use of deleted function 'std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&)

    return 0;
}
