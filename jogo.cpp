#include<iostream>
#include<cstdlib>
#include<ctime>
using  namespace std;
int main(){
    int c,tentativas;
    double pontos=1000.0,pontosperdidos;
    bool acertou,maior;
    char nivel;
    cout<<"\n ***********************************"<<endl;
    cout<<"\n* Bem vindo ao jogo da adivinhacao *"<<endl;
    cout<<"\n ***********************************"<<endl;

    cout<<"\nEscolha o nivel de dificuldade facil (F), medio (M) ou dificil (D): "<<endl;
    cout<<"\nDigite a letra correspondente ao nivel: ";
    cin>>nivel;
    if (nivel=='F' || nivel=='f'){
        cout<<"\nVoce escolheu o nivel facil, voce tem 20 tentativas!"<<endl;
        tentativas=20;
    }
    else if (nivel=='M' || nivel=='m'){
        cout<<"\nVoce escolheu o nivel medio, voce tem 10 tentativas!"<<endl;
        tentativas=10;
    }
    else if (nivel=='D' || nivel=='d'){
        cout<<"\nVoce escolheu o nivel dificil, voce tem 5 tentativas!"<<endl;
        tentativas=5;
    }
    srand(time(NULL));
const int NUM=rand()%100;
if(nivel=='F' || nivel=='f' || nivel=='M' || nivel=='m' || nivel=='D' || nivel=='d'){

for(tentativas=tentativas;tentativas>0;tentativas--){
    
   cout<<"\nDigite um numero de 0 a 100: ";
    cin>>c;
    acertou=NUM==c;
    maior=NUM>c;
pontosperdidos=abs(c-NUM)/2.0;
pontos=pontos-pontosperdidos;
    if(acertou){
        cout<<"\nParabens voce acertou o numero secreto!"<<endl;
        tentativas=0;
    }
    else if (c<0 || c>100){
        cout<<"\nVoce digitou um numero invalido, digite um numero de 0 a 100!"<<endl;
    }
    else{
        cout<<"\nVoce errou o numero secreto,tente novamente!: "<<endl;
    }
    if (maior){
        cout<<"\nO numero secreto e maior que o seu!"<<endl;}
    else if (!maior && c != NUM){
            cout<<"\nO numero secreto e menor que o seu!"<<endl;
        }
    }
if (c!=NUM){
    cout<<"\nSuas tentativas acabaram, voce perdeu!"<<endl;
 }
 cout.precision(2);
cout<<fixed;
 cout<<"\nVoce fez "<<pontos<<" pontos em "<<tentativas<<" tentativas!"<<endl;
 cout<<"\n*****Fim do jogo*****"<<endl;

}
}