#include<iostream>
#include<string>

using namespace std;

class ContaBancaria
{
private:
    int numero;
    int saldo;
    string nome;
public:
    ContaBancaria(int num, int dinheiro, string cliente)
    {
        numero = num;
        saldo = dinheiro;
        nome = cliente;
    }
    int getSaldo()
    {
        return saldo;
    }
    void somar()
    {
        saldo += 500;
    }
    void diminuir()
    {
        saldo -= 200;
    }

    void imprimir()
    {
        cout << "Nome: " << nome << "Saldo: " << saldo << endl;
    }
};

int main()
{
    ContaBancaria p1(1, 4500, "Arthur");
    p1.imprimir();
    p1.somar();
    p1.imprimir();
    p1.diminuir();
    p1.imprimir();
}
