#include <iostream>
using namespace std;

class Carro {
private:
  string marca;
  string modelo;
  int ano;

public:
  Carro(string marca, string modelo, int ano){
    this -> marca = marca;
    this -> modelo = modelo;
    this -> ano = ano;
  }

  string getMarca(){
    return marca;
  }

  string getModelo(){
    return modelo;
  }

  int getAno(){
    return ano;
  }

  void printainfo(){
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << ano << endl;
  }
};

class Veiculo {
private:
  string tipo;

public:
  Veiculo(string tipo){
    this -> tipo = tipo;
  }

  string getTipo(){
    return tipo;
  }

  void printainfoveiculo(Veiculo veiculo1){
    cout << "Tipo: " << veiculo1.tipo << endl;
  }
};

int main(){
  Carro carro1("Ford", "Fiesta", 2014);
  carro1.printainfo();

  Veiculo veiculo1("Carro");
  veiculo1.printainfoveiculo(veiculo1);

  return 0;
}
