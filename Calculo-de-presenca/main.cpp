#include <iostream>
using namespace std;


int calculodefaltas(int c, int f){
  int totalaulas; int faltasrestantes;
  totalaulas = 15*c;
  faltasrestantes = totalaulas*0.3;
  faltasrestantes = faltasrestantes-f;
  return faltasrestantes;
}

double frequencia(double h, double f){
  double freq;
  freq = ((h-f)/h)*100;
  return freq;
}

int main(){
  int h; int c; int f;
  cout << "Quantas horas de aula voce ja teve?";
  cin >> h;
  cout << "Quantos creditos tem a disciplina?";
  cin >> c;
  cout << "Quantas horas voce ja faltou?";
  cin >> f;
  
  cout << "Voce ainda pode faltar "<< calculodefaltas(c,f) << " horas nessa disciplina.(Frequencia: " << frequencia(h,f) << "%.)\n";
  system("pause");
}
