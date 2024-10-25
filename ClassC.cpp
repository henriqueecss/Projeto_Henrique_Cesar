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
    void MC3();
};

C::C(std::string C1, int C2){
    this->C1 = C1;
    this->C2 = C2;
}

void C::MC1(){
    std::cout << "MC1\n";
}

void C::MC2(){
    std::cout << "MC2\n";
}

void C::MC3(){
    std::cout << "MC3\n";
}