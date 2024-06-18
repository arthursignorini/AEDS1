#include <iostream>

using namespace std;

class Pessoa {

private:

  string nome;
  int idade;

public:

  Pessoa(string nome, int idade){
    this -> nome = nome;
    this -> idade = idade;
  }

  string getNome(){
    return nome;
  }

  int getIdade(){
    return idade;
  }
};

int main(){
  Pessoa p1("Arthur", 18);
  cout << p1.getNome() << endl;
  cout << p1.getIdade() <<endl;

  Pessoa p2("Mario",23);
  cout << p2.getNome() << endl;
  cout << p2.getIdade() <<endl;
}
