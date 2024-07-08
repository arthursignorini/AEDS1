#include<iostream>

using namespace std;

class Funcionario
{
private:
    string nome;
    double salario;
public:
    Funcionario(string n, double s){
        nome = n;
        salario = s;
    }
    void info(){
        cout << "Essa pessoa se chama " << nome << ",o seu salario eh de " << salario;
    }
};

class Gerente : public Funcionario
{
private:
    string departamento;
public:
    Gerente(string n, double s, string d) : Funcionario(n,s){
        departamento = d;
    }
    void exibir(){
        info();
        cout << " e o seu departamento eh " << departamento << endl;
    }
};

class Engenheiro : public Funcionario
{
private:
    string especialidade;
public:
    Engenheiro(string n, double s, string e) : Funcionario(n,s){
        especialidade = e;
    }
    void exibir(){
        info();
        cout << " e a sua expecialidade eh " << especialidade << endl;
    }
};

int main()
{
    string nome, departamento, especialidade;
    double salario;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite o seu salario: ";
    cin >> salario;
    cout << "Digite o seu departamento: ";
    cin >> departamento;
    cout << "Digite a sua especialidade: ";
    cin >> especialidade;

    Gerente g1(nome, salario, departamento);
    Engenheiro e1(nome, salario, especialidade);
    g1.exibir();
    e1.exibir();
}
