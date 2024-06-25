#include <iostream>
using namespace std;

class Animal
{
public:
    string nome;
    string especie;
    
    Animal(string n, string e) // Construtor deve ser público
    {
        nome = n;
        especie = e;
    }
    
    string getNome()
    {
        return nome;
    }
    
    string getEspecie()
    {
        return especie;
    }
};

class Cachorro : public Animal
{
private:
    string raca;
    
public:
    Cachorro(string n, string e, string r) : Animal(n, e) // Construtor deve chamar o construtor base
    {
        raca = r;
    }
    
    string getRaca()
    {
        return raca;
    }
};

int main()
{
    string n, e, r;
    cout << "Digite o nome do animal: ";
    cin >> n;
    cout << "Digite a especie do animal: ";
    cin >> e;
    cout << "Digite a raca do cachorro: ";
    cin >> r;
    
    Cachorro p1(n, e, r);
    cout << "Nome: " << p1.getNome() << endl;
    cout << "Especie: " << p1.getEspecie() << endl;
    cout << "Raca: " << p1.getRaca() << endl;
    
    return 0;
}

