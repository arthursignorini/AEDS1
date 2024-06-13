#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
    string endereco;

    void ini(string n, int i, string e);
};

void Pessoa::ini(string n, int i, string e) {
    this->nome = n;
    this->idade = i;
    this->endereco = e;
}

int main() {
    // Criação de dois objetos Pessoa
    Pessoa p1, p2;

    string nome;
    int idade;
    string endereco;

    // Entrada de dados para o primeiro objeto Pessoa
    cout << "Digite o nome da Pessoa 1: ";
    getline(cin, nome);
    cout << "Digite a idade da Pessoa 1: ";
    cin >> idade;
    cin.ignore(); // Para limpar o buffer de entrada
    cout << "Digite o endereço da Pessoa 1: ";
    getline(cin, endereco);
    p1.ini(nome, idade, endereco);

    // Entrada de dados para o segundo objeto Pessoa
    cout << "Digite o nome da Pessoa 2: ";
    getline(cin, nome);
    cout << "Digite a idade da Pessoa 2: ";
    cin >> idade;
    cin.ignore(); // Para limpar o buffer de entrada
    cout << "Digite o endereço da Pessoa 2: ";
    getline(cin, endereco);
    p2.ini(nome, idade, endereco);

    // Imprimindo os atributos dos objetos para verificar
    cout << "Pessoa 1: " << p1.nome << ", " << p1.idade << " anos, " << p1.endereco << endl;
    cout << "Pessoa 2: " << p2.nome << ", " << p2.idade << " anos, " << p2.endereco << endl;

    return 0;
}
