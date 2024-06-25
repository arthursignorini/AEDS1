#include <iostream>
#include <string>

using namespace std;

class Aluno {
private:
    string nome;
    int matricula;
    double notas[10];
    int quantidadeNotas;

public:

    Aluno(string nome, int matricula) {
        this->nome = nome;
        this->matricula = matricula;
        quantidadeNotas = 0;
    }


    void adicionarNota(double nota) {
        if (quantidadeNotas < 10) {
            notas[quantidadeNotas] = nota;
            quantidadeNotas++;
        } else {
            cout << "Limite máximo de notas atingido (10 notas)." << endl;
        }
    }

    double calcularMedia() {
        if (quantidadeNotas == 0) {
            return 0.0;
        }

        double soma = 0.0;
        for (int i = 0; i < quantidadeNotas; ++i) {
            soma += notas[i];
        }
        return soma / quantidadeNotas;
    }


    void exibirNotas() {
        cout << "Notas do aluno " << nome << " (Matrícula: " << matricula << "):" << endl;
        for (int i = 0; i < quantidadeNotas; ++i) {
            cout << "Nota " << i + 1 << ": " << notas[i] << endl;
        }
    }
};

int main() {

    Aluno aluno1("João Silva", 12345);


    aluno1.adicionarNota(7.5);
    aluno1.adicionarNota(8.0);
    aluno1.adicionarNota(6.5);


    aluno1.exibirNotas();
    cout << "Média das notas: " << aluno1.calcularMedia() << endl;

    return 0;
}

