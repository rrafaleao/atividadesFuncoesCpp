#include <iostream>
using namespace std;

//Verificação de numero par
int verificaPar(int num){
    if(num % 2 == 0)
    cout << num << " É Par" << endl;
    else
    cout << num << "é impar" << endl;
    return num; 
}
  int main(){
    int num;
    cout <<"Digite um numero: ";
    cin >> num;

    //cout << (verificaPar(num));

    return false;
  
  }
