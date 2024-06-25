#include <iostream>
#include <string>

using namespace std;

class Aluno {
private:
    string nome;
    int matricula;
    double notas[10]; // Suponha que cada aluno pode ter até 10 notas
    int quantidadeNotas;

public:
    // Construtor
    Aluno(string nome, int matricula) {
        this->nome = nome;
        this->matricula = matricula;
        quantidadeNotas = 0;
    }

    // Método para adicionar nota
    void adicionarNota(double nota) {
        if (quantidadeNotas < 10) {
            notas[quantidadeNotas] = nota;
            quantidadeNotas++;
        } else {
            cout << "Limite máximo de notas atingido (10 notas)." << endl;
        }
    }

    // Método para calcular a média das notas
    double calcularMedia() {
        if (quantidadeNotas == 0) {
            return 0.0; // Média de zero se não houver notas
        }

        double soma = 0.0;
        for (int i = 0; i < quantidadeNotas; ++i) {
            soma += notas[i];
        }
        return soma / quantidadeNotas;
    }

    // Método para exibir todas as notas do aluno
    void exibirNotas() {
        cout << "Notas do aluno " << nome << " (Matrícula: " << matricula << "):" << endl;
        for (int i = 0; i < quantidadeNotas; ++i) {
            cout << "Nota " << i + 1 << ": " << notas[i] << endl;
        }
    }
};

int main() {
    string nomeAluno;
    int matriculaAluno;
    double nota;
    char continuar;

    cout << "Digite o nome do aluno: ";
    getline(cin, nomeAluno); // Lê o nome completo do aluno

    cout << "Digite a matrícula do aluno: ";
    cin >> matriculaAluno; // Lê a matrícula do aluno

    Aluno aluno(nomeAluno, matriculaAluno); // Cria o objeto Aluno

    // Loop para adicionar notas
    do {
        cout << "Digite uma nota para o aluno: ";
        cin >> nota;
        aluno.adicionarNota(nota);

        cout << "Deseja adicionar outra nota? (s/n): ";
        cin >> continuar;
        cin.ignore(); // Limpa o buffer do teclado

    } while (continuar == 's' || continuar == 'S');

    // Exibe todas as notas e a média do aluno
    cout << endl;
    aluno.exibirNotas();
    cout << "Média das notas: " << aluno.calcularMedia() << endl;

    return 0;
}

