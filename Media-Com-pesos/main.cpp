#include <iostream>
using namespace std;

int main() {
  double vp; double vt; int qp; int qt;
  cout << "Qual o valor das provas na media final?(Ex: 0.8)";
  cin >> vp;
  cout << "Qual o valor dos trabalhos na media final?(Ex: 0.2)";
  cin >> vt;
  cout << "Qual a quantidade de provas?";
  cin >> qp;
  cout << "Qual a quantidade de trabalhos?";
  cin >> qt;
  double notap; double notat; double somap; double somat; double mediap; double mediat; double mediaf;
  for (int i=1;i<=qp;i++){
    cout << "Nota da P"<<i<<": ";
    cin >> notap;
    somap = somap + notap;
  }
  mediap=somap/qp;
  for (int j=1;j<=qt;j++){
    cout << "Nota do T"<<j<<": ";
    cin >> notat;
    somat = somat + notat;
    }
  mediat=somat/qt;
  
  mediaf=mediap*vp+mediat*vt;
  cout<< mediaf << " = sua media final!\n";
  system("pause");
}
