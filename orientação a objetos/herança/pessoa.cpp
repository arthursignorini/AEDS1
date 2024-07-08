#include<iostream>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade) {
        this -> nome = nome;
        this -> idade = idade;
    }
    void imprimir() {
        cout << "O nome eh " << nome << " e essa pessoa tem " << idade << " anos";
    }
};

class Aluno : public Pessoa
{
private:
    int matricula;
public:
    Aluno(string nome, int idade, int matricula) : Pessoa(nome, idade)
    {
        this -> matricula = matricula;
    }

    void info()
    {
        imprimir();
        cout << " e o seu numero de matricula eh " << matricula << endl;
    }

};

int main()
{
    string nome;
    int idade, matricula;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite a sua idade: ";
    cin >> idade;
    cout << "Digite o seu numero de matricula: ";
    cin >> matricula;

    Aluno a1(nome, idade,matricula);
    a1.info();
}
