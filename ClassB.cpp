#include <iostream>

class B {
    private:
        int B1;
        float B2;
    public:
        B(int B1, float B2);
        ~B();
        int getB1();
        void setB1(int B1);
        float getB2();
        void setB2(float B2);
        void MB1();
        void MB2();
};

B::B(int B1, float B2){
    this->B1 = B1;
    this->B2 = B2;
}

int B::getB1(){
    return B1;
}

void B::setB1(int B1){
    this->B1 = B1;
}

float B::getB2(){
    return B1;
}

void B::setB2(float B2){
    this->B2 = B2;
}

void B::MB1(){
    std::cout << "MB1\n";
}

void B::MB2(){
    std::cout << "MB2\n";
}