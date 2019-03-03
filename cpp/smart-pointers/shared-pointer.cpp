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
    //Shared pointer
    std::shared_ptr<Demo> d1 = std::shared_ptr<Demo>(new Demo(1,"d1"));
    d1->printDemo();

    {
        std::shared_ptr<Demo> d2(d1);
        d2->printDemo();
    }

    return 0;
}
