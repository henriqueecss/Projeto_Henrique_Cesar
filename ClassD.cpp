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
<<<<<<< HEAD
        void MD3();
=======
        void MD4();
>>>>>>> 650d01d05ca2241f1bd1915d35f9b65b51fdbcef
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

<<<<<<< HEAD
void D::MD3(){
    std::cout << "MD3\n";
=======
void D::MD4(){
    std::cout << "MD4\n";
>>>>>>> 650d01d05ca2241f1bd1915d35f9b65b51fdbcef
}
