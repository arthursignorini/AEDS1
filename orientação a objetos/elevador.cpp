#include <iostream>

using namespace std;

class Elevador {
private:
    int andar;
    int capacidadeMaxima;
    int pessoasPresentes;
    int maxAndar;

public:
    Elevador(int andarInicial, int capacidadeMaxima){
        this->andar = andarInicial;
        this->capacidadeMaxima = capacidadeMaxima;
        this->pessoasPresentes = 0;
        this->maxAndar = 12;
    }

    void movimentar(int novoAndar){
        if(novoAndar > this->maxAndar){
            cout << "O maximo de andares eh " << this->maxAndar << ". Indo para o andar " << this->maxAndar << "." << endl;
            this->andar = this->maxAndar;
        } else if(novoAndar < 0){
            cout << "Andar invalido. Nao eh possivel ir para um andar negativo." << endl;
        } else {
            if (this->andar > novoAndar) {
                cout << "Descendo para o andar " << novoAndar << endl;
            } else if (this->andar < novoAndar) {
                cout << "Subindo para o andar " << novoAndar << endl;
            } else {
                cout << "Você já está no andar " << novoAndar << endl;
            }
            this->andar = novoAndar;
        }
    }

    void abrir(){
        cout << "Porta aberta" << endl;
    }

    void fechar(){
        cout << "Porta fechada" << endl;
    }

    void entrarPessoa(){
        if (pessoasPresentes < capacidadeMaxima) {
            pessoasPresentes++;
            cout << "Uma pessoa entrou. Total de pessoas: " << pessoasPresentes << endl;
        } else {
            cout << "Capacidade maxima atingida. Ninguem mais pode entrar." << endl;
        }
    }

    void sairPessoa(){
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
            cout << "Uma pessoa saiu. Total de pessoas: " << pessoasPresentes << endl;
        } else {
            cout << "O elevador está vazio. Ninguem pode sair." << endl;
        }
    }

    int getAndar(){
        return andar;
    }

    int getPessoas(){
        return pessoasPresentes;
    }
};

int main(){
    Elevador elevador(0, 11);
    int opcao, novoAndar;

    do {
        cout << "\nMenu de Opcoes:\n";
        cout << "1. Subir/Descer\n";
        cout << "2. Entrar pessoa\n";
        cout << "3. Sair pessoa\n";
        cout << "4. Sair do programa\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite o andar para o qual deseja ir: ";
                cin >> novoAndar;
                elevador.movimentar(novoAndar);
                break;
            case 2:
                elevador.entrarPessoa();
                break;
            case 3:
                elevador.sairPessoa();
                break;
            case 4:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opção inválida." << endl;
        }
    } while(opcao != 4);

    return 0;
}
