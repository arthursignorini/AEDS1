#include <iostream>

using namespace std;

class Carro {
private:
    double combustivel;
    double distancia;
    int capacidade;
    double consumo;

public:
    Carro(int capacidade, double consumo) {
        combustivel = 0;
        distancia = 0;
        this->capacidade = capacidade;
        this->consumo = consumo;
    }

    double getCombustivel() {
        return combustivel;
    }

    double getDistancia() {
        return distancia;
    }

    double getCapacidade() {
        return capacidade;
    }

    double getConsumo() {
        return consumo;
    }

    void abastecer(double litros) {
        if (litros > 50) {
            combustivel = 50;
        } else {
            combustivel = litros;
        }
    }

    void andar(double km) {
        distancia = km;
    }

    void calcula() {
        combustivel -= distancia / consumo;
    }
};

int main()
{
    Carro car1(50, 15);
    double dis, com;
    cout << "Carro esta sem combustivel" << endl;
    cout << "Abastecer com quantos litros: ";
    cin >> com;
    car1.abastecer(com);
    cout << "Distancia percorrida: ";
    cin >> dis;
    car1.andar(dis);
    car1.calcula();
    cout << "Combustivel que sobrou: " << car1.getCombustivel() << endl;
}
