#include<iostream>

using namespace std;

class forma {
public:
    virtual double perimetro() const = 0; // metodos virtuais - abstratos - nao tem implementação
    virtual double area() const = 0;
    virtual void imprimir() const = 0; // const - nao vai mudar o objeto

    static void mostrar_forma(const forma * forma) {
        forma->imprimir();
        cout << "Perimetro: " << forma->perimetro() << endl;
        cout << "Area: " << forma->area() << endl;
    }
};

class retangulo : public forma {
private:
    double base;
    double altura;

public:
    retangulo(double b, double h) {
        base = b;
        altura = h;
    }

    double perimetro() const override { // const garantir que o objeto nao vai ser alterado
        return 2*(base + altura);
    }

    double area() const override { // sobrescrição do método - override
        return base * altura;
    }

    void imprimir() const override {
        cout << "Retangulo - Lado: " << base << ", Altura: " << altura << endl;
    }
};

class circulo : public forma {
private:
    double raio;

public:
    circulo(double r): raio(r) {}

    double perimetro() const override {
        return 2 * 3.14 * raio;
    }

    double area() const override {
        return 3.14 * raio * raio;
    }

    void imprimir() const override {
        cout << "Circulo - Raio: " << raio << endl;
    }
};

int main() {
    double l1, l2;
    cout << "Digite o lado do retangulo: ";
    cin >> l1;
    cout << "Digite o lado do retangulo: ";
    cin >> l2;
    retangulo r(l1, l2);
    forma::mostrar_forma(&r);

    cout << endl;

    double raio;
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    circulo c(raio);
    forma::mostrar_forma(&c);

    return 0;
}
