#include<iostream>
#include<string> /
using namespace std;

class Carro
{
private:
    string placa;
    int numChassi;
    int velocidade;

public:
    // Construtor
    Carro(string placa, int numChassi)
    {
        this->placa = placa;
        this->numChassi = numChassi;
        this->velocidade = 0;
    }


    int getVelocidade()
    {
        return this->velocidade;
    }


    void acelerar()
    {
        this->velocidade += 10;
    }


    bool frear()
    {
        this->velocidade -= 10;
        if (this->velocidade <= 0) {
            this->velocidade = 0;
            return true;
        } else {
            return false;
        }
    }

    // Método para imprimir informações do carro
    void imprimir()
    {
        cout << "Carro placa " << this->placa << " velocidade " << this->velocidade << " Km/h" << endl; // Corrigido: usar this-> para acessar membros da classe
    }
};

int main()
{
    Carro p1("ABC-123", 12345);
    p1.imprimir();

    for(int i=0; i<11; i++){
        p1.acelerar();
    }
    p1.imprimir();

    for(int i=0; i<5; i++){
        p1.frear();
    }
    p1.imprimir();

    return 0;
}
