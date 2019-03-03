#include<iostream>
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
    
    
    //By pointers
    std::cout<<"Object construction - via pointer"<<std::endl;
    Demo* d1 = new Demo(1,"d1");
    d1->printDemo();
    delete d1;

    //Normal
    std::cout<<"Object construction - normal"<<std::endl;
    Demo d2(2,"d2");
    d2.printDemo();

    //Parameterized construction
    std::cout<<"Object construction - parameterized"<<std::endl;
    Demo d3(3,"d3");
    d3.printDemo();

    return 0;   
}
