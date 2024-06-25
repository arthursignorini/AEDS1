#include <iostream>
using namespace std;

class Carro
{
private:
    string marca;
    string modelo;
    int ano;
    int preco;

public:
    Carro(string marca, string modelo, int ano, int preco)
    {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->preco = preco;
    }

    string getMarca()
    {
        return marca;
    }

    string getModelo()
    {
        return modelo;
    }

    int getAno()
    {
        return ano;
    }

    int getPreco()
    {
        return preco;
    }

    void imprimir()
    {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Ano: " << ano << ", Preço: " << preco << endl;
    }
};

int main()
{
    Carro p1("Jeep", "Compass", 2024, 150000);
    p1.imprimir();
    Carro p2("Porsche", "911 turbo s", 2022, 1300000);
    p2.imprimir();
    return 0;
}
