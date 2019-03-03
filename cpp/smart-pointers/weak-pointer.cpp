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
    return 0;
}
