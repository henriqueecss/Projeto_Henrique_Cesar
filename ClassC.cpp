#include <iostream>

class C
{
private:
    std::string C1;
    int C2;
public:
    C(std::string C1, int C2);
    ~C();
    void MC1();
    void MC2();
};

C::C(std::string C1, int C2){
    this->C1 = C1;
    this->C2 = C2;
}

void MC1(){
    std::cout << "MC1\n";
}

void MC2(){
    std::cout << "MC2\n";
}