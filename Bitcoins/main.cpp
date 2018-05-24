#include <iostream>
using namespace std;

double bitcoin(){
  double a; double b; double c; double comprar; double vender; double lucro; int n;
  cout << "Em quantos instantes o valor dos sites sera analisado?";
  cin >> n;
  for(int i=1;i<=n;i++){
    cout << "\n";
    cout << "Valor BITCOIN do site A, no instante "<<i<<":";
    cin >> a;
    cout << "Valor BITCOIN do site B, no instante "<<i<<":";
    cin >> b;
    cout << "Valor BITCOIN do site C, no instante "<<i<<":";
    cin >> c;
    if(i!=n){
      if(a<b&a<c){
        if(i==1){
          comprar=a;
        }
        cout<< "Comprar do site A, no instante " << i<<endl;
      }
          else{
            if(b<a&b<c){
              if(i==1){
                comprar=b;
              }
              cout << "Comprar do site B, no instante "<< i<<endl;
            }
              else{
                if(i==1){
                  comprar=c;
                }
                cout << "Comprar do site C, no instante "<< i<<endl;
              }
            }
          }
    if(i>=2){
      if(a>b&a>c){
      vender=a;
      cout<< "Vender no site A, no instante "<< i << endl;
    }
      else{
        if(b>a&b>c){
          vender=b;
          cout << "Vender no site B, no instante "<< i << endl;
        }
          else{
            vender=c;
            cout << "Vender no site C, no instante "<< i<<endl;
          }
        }
      }
    }
  lucro=vender-comprar;
  return lucro;
}
int main(){
  cout << bitcoin() << " = seu lucro total! \n";
  system("pause");
}
