#include <iostream>

using namespace std;

int main(){
	
		cout<<"|*************************************|"<<endl;
		cout<<"|  Bem-vindos ao jogo da adivinhacao  |"<<endl;
		cout<<"|*************************************|"<<endl;
		
	    const int NUMERO_SECRETO = 42;
		int chute; 
		int tentativas = 0;
		
		double pontos = 1000.0;
		bool nao_acertou = true;
		
		 while(nao_acertou){
				tentativas++;
				 cout<<endl;
				 cout<<"-----------------------------------------"<<endl;
			 cout<<"Tentativa de numero "<<tentativas;
				cout<<"\nQual o seu chute? ";
					cin>>chute;
					
					double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
					pontos = pontos - pontos_perdidos;
							
				bool	acertou = chute==NUMERO_SECRETO;
				bool maior = chute>NUMERO_SECRETO;
				bool	menor = chute<NUMERO_SECRETO;
				
				
				if(acertou){
					cout<<"Parabens, voce acertou o numero secreto"<<endl;
					break;
					
				} else if(maior){
					cout<<"O seu chute e maior que o numero secreto, o seu chute foi "<<chute<<endl;
					
				} if(menor){
					cout<<"O seu chute e menor que o numero secreto, o seu chute foi " <<chute<<endl;
				}
	} 
	cout<<"Sua pontuacao foi de " <<pontos <<endl;
	cout<<"Voce venceu na tentativa de numero " <<tentativas <<endl;
	cout<<"\nFim de jogo";
}