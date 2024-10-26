#include <iostream>

class A {
    private:
        int A1;
        float A2;
    public:
        A(int A1, float A2);
        ~A();
        int getA1();
        void setA1(int A1);
        float getA2();
        void setA2(float A2);
        void MA1();
        void MA2();
        void MA3();
        int getSoma(int a, int b);
};

A::A(int A1, float A2){
    this->A1 = A1;
    this->A2 = A2;
}

int A::getA1(){
    return A1;
}

void A::setA1(int A1){
    this->A1 = A1;
}

float A::getA2(){
    return A1;
}

void A::setA2(float A2){
    this->A2 = A2;
}

void A::MA1(){
    std::cout << "MA1\n";
}

void A::MA2(){
    std::cout << "MA2\n";
}

void A::MA3(){
    std::cout << "Alteração a classe A partir do clone\n";
}

int A::getSoma(int a, int b){
    return a+b;
}