#include <iostream>

class D {
    private:
        float D1;
        int D2;
    public:
        D(float D1, int D2);
        ~D();
        void MD1();
        void MD2();
        void MD3();
};

D::D(float D1, int D2){
    this->D1 = D1;
    this->D2 = D2;
}

void D::MD1(){
    std::cout << "MD1\n";
}

void D::MD2(){
    std::cout << "MD2\n";
}

void D::MD3(){
    std::cout << "MD3\n";
}
