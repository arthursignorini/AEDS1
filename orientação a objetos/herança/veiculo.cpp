#include <iostream>
#include <string>

using namespace std;

class Veiculo {
protected:
    string modelo;
    double quilometragem;

public:
    Veiculo(string modelo, double quilometragem) : modelo(modelo), quilometragem(quilometragem) {}

    virtual double calcularConsumoCombustivel() const = 0;
    virtual void exibirInformacoes() const = 0;
    virtual ~Veiculo() = default;
};

class Carro : public Veiculo {
private:
    double capacidadeDoTanque;

public:
    Carro(string modelo, double quilometragem, double capacidadeDoTanque)
        : Veiculo(modelo, quilometragem), capacidadeDoTanque(capacidadeDoTanque) {}

    double calcularConsumoCombustivel() const override {

        return quilometragem / 10.0;
    }

    void exibirInformacoes() const override {
        cout << "Modelo: " << modelo << ", Quilometragem: " << quilometragem
             << ", Capacidade do Tanque: " << capacidadeDoTanque
             << ", Consumo de Combustível: " << calcularConsumoCombustivel() << " litros" << endl;
    }
};

class Moto : public Veiculo {
private:
    double cilindrada;

public:
    Moto(string modelo, double quilometragem, double cilindrada)
        : Veiculo(modelo, quilometragem), cilindrada(cilindrada) {}

    double calcularConsumoCombustivel() const override {

        return quilometragem / 25.0;
    }

    void exibirInformacoes() const override {
        cout << "Modelo: " << modelo << ", Quilometragem: " << quilometragem
             << ", Cilindrada: " << cilindrada
             << ", Consumo de Combustível: " << calcularConsumoCombustivel() << " litros" << endl;
    }
};

int main() {
    Carro carro("Carro A", 500, 50);
    Moto moto("Moto A", 500, 150);

    carro.exibirInformacoes();
    moto.exibirInformacoes();

    return 0;
}
