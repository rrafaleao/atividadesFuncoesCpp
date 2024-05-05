#include <iostream>
using namespace std;

//Verificação de numero par
int verificaPar(){
  int num;
  cout<<"Digite um numero: ";
  cin >> num;
  if(num % 2 == 0)
  cout << num << " É Par" << endl;
  else
  cout << num << "é impar" << endl;
  return false;
}
//Verificação de numero positivo
int verificaPositivo(){
  int num;
  cout<<"Digite um numero: ";
  cin >> num;
  if(num >= 0)
  cout << num <<" É positivo" << endl;
  else
  cout << num <<" É negativo" << endl;
  return false;
}
//Verificação de numero multiplo de 3 e 5
int multiplo3E5(){
  int num;
  cout<<"Digite um numero: ";
  cin >> num;
  if((num % 3 == 0) && (num % 5 == 0))
  cout << num << " É Multiplo de 3 e 5" << endl;
  else
  cout << num << " Não é multiplo de 3 e 5" << endl;
  return false;
}
//Classificação de triangulos
int claseTriangulo(){
  int num, num2, num3;
    cout <<"Digite um numero: ";
    cin >> num;
    cout <<"Digite um numero: ";
    cin >> num2;
    cout <<"Digite um numero: ";
    cin >> num3;
  if((num == num2) && (num2 == num3))
  cout << "seu triangulo é equilatero" << endl;
  else if((num == num2) || (num == num3) || (num2 == num3))
  cout << "seu triangulo é Isoceles" << endl;
  else
  cout << "seu triangulo é escaleno " << endl;
  return false;
}

//Calculadora Simples
int calculadora(){
  int num, num2;
  char op;
  cout <<"Digite um numero: ";
  cin >> num2;
  cout <<"Digite um numero: ";
  cin >> num2;
  cout << "Digite um operador(+, -, *, /): " << endl;
  cin >> op;

  switch(op){
    case '+':
  cout << num + num2 << endl;
  break;
    case '-':
  cout << num - num2 << endl;
  break;
    case '/':
  cout << num / num2 << endl;
  break;
    case '*':
  cout << num * num2 << endl;
  break;
    default:
  cout << "Digite um operador valido" << endl;
}
return false;
}

//Verificação de ano bissexto
int verificaBissexto(){
  int num;
  cout<<"Digite um numero: ";
  cin>>num;

  if((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0))
  cout << num << " É Um ano bissexto" << endl;
  else 
  cout << num << " Não é um ano bissexto" << endl;
  return false;
}

//Conversão de temperatura
int conversaoDeTemperatura(){
  int num;
  char conv;
  cout<<"Digite a temperatura que quer converter: ";
  cin>>num;
  int cel, far;
  cel = ((num - 32) / 1.8);
  far = ((num * 1.8) + 32);
  cout<<"Digite C se quer converter de Celsius para Fahrenheit ou F para o contrario" << endl;
  cin >> conv;
  switch(conv){
      case 'C':
    cout <<num << " Fahrenheit são: " << cel << " Graus Celsius" << endl;
    break;
      case 'F':
    cout << num << " Graus Celsius são: " << far << " Fahrenheit" << endl;
    break;
      default:
    cout << "Digite um Operador Valido" << endl;

  }
  return false;
}

//Calculadora De IMC
int calculadoraImc(){
  float altura, peso, calculo;
  cout << "Digite a altura: ";
  cin >> altura;
  cout<<"Digite o Peso: ";
  cin >> peso;
  calculo = (peso / (altura * altura));

  cout <<"Seu Imc é: " << calculo << endl;

  if(calculo < 18.5)
  cout<<"Categoria: Abaixo do peso" << endl;
    else if((calculo < 25))
  cout<<"Categoria: Peso normal" << endl;
    else if((calculo < 30))
  cout<<"Categoria: Sobrepeso"<<endl;
    else if((calculo > 30))
  cout<<"Categoria: Obeso" << endl;

  return false;
}

//Identificação de Quadrante de um Ponto no Plano Cartesiano
  int planoCartesiano(){
    int x, y;
    cout<<"Digite o ponto X: " <<endl;
    cin >> x;
    cout<<"Digite o ponto Y: " <<endl;
    cin >> y;

    if (x > 0 && y > 0) {
        cout<<"O ponto está localizado no primeiro quadrante.\n";
    } else if (x < 0 && y > 0) {
        cout<<"O ponto está localizado no segundo quadrante.\n";
    } else if (x < 0 && y < 0) {
        cout<<"O ponto está localizado no terceiro quadrante.\n";
    } else if (x > 0 && y < 0) {
        cout<<"O ponto está localizado no quarto quadrante.\n";
    } else if (x == 0 && y == 0) {
        cout<<"O ponto está localizado na origem.\n";
    } else if (x == 0) {
        cout<<"O ponto está localizado sobre o eixo y.\n";
    } else if (y == 0) {
        cout<<"O ponto está localizado sobre o eixo x.\n";
    }
    return false;
  }

  //Verificação de Saldo Bancário
  int saldoBancario(){
    int saque, resto , saldo = 500;
    cout<<"Digite quanto dinheiro você quer sacar: ";
    cin >> saque;
    resto = saldo - saque;

    if(resto > 0){
      cout <<"Você sacou: " << saque << " Reais, Na sua conta bancaria ainda resta: " << resto << " Reais." << endl; 
    }else
    cout<<"Saque negado, Digite um valor válido"<<endl;
    if(saque < 0)
    cout<<"Saque negado, Digite um valor válido"<<endl;

    return false;
  }

  //Classificação de Quantidade de Leads
    int quantidadeLeads(){
    int leads;
    cout<<"Digite quantos leads: ";
    cin >> leads;

    if(leads<5)
      cout<<"Quantidade baixa de Leads" << endl;
    else if(leads<10)
      cout<<"Quantidade Esperada de Leads" << endl;
    else
      cout<<"Quantidade Alta de leads" << endl;

    return false;
  }

  //Verificação de Situação Acadêmica
  int situacaoAcademica(){
    int nota1, nota2, nota3, presenca, media;

    cout<<"Digite a nota 1: ";
    cin>>nota1;
    cout<<"Digite a nota 2: ";
    cin>>nota2;
    cout<<"Digite a nota 3: ";
    cin>>nota3;
    cout<<"Digite a presença: ";
    cin>>presenca;

    media = ((nota1 + nota2 + nota3) / 3);

      if (media >= 7 && presenca == 100) {
        cout<<"Aprovado. Parabéns!"<<endl;
    } else if (media >= 7 || (media >= 5 && media < 7 && presenca >= 75)) {
        cout<<"Aprovado"<<endl;
    } else {
        cout<<"Reprovado"<<endl;
    }
    return false;
  }


  int main(){
    situacaoAcademica();
    return false;
  
  }
