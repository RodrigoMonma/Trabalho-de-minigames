#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int escolha=0;
	int r;
	int c;
	while(escolha==0){
		printf("Menu do jogo.\nEscolha seu caminho e digite o numero ao lado para comecar:\n1. Perguntas e Respostas.\n2. Cobra na caixa.\n3. Tropas de elite.\n4. Sair do jogo.\n\n");
		scanf("%d",&escolha);
		while((escolha!=1)&&(escolha!=2)&&(escolha!=3)&&(escolha!=4)&&(escolha!=795)){
			printf("por favor digite um valor valido. ");
			scanf("%d",&escolha);
		}
		system("cls");
		if(escolha==1){
			while(escolha==1){
			//Inicio do codigo 1
printf("Bem vindo ao jogo de perguntas e respostas.\nSao 5 perguntas com temas totalmente distintos com 4 alternativas. Apenas 1 lhe dara a pontuacao de acerto\n\nDigite qualquer tecla numerica para prosseguir\n\n");
	int ponto = 0;
	scanf("%d",&r);
	system("cls");
		printf("OK, Vamos comecar!\n\n");
		printf("1.Pergunta: Qual desses ganhou o premio de melhor jogo indie em 2018?\n1) Cuphead\n2) Hades\n3) Celeste\n4) Hollow Knight\n\nR: ");
		scanf("%d",&r);
		while((r<1)||(r>4)){
			printf("Valor inserido nao corresponde a nenhuma resposta. Tente novamente.\n");
			scanf("%d",&r);
		}
		if(r!=3){
			printf("Resposta incorreta :(\nA resposta correta era a 3\n\n");
			ponto+=0;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		} else {
			printf("Resposta certa :D\n\n");
			ponto+=1;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		}
		printf("2.Pergunta: Qual dessas musicas NAO foi composta por Wolfgang Amadeus Mozart\n1) Rondo Alla Turca\n2) Rainha da Noite\n3) Brilha Brilha Estrelinha\n4) Toccata and Fungue in D minor\n\nR: ");
		scanf("%d",&r);
		while((r<1)||(r>4)){
			printf("Valor inserido nao corresponde a nenhuma resposta. Tente novamente.\n");
			scanf("%d",&r);
		}
		if(r!=4){
			printf("Resposta incorreta :(\nA resposta correta era a 4\n\n");
			ponto+=0;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		} else {
			printf("Resposta certa :D\n\n");
			ponto+=1;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		}
		printf("3.Pergunta: Qual dessas lutas Nao eh classificada como arte marcial tradicional\n1) Krav Maga\n2) Muay Thai\n3) Judo\n4) Karate\n\nR: ");
		scanf("%d",&r);
		while((r<1)||(r>4)){
			printf("Valor inserido nao corresponde a nenhuma resposta. Tente novamente.\n");
			scanf("%d",&r);
		}
		if(r!=1){
			printf("Resposta errada :(\nA resposta correta era a 1\n\n");
			ponto+=0;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		} else {
			printf("Resposta certa :D\n\n");
			ponto+=1;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		}
		printf("4.Pergunta: Qual desses atores foi cogitado para interpretar o personagem James bond no filme -007-Cassino Royale(2006)\n1) Henry Cavill\n2) Tom Hardy\n3) Chris Evans\n4) Kaua Reymond\n\nR: ");
		scanf("%d",&r);
		while((r<1)||(r>4)){
			printf("Valor inserido nao corresponde a nenhuma resposta. Tente novamente.\n");
			scanf("%d",&r);
		}
		if(r!=1){
			printf("Resposta incorreta :(\nA resposta correta era 1\n\n");
			ponto+=0;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		} else {
			printf("Resposta certa :D\n\n");
			ponto+=1;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		}
		printf("5.Pergunta: Qual dessas Nao eh uma linguagem de programacao?\n1) Python\n2) HTML\n3) Java\n4) C++\n\nR: ");
		scanf("%d",&r);
		while((r<1)||(r>4)){
			printf("Valor inserido nao corresponde a nenhuma resposta. Tente novamente.\n");
			scanf("%d",&r);
		}
		if(r!=2){
			printf("Resposta incorreta :(\nA resposta correta era a 2\n\n");
			ponto+=0;
			printf("Digite qualquer tecla numerica para continuar. ");
			scanf("%d",&r);
			system("cls");
		} else {
			printf("Resposta certa :D\n\n");
			ponto+=1;
			printf("Digite qualquer tecla numerica para ver seu resultado. ");
			scanf("%d",&r);
			system("cls");
		}
		printf("Questoes acertadas: %d\n",ponto);
		if(ponto==5){
			printf("Gabaritou! Digito 1: 7.\n");
		}
			//fim do codigo 1
			printf("Deseja reiniciar?\nDigite 1 para recomecar e 0 para voltar ao menu. ");
			scanf("%d",&escolha);
			while(escolha<0||escolha>1){
			printf("por favor digite um valor valido. ");
			scanf("%d",&escolha);
				}
				system("cls");
			}
		}
		if(escolha==2) {
			system("cls");
// inicio do codigo 2
while(escolha==2){
	printf("Nesse jogo duas pessoas escolhem 1 dentre 5 caixas por vez, sendo que ha uma cobra e um botao escondidos.\nQuem encontrar o botao ganha imediatamente. E quem encontrar a cobra perdera.\nAntes de comecar escolham dois nomes dentre os 7 sugeridos.\n\n");
int caixa[5] = {0,0,0,0,0};
int co;
int e1, e2;
char nome[7][20]= {"Pedro", "Rodrigo", "Joao", "Maria", "Luise", "Manuella", "Leopoldo"};
int p,s;
int c=1;
srand(time(NULL));
printf("1 - Pedro\n");
printf("2 - Rodrigo\n");
printf("3 - Joao\n");
printf("4 - Maria\n");
printf("5 - Luise\n");
printf("6 - Manuella\n");
printf("7 - Leopoldo\n\n");
// Jogador 1
do{
    printf("Jogador 1 voce comeca, escolha um numero de 1 a 7: ");
    scanf("%d", &e1);
	e1=e1-1;
    if(e1 < 0 || e1 > 6){
        printf("Numero invalido!\n");
    }

}while(e1 < 0 || e1 > 6);

// Jogador 2
do{
    printf("Jogador 2, agora eh a sua vez, escolha um numero de 1 a 7: ");
    scanf("%d", &e2);
	e2=e2-1;
    if(e2 < 0 || e2 > 6){
        printf("Numero invalido!\n");
    }
    else if(e2 == e1){
        printf("Esse nome ja foi escolhido pelo jogador 1\n");
    }

}while(e2 < 0 || e2 > 6 || e2 == e1);
if(rand() %2==0){
p = e1;	
s = e2;
}
else{
p = e2;
s = e1;	
}
// Resultado
system("cls");
co = rand()%20;
if(co == 0){
caixa[0]=1;
caixa[1]=-1;
caixa[2]=0;
caixa[3]=0;
caixa[4]=0;
}else if(co == 1){
caixa[0]=1;
caixa[1]=0;
caixa[2]=-1;
caixa[3]=0;
caixa[4]=0;
}else if(co == 2){
caixa[0]=1;
caixa[1]=0;
caixa[2]=0;
caixa[3]=-1;
caixa[4]=0;
}else if(co == 3){
caixa[0]=1;
caixa[1]=0;
caixa[2]=0;
caixa[3]=0;
caixa[4]=-1;
}else if(co == 4){
caixa[0]=-1;
caixa[1]=1;
caixa[2]=0;
caixa[3]=0;
caixa[4]=0;
}else if(co == 5){
caixa[0]=0;
caixa[1]=1;
caixa[2]=-1;
caixa[3]=0;
caixa[4]=0;
}else if(co == 6){
caixa[0]=0;
caixa[1]=1;
caixa[2]=0;
caixa[3]=-1;
caixa[4]=0;
}else if(co == 7){
caixa[0]=0;
caixa[1]=1;
caixa[2]=0;
caixa[3]=0;
caixa[4]=-1;
}else if(co == 8){
caixa[0]=-1;
caixa[1]=0;
caixa[2]=1;
caixa[3]=0;
caixa[4]=0;
}else if(co == 9){
caixa[0]=0;
caixa[1]=-1;
caixa[2]=1;
caixa[3]=0;
caixa[4]=0;
}else if(co == 10){
caixa[0]=0;
caixa[1]=0;
caixa[2]=1;
caixa[3]=-1;
caixa[4]=0;
}else if(co == 11){
caixa[0]=0;
caixa[1]=0;
caixa[2]=1;
caixa[3]=0;
caixa[4]=-1;
}else if(co == 12){
caixa[0]=-1;
caixa[1]=0;
caixa[2]=0;
caixa[3]=1;
caixa[4]=0;
}else if(co == 13){
caixa[0]=0;
caixa[1]=-1;
caixa[2]=0;
caixa[3]=1;
caixa[4]=0;
}else if(co == 14){
caixa[0]=0;
caixa[1]=0;
caixa[2]=-1;
caixa[3]=1;
caixa[4]=0;
}else if(co == 15){
caixa[0]=0;
caixa[1]=0;
caixa[2]=0;
caixa[3]=1;
caixa[4]=-1;
}else if(co == 16){
caixa[0]=-1;
caixa[1]=0;
caixa[2]=0;
caixa[3]=0;
caixa[4]=1;
}else if(co == 17){
caixa[0]=0;
caixa[1]=-1;
caixa[2]=0;
caixa[3]=0;
caixa[4]=1;
}else if(co == 18){
caixa[0]=0;
caixa[1]=0;
caixa[2]=-1;
caixa[3]=0;
caixa[4]=1;
}else if(co == 19){
caixa[0]=0;
caixa[1]=0;
caixa[2]=0;
caixa[3]=-1;
caixa[4]=1;
}
printf("[1]  [2]  [3]  [4]  [5]");
printf("\n%s escolha um numero de 1 a 5 que representa as 5 caixas egipcias: ", nome[p]);
scanf("%d", &r);

while(r<1 || r>5){
    printf("ERRO: O numero digitado eh invalido.\n");
    printf("Por favor, digite um numero de 1 a 5 conforme foi pedido: ");
    scanf("%d", &r);
}

r = r - 1;

while(caixa[r] != 1 && caixa[r] != -1){

    if(caixa[r] == 9){
        printf("Essa caixa ja foi escolhida, tente outra.\n");
    }

    else{
    	system("cls");
        printf("CAIXA VAZIA, continue jogando\n\n");
        caixa[r] = 9;   // marca a caixa como usada
        if(caixa[0]!=9){printf("[1]  ");} else{printf("     ");}
		if(caixa[1]!=9){printf("[2]  ");} else{printf("     ");}
		if(caixa[2]!=9){printf("[3]  ");} else{printf("     ");}
		if(caixa[3]!=9){printf("[4]  ");} else{printf("     ");}
		if(caixa[4]!=9){printf("[5]");}
			printf("\n\n");
		c++;
		}
if(c%2==0){
	//jogador 2
printf("%s ", nome[s]);
} else {
	//jgador 1
printf("%s ", nome[p]);
	
}
    printf("escolha outra caixa: ");
    scanf("%d", &r);
    while(r<1 || r>5){
    printf("ERRO: O numero digitado eh invalido.\n");
    printf("Por favor, digite um numero de 1 a 5 conforme foi pedido: ");
    scanf("%d", &r);
}
    r = r - 1;
}

if(caixa[r] == 1){
   if(c%2==0){
	//jogador 2
printf("Parabens %s por vencer a rodada!\n", nome[s]);
} else {
	//jgador 1
printf("Parabens %s por vencer a rodada!\n", nome[p]);
if((caixa[0]!=9)&&(caixa[1]!=9)&&(caixa[2]!=9)&&(caixa[3]!=9)&&(caixa[4]!=9)){
	printf("Impressionante! Digito 2: 9.\n\n");
}
}} else if(caixa[r] == -1){
	if(c%2==0){
	//jogador 2
printf("Womp womp. Sinto muito %s, voce perdeu!!!\n", nome[s]);
} else {
	//jgador 1
printf("Womp womp. Sinto muito %s, voce perdeu!!!\n", nome[p]);
}
}
printf("Deseja reiniciar?\nDigite 1 para continuar e 0 para voltar ao menu. ");
scanf("%d",&escolha);
while(escolha<0||escolha>1){
			printf("por favor digite um valor valido. ");
			scanf("%d",&escolha);
			}
			if(escolha==1){
			escolha = 2;
			}
			system("cls");
		}//final do codigo 2
		}
		if(escolha==3) {
			while(escolha==3){
				//Inicio do codigo 3
				int a1,a2,b1,b2,e;
				printf("Nesse jogo cada jogador tem dois grupos de tropas.\nAtacar uma tropa inimiga fara com que o valor do seu grupo seja somado ao grupo adversario (reforcos chegaram).\nSe um grupo ultrapassar 5 unidades as tropas serao desfeitas (o ataque foi um sucesso).\nNao sera possivel realizar acoes com um grupo desfeito.\nAo dividir as tropas entre si sera possivel renovar um grupo perdido.\nUtilize as acoes disponiveis e estrategias de combate para derrubar os dois grupos adversarios e assim vencer o jogo.\n\nDecidam quem comecara a partida como jogador 1 e digitem qualquer tecla numerica para comecar\n\n");
				scanf("%d",&r);
				system("cls");
	a1=1;
	a2=1;
	b1=1;
	b2=1;
	while(((a1!=0)||(a2!=0))&&((b1!=0)||(b2!=0))){//condição pro jogo rodar
		printf("Jogador 1:\t\t\t\tJogador 2:\nA1: ");
		for(c=1;c<=a1;c++){
		printf("A ");
		}
		printf("(%d)",a1);
		for(e=5;e>a1;e--){
		printf("  ");
		}
		printf("\t\t\tB1: ");
		for(c=1;c<=b1;c++){
		printf("B ");
		}
		printf("(%d)",b1);
		printf("\n\n\n\nA2: ");
		for(c=1;c<=a2;c++){
		printf("A ");
		}
		printf("(%d)",a2);
		for(e=5;e>a2;e--){
		printf("  ");
		}
		printf("\t\t\tB2: ");
		for(c=1;c<=b2;c++){
		printf("B ");
		}
		printf("(%d)",b2);
		printf("\n\n");
		printf("\nJogador 1: escolha sua acao:\n1) Atacar com A1.\n2) Atacar com A2.\n3) Redistribuir suas tropas.\n");
		scanf("%d",&r);
		while(((r==3)&&((a1==1)||(a1==0))&&((a2==1)||(a2==0)))||((r>3||r<1)||(r==1&&a1==0)||(r==2&&a2==0))){
			if(r>3||r<1){
				printf("Insira um valor valido.\n");
				scanf("%d",&r);
			} else {
				printf("acao indisponivel. Insira outra acao.\n");
				scanf("%d",&r);
			}
			}
		if(r==1){
			printf("Escolha qual grupo atacar.\n1) B1\n2) B2\n");
			scanf("%d",&r);
			while((r>2||r<1)||(r==1&&b1==0)||(r==2&&b2==0)){
			printf("Insira um valor valido.\n");
			scanf("%d",&r); }
			if(r==1){
				b1=b1+a1;
				if(b1>5){
					b1=0;
				}
				r=0;
			} else if(r==2){
				b2=b2+a1;
				if(b2>5){
					b2=0;
				}
				r=0;
			}
		}
		if(r==2){
			printf("Escolha qual grupo atacar.\n1) B1\n2) B2\n");
			scanf("%d",&r);
			while((r>2||r<1)||(r==1&&b1==0)||(r==2&&b2==0)){
			printf("Insira um valor valido.\n");
			scanf("%d",&r); }
			if(r==1){
				b1=b1+a2;
				if(b1>5){
					b1=0;
				}
				r=0;
			} else if(r==2){
				b2=b2+a2;
				if(b2>5){
					b2=0;
				}
				r=0;
			}
		}
		if(r==3){
			printf("Como sera a redistribuicao?\n1) A1 -> A2.\n2) A2 -> A1.\n");
			scanf("%d",&r);
			while((r>2||r<1)||(r==1&&(a1==0||a1==1))||(r==2&&(a2==0||a2==1))){
				if((r==1&&(a1==0||a1==1))){
				printf("Tropas insuficientes nesse grupo. As tropas continuarao com a redistribuicao no sentido oposto.\n");
				r=2;
			} else if(r==2&&(a2==0||a2==1)){
				printf("Tropas insuficientes nesse grupo. As tropas continuarao com a redistribuicao no sentido oposto.\n");
				r=1;
			} else{
		   	printf("Insira uma resposta valida.\n");
			scanf("%d",&r); 
			}
			}
			if(r==1){
				printf("Quantas tropas serao deslocadas?\n");
				scanf("%d",&r);
				while((r>4)||(r<1)||(r>=a1)||(r+a2>5)){
					if((r>4)||(r<1)){
		   			printf("Insira uma resposta valida.\n");
					scanf("%d",&r); } else {
		   		printf("Insira um valor valido, que nao transfira todas as suas tropas de uma parte ou exceda a outra.\n");
				scanf("%d",&r); }}
				a1=a1-r;
				a2=a2+r;
				r=0;
			} else {
				printf("Quantas tropas serao deslocadas?\n");
				scanf("%d",&r);
				while((r>4)||(r<1)||(r>=a2)||(r+a1>5)){
					if((r>4)||(r<1)){
		   			printf("Insira uma resposta valida.\n");
					scanf("%d",&r); } else {
		   		printf("Insira um valor valido, que nao transfira todas as suas tropas de uma parte ou exceda a outra.\n");
				scanf("%d",&r); }}
				a2=a2-r;
				a1=a1+r;
				r=0;
			}
		}
		system("cls");
		if(b1>0||b2>0){
			//TURNO DO J2
		printf("Jogador 1:\t\t\t\tJogador 2:\nA1: ");
		for(c=1;c<=a1;c++){
		printf("A ");
		}
		printf("(%d)",a1);
		for(e=5;e>a1;e--){
		printf("  ");
		}
		printf("\t\t\tB1: ");
		for(c=1;c<=b1;c++){
		printf("B ");
		}
		printf("(%d)",b1);
		printf("\n\n\n\nA2: ");
		for(c=1;c<=a2;c++){
		printf("A ");
		}
		printf("(%d)",a2);
		for(e=5;e>a2;e--){
		printf("  ");
		}
		printf("\t\t\tB2: ");
		for(c=1;c<=b2;c++){
		printf("B ");
		}
		printf("(%d)",b2);
		printf("\n\n");
		printf("\nJogador 2: escolha sua acao:\n1) Atacar com B1.\n2) Atacar com B2.\n3) Redistribuir suas tropas.\n");
		scanf("%d",&r);
		while(((r==3)&&((b1==1)||(b1==0))&&((b2==1)||(b2==0)))||((r>3||r<1)||(r==1&&b1==0)||(r==2&&b2==0))){
			if(r>3||r<1){
				printf("Insira um valor valido.\n");
				scanf("%d",&r);
			} else {
				printf("acao indisponivel. Insira outra acao.\n");
				scanf("%d",&r);
			}
			}
		if(r==1){
			printf("Escolha qual grupo atacar.\n1) A1\n2) A2\n");
			scanf("%d",&r);
			while((r>2||r<1)||(r==1&&a1==0)||(r==2&&a2==0)){
			printf("Insira um valor valido.\n");
			scanf("%d",&r); }
			if(r==1){
				a1=a1+b1;
				if(a1>5){
					a1=0;
				}
				r=0;
			} else if(r==2){
				a2=a2+b1;
				if(a2>5){
					a2=0;
				}
				r=0;
			}
		}
		if(r==2){
			printf("Escolha qual grupo atacar.\n1) A1\n2) A2\n");
			scanf("%d",&r);
			while((r>2||r<1)||(r==1&&a1==0)||(r==2&&a2==0)){
			printf("Insira um valor valido.\n");
			scanf("%d",&r); }
			if(r==1){
				a1=a1+b2;
				if(a1>5){
					a1=0;
				}
				r=0;
			} else if(r==2){
				a2=a2+b2;
				if(a2>5){
					a2=0;
				}
				r=0;
			}
		}
		if(r==3){
			printf("Como sera a redistribuicao?\n1) B1 -> B2.\n2) B2 -> B1.\n");
			scanf("%d",&r);
			while((r>2||r<1)||(r==1&&(b1==0||b1==1))||(r==2&&(b2==0||b2==1))){
				if((r==1&&(b1==0||b1==1))){
				printf("Tropas insuficientes nesse grupo. As tropas continuarao com a redistribuicao no sentido oposto.\n");
				r=2;
			} else if(r==2&&(b2==0||b2==1)){
				printf("Tropas insuficientes nesse grupo. As tropas continuarao com a redistribuicao no sentido oposto.\n");
				r=1;
			} else{
		   	printf("Insira uma resposta valida.\n");
			scanf("%d",&r); 
			}
			}
			if(r==1){
				printf("Quantas tropas serao deslocadas?\n");
				scanf("%d",&r);
				while((r>4)||(r<1)||(r>=b1)||(r+b2>5)){
					if((r>4)||(r<1)){
		   			printf("Insira uma resposta valida.\n");
					scanf("%d",&r); } else {
		   		printf("Insira um valor valido, que nao transfira todas as suas tropas de uma parte ou exceda a outra.\n");
				scanf("%d",&r); }}
				b1=b1-r;
				b2=b2+r;
				r=0;
			} else {
				printf("Quantas tropas serao deslocadas?\n");
				scanf("%d",&r);
				while((r>4)||(r<1)||(r>=b2)||(r+b1>5)){
					if((r>4)||(r<1)){
		   			printf("Insira uma resposta valida.\n");
					scanf("%d",&r); } else {
		   		printf("Insira um valor valido, que nao transfira todas as suas tropas de uma parte ou exceda a outra.\n");
				scanf("%d",&r); }}
				b2=b2-r;
				b1=b1+r;
				r=0;
			}
		}
		system("cls");
		}
  }
  if((b1==0)&&(b2==0)){
	  printf("Parabens jogador 1, voce e o vencedor!!\n\n");
  } else {
	  printf("Parabens jogador 2, voce e o vencedor!!\n\n");
  }
  printf("Uma observacao: Nessa mini coletanea ha um codigo de 3 digitos para acessar um segredo no menu.\nCada digito e revelado em certas circunstancias em cada jogo.\nDigito 3: 5.\n\n");
				//fim do codigo 3
			printf("Deseja reiniciar?\nDigite 1 para recomecar e 0 para voltar ao menu. ");
			scanf("%d",&escolha);
			while(escolha<0||escolha>1){
			printf("por favor digite um valor valido. ");
			scanf("%d",&escolha);
			}
			if(escolha==1){
			escolha = 3;
			}
			system("cls");
			}
		}
		if(escolha==795){
			printf("Voce encontrou essa mensagem! Isso significa que voce jogou todos os jogos (ou viu o codigo).\nDe qualquer forma muito obrigado por estar aqui e ser parte do comeco da nossa jornada como programadores.\nMesmo que tudo isso seja parte de um projeto de faculdade nao deixa de ser um marco incrivel nas nossas vidas.\n\n\nCriadores:\nPedro Augusto Leao Queiroz.\nRodrigo Ryoji Oliveira Monma.\n\n :)\n\nPressione qualquer tecla numerica para voltar. ");
			scanf("%d",&escolha);
			escolha = 0;
			system("cls");
		}
	}
	printf("Ate a proxima!");
	return 0;
}