#include <iostream>

using namespace std;

class Aviao {

public:
  int vel = 0;
  int vel_max;
  string tipo;
  void ini (int tp);

private:

};

void Aviao:: ini(int tp) { // TIPO 1 = JATO, TIPO 2 = MONOMOTO, TIPO 3 = PLANADOR
  if(tp == 1) {
    this -> vel_max = 800; // para essa classe (aviao) a propriedade vel_max é 800
    this -> tipo = "jato";
  } else {
    if(tp == 2) {
      this -> vel_max = 350;
      this -> tipo = "monomotor";
    } else {
      if(tp == 3) {
        this -> vel_max = 180;
        this -> tipo = "planador";
      }
    }
  }
}

int main() {
  Aviao * av1 = new Aviao(); // instanciei um novo objeto da classe Aviao
  
  av1 ->ini(3);

  cout << av1->vel_max; // chamei um objeto da class Aviao e imprimi a variavel
  
}

