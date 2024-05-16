#include <iostream>
using namespace std;

//EXERCICIOS CONDICIONAIS

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

  //Cálculo de Recuperação: 
  int calculoRecuperacao(){
    float nota, notaRecup, presenca, notaFinal;

    cout <<"Digite a nota do aluno: ";
    cin >>nota;

    cout<<"Digite a nota da recuperação do aluno: ";
    cin>>notaRecup;

    cout<<"Digite a porcentagem de presença do aluno: ";
    cin>>presenca;

    if (nota < 7 && nota >= 5) {
        notaFinal = nota + notaRecup;
        if (presenca >= 75 && notaFinal >= 10) {
            cout<<"Aprovado" << endl;
            cout<<"Nota final: " << notaFinal << endl;
            cout<<"Presença: " << presenca << endl;
        } else {
            cout<<"Reprovado"<< endl;
            cout<<"Nota final: " << notaFinal<<endl;
            cout<<"Presença: " << presenca<<endl;
        }
    } else{
        cout<<"Aluno não esta em recuperação, Nota: "<< nota << endl;
    }

    return false;
  }

  //Atividade sobre Arrays em C++

  //Declaração e Impressão de Array (Utilizando For):

  int declararArrayFor(){
    int num[5] = {10,20,30,40,50};

    for(int i = 0; i < 5; i++){
      cout<<num[i]<<endl;
    }

    return false;
  }

  //Declaração e Impressão de Array (Utilizando While):

  int declararArrayWhile(){
    int num[5] = {5,4,3,2,1};
    int i = 0;
    while(i < 5){
      cout<<num[i]<<endl;
      i++;
    }
    return 0;
  }

  //Condicional com Array (Utilizando For):

int condicionalArrayFor(){
    int num[] = {1,4,8,12,5,6,7};
    for(int i = 1; i < 7; i++){
        if(num[i] % 2 == 0){
            cout << num[i] << endl;
        }
    }
    return false;
}

//Condicional com Array (Utilizando While):

int condicionalArrayWhile(){
    float num[] = {1.02,2.54,4.99,5.00,6.05,7.23,8.90,9.01};
    int i = 0;

    while(i < 8){
        if(num[i] > 5){
            cout << num[i] << endl;
        }
        i++;
    }
    return false;
}

//Atribuição de Valores e Impressão com For:

int atribuicaoValorFor(){
    int num[10];
    cout << "Digite um número: " << endl;
    cin >> num[0];
    cout << "Digite um número: " << endl;
    cin >> num[1];
    cout << "Digite um número: " << endl;
    cin >> num[2];
    cout << "Digite um número: " << endl;
    cin >> num[3];
    cout << "Digite um número: " << endl;
    cin >> num[4];
    cout << "Digite um número: " << endl;
    cin >> num[5];
    cout << "Digite um número: " << endl;
    cin >> num[6];
    cout << "Digite um número: " << endl;
    cin >> num[7];
    cout << "Digite um número: " << endl;
    cin >> num[8];
    cout << "Digite um número: " << endl;
    cin >> num[9];
    cout<<endl;
    int i = 0;

    for(int i = 0; i < 10; i++){
        cout << num[i] << endl;
    }
    return false;
}
//Impressão de Propriedades do Array:
int impressaoPropriedades(){
    char caracteres[] = {'@','#','+','/','&'};

    for(int i = 0; i < 5; i++){
        sizeof caracteres / sizeof caracteres[0];
        cout << caracteres[i] << " ";
        cout << "O array tem: " << sizeof caracteres << "caracteres. " << endl;
    }
    return false;
}

//Acesso a Elementos Específicos do Array:

int elementosEspecificos(){
    int array[] = {3,7,9,12,4,6,8,10};

        cout << array[2] << endl;
        cout << array[5] + array[7] << endl;
        cout << array[1] - array[0] << endl;
        if(array[3] > array[5]){
            cout << array[3] << endl;
        }
        if(array[7] % 2 == 0){
            cout << array[7] << endl;
        }
        if(array[3] + array[7] > 22){
            cout << array[0] << endl;
        }
        return false;
    }

    //Entrada de Dados do Usuário e Cálculo da Média:

    int dadosUsuario(){
    float num[10], media;
    cout <<"Digite um número: " << endl;
    cin >> num[0];
    cout <<"Digite um número: " << endl;
    cin >> num[1];
    cout <<"Digite um número: " << endl;
    cin >> num[2];
    cout <<"Digite um número: " << endl;
    cin >> num[3];
    cout <<"Digite um número: " << endl;
    cin >> num[4];
    cout <<"Digite um número: " << endl;
    cin >> num[5];
    cout <<"Digite um número: " << endl;
    cin >> num[6];
    cout <<"Digite um número: " << endl;
    cin >> num[7];
    cout <<"Digite um número: " << endl;
    cin >> num[8];
    cout <<"Digite um número: " << endl;
    cin >> num[9];
   media = ((num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9]) / 10);

   cout <<"a média dos numeros é: "<< media << endl;
   return false;
}

//Cálculo da Soma dos Elementos do Array:

int somaElementos(){
    int num[] = {10,20,30,40,50,60,70,80,90,0};
    int soma = 0;

    for(int i = 0; i < 10; i++){
        soma += num[i];
        cout << soma << endl;;
    }
    return false;
}

//Condicional Aninhado com Array (Utilizando For):

int condicionalAninhado(){
    int num[] {10,2,3,9,43,52,81,9};
    for(int i = 0; i < 8; i++){
        if((num[i] % 3 == 0) || (num[i] > 10)){
            cout << num[i] << endl;
        }
}
return false;
}

//Busca por Valor Máximo e Mínimo no Array:

int buscaValorArray(){
    int num[] {0,1,2,3,40,5,6,7,8,9,10,12};
    int max = num[0];
    int min = num[0];

    for(int i = 0; i < 12; i++){
        if(num[i] > max){
            max = num[i];
        }

        if(num[i] < min){
            min = num[i];
        }
    }        
    cout <<"O maior numero do array é: " << max << endl;
    cout <<"O menor numero do array é: " << min << endl;

    return false;
}

//Exercícios sobre Strings e Arrays em C++

//Nível 1:
//Declare uma variável do tipo String chamada nome e armazene seu nome nela. Imprima o valor de nome usando cout.
int stringNome(){
  string nome = "Rafael";
  cout<<"Olá " << nome << endl;
  
  return false;
}

//Declare um array de caracteres vogais com 5 posições. 
//Insira manualmente as vogais ('a', 'e', 'i', 'o', 'u') nas posições do array.
//Imprima cada vogal em uma linha usando cout.

int arrayVogais(){
  char vogais[5][10] = {"a","e","i","o","u"};
  cout<<vogais[0]<<endl;
  cout<<vogais[1]<<endl;
  cout<<vogais[2]<<endl;
  cout<<vogais[3]<<endl;
  cout<<vogais[4]<<endl;

  return false;
}

//Declare uma variável do tipo String chamada letra. 
//Leia um caractere do usuário usando cin e armazene-o em letra. 
//Verifique se letra é uma vogal usando a estrutura if e imprima uma mensagem informando se é ou não.

int verificaVogal(){
  string letra;
  cout<<"Digite uma letra: ";
  cin>>letra;

  if((letra == "a") || (letra == "e") || (letra == "i") || (letra == "o") || (letra == "u"))
  cout<<letra<<" é uma vogal."<<endl;
  else{
    cout<<letra<<" é uma consoante"<<endl;
  }
  return false;
}

//Declare um array de caracteres palavra com 10 posições. 
//Leia uma palavra do usuário usando cin e armazene-a em palavra.
//Imprima a palavra usando cout.

int palavraUsuario(){
  char palavra[10];
  cout<<"Digite uma palavra: ";
  cin>>palavra;

  cout<<"Sua palavra é: "<< palavra <<endl;

  return false;
}

//Declare um array de caracteres frase com 20 posições. 
//Leia uma frase do usuário usando cin e armazene-a em frase. 
//Imprima a frase usando cout.

int fraseUsuario(){
    char frase[20];
    cout <<"Digite uma frase: " << endl;
    cin.ignore();
    cin.getline(frase, 20);

    cout<< frase << endl;

return false;
}

//Nivel 2
//Declare um array de caracteres numeros com 10 posições. 
//Armazene manualmente os números de 1 a 10 nas posições do array. 
//Imprima os números pares do array em linhas separadas usando cout.

int numerosParesArray(){
    int num[11] = {1,2,3,4,5,6,7,8,9,10};

    cout<<"Os números pares são: " << endl;
    cout<<num[1] << endl;
    cout<<num[3] << endl;
    cout<<num[5] << endl;
    cout<<num[7] << endl;
    cout<<num[9] << endl;

return false;
  }

//Declare um array de caracteres frutas com 5 posições. 
//Armazene manualmente os nomes de 5 frutas nas posições do array. 
//Imprima a fruta que está na posição 3 do array usando cout.

int frutasArray(){
  string frutas[4];
    frutas[0] = "Maça";
    frutas[1] = "Banana";
    frutas[2] = "Melancia";
    frutas[3] = "Uva";
    frutas[4] = "Kiwi";

    cout <<"A terceira fruta é: " << frutas[2] << endl;
    
    return false;
}
//Declare um array de caracteres cores com 7 posições. 
//Armazene manualmente os nomes de 7 cores nas posições do array. 
//Leia um número do usuário entre 1 e 7 usando cin. 
//Imprima a cor que está na posição informada pelo usuário usando cout.

int coresArray(){
    string cores[7] = {"azul", "verde", "amarelo", "laranja", "cinza", "preto", "roxo"};
    int num;

    cout << "Digite um número de 0 a 6" << endl;
    cin >> num;

    if(num == 0){
        cout <<""<< (cores[0]) << endl;
    }
    if(num == 1){
        cout <<""<< (cores[1]) << endl;
    }
    if(num == 2){
        cout <<""<< (cores[2]) << endl;
    }
    if(num == 3){
        cout <<""<< (cores[3]) << endl;
    }
    if(num == 4){
        cout <<""<< (cores[4]) << endl;
    }
    if(num == 5){
        cout <<""<< (cores[5]) << endl;
    }
    if(num == 6){
        cout <<""<< (cores[6]) << endl;
    }
    if((num >= 7)||(num < 0)){
        cout <<"ERRO! Digite um número válido." << endl;
}
return 0;
}

//Declare um array de caracteres animais com 10 posições. 
//Armazene manualmente os nomes de 10 animais nas posições do array. 
//Leia um caractere do usuário usando cin. 
//Verifique se o caractere é a primeira letra de um animal do array. 
//Se for, imprima o nome do animal completo.

int animalArray(){
  string animais[10] = {"Abelha", "Coelho","Gato","Hipopotamo","Morcego","Ovelha","Porco","Rato","Tamanduá","Urso"};
    char caractere;
    cout <<"Digite um caractere: " << endl;
    cin >> caractere;

    switch (caractere) {
    case 'a':
    cout << "Abelha" << endl;
    break;

    case 'c':
    cout <<"Coelho" << endl;
    break;

    case 'g':
    cout <<"Gato" << endl;
    break;

    case 'h':
    cout <<"Hipopotamo" << endl;
    break;

    case 'm':
    cout <<"Morcego" << endl;
    break;

    case 'o':
    cout <<"Ovelha" << endl;
    break;

    case 'p':
    cout <<"Porco" << endl;
    break;
    
    case 'r':
    cout <<"Rato" << endl;
    break;

    case 't':
    cout <<"Tamanduá" << endl;
    break;

    case 'u':
    cout <<"Urso" << endl;
    break;

    }
return false;
}


//Declare um array de caracteres dias com 7 posições. 
//Armazene manualmente os nomes dos 7 dias da semana nas posições do array. 
//Leia um número do usuário entre 1 e 7 usando cin. 
//Imprima o dia da semana que está na posição informada pelo usuário usando cout.

int diasArray(){
  string dias[7] = {"Domingo","Segundo","Terça","Quarta","Quinta","Sexta","Sábado"};
    int num;

    cout <<"Digite Um Número entre 1 e 7: " << endl;
    cin >> num;

  if(num == 1){
        cout <<""<< (dias[0]) << endl;
    }
    if(num == 2){
        cout <<""<< (dias[1]) << endl;
    }
    if(num == 3){
        cout <<""<< (dias[2]) << endl;
    }
    if(num == 4){
        cout <<""<< (dias[3]) << endl;
    }
    if(num == 5){
        cout <<""<< (dias[4]) << endl;
    }
    if(num == 6){
        cout <<""<< (dias[5]) << endl;
    }
    if(num == 7){
        cout <<""<< (dias[6]) << endl;
    }
    if((num > 7)||(num < 0)){
        cout <<"ERRO! Digite um número válido." << endl;
}
return false;
}

//Declare um array de caracteres palavra1 e palavra2 com 10 posições cada. 
//Leia duas palavras do usuário usando cin e armazene-as em palavra1 e palavra2. 
//Compare as duas palavras usando a estrutura if e imprima qual palavra é maior em ordem alfabética.

int comparandoPalavras(){
  char palavra1[10], palavra2[10];
    cout <<"Digite a primeira palavra: " << endl;
    cin >> palavra1;
    cout <<"Digite a segunda palavra: " << endl;
    cin >> palavra2;

    if(palavra1 > palavra2){
        cout<<"A segunda palavra é maior (Em ordem alfabetica.)" << endl;
    }else{
        cout <<"A primeira palavra é maior (Em ordem alfabetica.)" << endl;
    }
  return false;
}

//Declare um array de caracteres frase com 20 posições. 
//Leia uma frase do usuário usando cin e armazene-a em frase. 
//Conte o número de vogais na frase e imprima o resultado usando cout.

int numVogaisFrase(){
  char frase[20];
  cout<<"Digite uma frase: ";
  cin>>frase;
    
    int num_vogais = 0;
    if (frase[0] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') num_vogais++;
    if (frase[1] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') num_vogais++;
    if (frase[2] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') num_vogais++;
    if (frase[3] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') num_vogais++;
    if (frase[4] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') num_vogais++;
    if (frase[5] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') num_vogais++;
    if (frase[6] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') num_vogais++;
    if (frase[7] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') num_vogais++;
    if (frase[8] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') num_vogais++;
    if (frase[9] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') num_vogais++;
    if (frase[10] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') num_vogais++;
    if (frase[11] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') num_vogais++;
    if (frase[12] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') num_vogais++;
    if (frase[13] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') num_vogais++;
    if (frase[14] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') num_vogais++;
    if (frase[15] == 'a' || frase[0] == 'e' || frase[0] == 'i' || frase[0] == 'o' || frase[0] == 'u') num_vogais++;
    if (frase[16] == 'a' || frase[1] == 'e' || frase[1] == 'i' || frase[1] == 'o' || frase[1] == 'u') num_vogais++;
    if (frase[17] == 'a' || frase[2] == 'e' || frase[2] == 'i' || frase[2] == 'o' || frase[2] == 'u') num_vogais++;
    if (frase[18] == 'a' || frase[3] == 'e' || frase[3] == 'i' || frase[3] == 'o' || frase[3] == 'u') num_vogais++;
    if (frase[19] == 'a' || frase[4] == 'e' || frase[4] == 'i' || frase[4] == 'o' || frase[4] == 'u') num_vogais++;
    cout << "a frase tem " << num_vogais << " vogais" << endl;
    
    return false;
}

//Declare um array de caracteres texto com 50 posições. 
//Leia um texto do usuário usando cin e armazene-o em texto. 
//Encontre a primeira ocorrência da letra 'a' no texto e imprima a posição da letra.

int textoVogal(){
  string texto;
    cout<<"Digite um texto: "<<endl;
    getline(cin, texto);
    cout<<"o texto digitado foi: " << texto << endl;

    int pos = texto.find("a");
    if(pos != std::string::npos){
        cout << "a vogal 'A' foi encontrada na posição: " << pos << endl;
    }else{
        cout << "a vogal não foi encontrada." << endl;
    }
    return false;
}

//Declare um array de caracteres palavra com 10 posições. 
//Leia uma palavra do usuário usando cin e armazene-a em palavra. 
//Inverta a ordem dos caracteres da palavra e imprima a palavra invertida usando cout.

int palavraInvertida(){
  char palavra[10];
    printf("Digite uma palavra: ");
    scanf("%c %c %c %c %c %c %c %c %c %c",&palavra[0], &palavra[1], &palavra[2], &palavra[3], &palavra[4], &palavra[5], &palavra[6], &palavra[7], &palavra[8], &palavra[9]);

    printf("%c %c %c %c %c %c %c %c %c %c", palavra[9], palavra[8], palavra[7], palavra[6], palavra[5], palavra[4], palavra[3], palavra[2], palavra[1], palavra[0]);

    return false;
}

//

  int main(){
    numVogaisFrase();
    return false;

  
  }
