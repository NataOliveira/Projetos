#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (void){
setlocale(LC_ALL, "Portuguese");
//Declarando vari�veis
	char nome[40];
	char endereco [50];
	char telefone[15];
	char cpf [15];
	float fim;
	int vz;
	int opjuros;
	float parc;
    int chose;
	char nome_car;
	int carro;
	int pag;
	float carroslect;
	float valor;
	int kwid = 48990, mobi = 49990, uno = 64990, hb20 = 64990, joy = 64990, gol= 65990, siena = 66990;

//MOSTRAR NA TELA OP��O DE MODELOS DE CARROS
	printf ("****************TABELA CARROS � VENDA***************\n");
	printf("_____Modelo______________Motor____________Preco____\n");
	printf ("1-->Renault Kwid        1.0 12v         R$48.990\n");
	printf ("2-->Fiat Mobi           1.0 8V          R$49.990\n");
	printf ("3-->Fiat  Uno           1.0 8V          R$64.990\n");
	printf ("4-->Hyundai HB20        1.0 12V         R$64.990\n");
	printf ("5-->Chevrolet Joy       1.0 8V          R$64.990\n");
	printf ("6-->Volkswagen Gol      1.0 8V          R$65.990\n");
	printf ("7-->Fiat Grand Siena    1.0 8V          R$66.990\n");
	printf("\n****************************************************");
	printf (" \nSelecione : ");
	scanf ("%i", &chose);
// COMANDO QUE VAI RECEBER VALOR E ARMAZENAR NA VARI�VEL ''CHOSE'' E VERI�VEL ''CARRO'' RECEBER VALOR
	switch (chose) {

		case 1 :
			carro = kwid;
			printf("\nVeiculo : Renault Kwid 1.0 12v\n");
			break;
		case 2 :
			carro = mobi;
			printf("\nVeiculo : Fiat Mobi 1.0 8V\n");
			break;
		case 3 :
			carro = uno;
			printf("\nVeiculo : Fiat  Uno 1.0 8V\n");
			break;
		case 4 :
			carro = hb20;
			printf("\nVeiculo : Hyundai HB20 1.0 12V\n");
			break;
		case 5 :
			carro = joy;
			printf("\nVeiculo : Chevrolet Joy 1.0 8V\n") ;
			break;
		case 6 :
			carro = gol;
			printf("\nVeiculo : Volkswagen Gol 1.0 8V\n");
			break;
		case 7 :
			carro = siena;
			printf("\nVeiculo : Fiat Grand Siena 1.0 8V\n");
			break;
			default :
				printf("OP��O INV�LIDA");
				return 0;
	}
//vari�vel ''carroslect'' recebe valor da vari�vel ''carros'' e mostra na tela
	  carroslect = carro;
		printf("\nValor : %.2f", carroslect);
//MOSTRA NA TELA OP��ES DE PAGAMENTO
		printf("\n\nM�todo de Pagamento: \n1--> � Vista com 10% % de desconto\n2-->Financiamento C/Juros %\n\nSelecione: ");
		scanf("%i", &pag);
//Validar op��o selecionada
		if(pag != 1 && pag !=2){
			return 0;
		}
//ENTRA NO COMANDO PARA PAGAMENTO A VISTA
		if (pag == 1){
//APLICA DESCONTO DE 10%
		carroslect= carroslect-(carroslect*10/100);
		printf("\nValor Final do Ve�culo com desconto : %.2f\n", carroslect);
//RECEBER INFORMA��ES DO CLIENTE PARA EMISS�O DA NOTA
		printf("\n\n**********INSIRA SEUS DADOS**********\n");

		fgets (nome,40,stdin);
			printf ("\nDigite seu nome: ");
		fgets (nome,40,stdin);
			printf("Digite seu CPF: ");
		fgets(cpf,15,stdin);
			printf ("Digite seu endereco: ");
		fgets (endereco,50,stdin);
			printf("Digite seu telefone: ");
		fgets(telefone,15,stdin);
//EMISS�O DA NOTA FISCAL
		printf("\n\n\n\n�������������������������������������������������������");
		printf("\n**********************NOTA FISCAL**********************");
		printf("\nCliente: %s", nome);
		printf("\nEndere�o: %s", endereco);
		printf("\nCPF: %s", cpf);
		printf("\nTelefone: %s", telefone);
		printf("\nModelo Ve�culo: ");

		if(chose==1)
		printf("Renault Kwid       1.0 12v\n");
		else if(chose==2)
		printf("Fiat Mobi           1.0 8V\n");
		else if(chose==3)
		printf("Fiat  Uno          1.0 8V\n");
		else if(chose==4)
		printf("Hyundai HB20       1.0 12V\n");
		else if(chose==5)
		printf("Chevrolet Joy       1.0 8V\n");
		else if(chose==6)
		printf("Volkswagen Gol      1.0 8V\n");
		else if(chose==7)
		printf("Fiat Grand Siena    1.0 8V\n");

		printf("\nTotal : %.2f", carroslect);
		printf("\n\n*******************************************************");
		printf("\n*___________MUITO OBRIGADO E VOLTE SEMPRE_____________*");
		printf("\n*******************************************************");
		printf("\n�������������������������������������������������������");
	}
		else {
//MOSTRA OP��ES DE PARCELAMENTO E VALORES COM JUROS
		printf("\n***Op��es de Financiamento***\n");
		printf("1--> 12x %.2f (Com Juros 10%%)= %.2f\n", (carroslect+(carroslect*10/100)) /12, carroslect+(carroslect*0.10));
		printf("2--> 24x %.2f (Com Juros 15%%)= %.2f\n", (carroslect+(carroslect*15/100)) /24, carroslect+(carroslect*0.15));
		printf("3--> 36x %.2f (Com Juros 20%%)= %.2f\n", (carroslect+(carroslect*20/100)) /36, carroslect+(carroslect*0.20));
		printf("4--> 48x %.2f (Com Juros 25%%)= %.2f\n", (carroslect+(carroslect*25/100)) /48, carroslect+(carroslect*0.25));

		printf("\nSelecione: ");
		scanf ("%i", &opjuros);

//FAZ O CALCULO DO JUROS NA OP��O SELCIONADA ACIMA
		switch (opjuros) {
			case 1:
				opjuros = carroslect+(carroslect*10/100);
				vz = 12;
				parc= opjuros/12;
				break;
			case 2:
				opjuros = carroslect+(carroslect*15/100);
				vz = 24;
				parc= opjuros/24;
				break;
			case 3:
				opjuros = carroslect+(carroslect*20/100);
				vz = 36;
				parc= opjuros/36;
				break;
			case 4:
				opjuros = carroslect+(carroslect*25/100);
				vz = 48;
				parc= opjuros/48;
				break;
				default :
				printf("OP��O INV�LIDA");
				return 0;
			}
	    fim=opjuros;

		float opjurosf = opjuros;

		printf("%.2f", opjurosf);

//RECEBER INFORMA��ES DO CLIENTE PARA EMISS�O DA NOTA
		printf("\n\n**********INSIRA SEUS DADOS**********\n");

		fgets (nome,40,stdin);
			printf ("\nDigite seu nome: ");
		fgets (nome,40,stdin);
			printf("Digite seu CPF: ");
		fgets(cpf,15,stdin);
			printf ("Digite seu endereco: ");
		fgets (endereco,50,stdin);
			printf("Digite seu telefone: ");
		fgets(telefone,15,stdin);

//EMISS�O DA NOTA FISCAL
		printf("\n\n\n\n�������������������������������������������������������");
		printf("\n**********************NOTA FISCAL**********************");
		printf("\nCliente: %s", nome);
		printf("Endere�o: %s", endereco);
		printf("CPF: %s", cpf);
		printf("Telefone: %s", telefone);

		printf("\nModelo Ve�culo: ");

		if(chose==1)
		printf("Renault Kwid       1.0 12v\n");
		else if(chose==2)
		printf("Fiat Mobi           1.0 8V\n");
		else if(chose==3)
		printf("Fiat  Uno          1.0 8V\n");
		else if(chose==4)
		printf("Hyundai HB20       1.0 12V\n");
		else if(chose==5)
		printf("Chevrolet Joy       1.0 8V\n");
		else if(chose==6)
		printf("Volkswagen Gol      1.0 8V\n");
		else if(chose==7)
		printf("Fiat Grand Siena    1.0 8V\n");

		printf("Financiamento em %i Vezes\nValor Mensalidade : %.2f\nValor Final: %.2f ",vz,parc,fim);
		printf("\n\n*******************************************************");
		printf("\n*___________MUITO OBRIGADO E VOLTE SEMPRE_____________*");
		printf("\n*******************************************************");
		printf("\n�������������������������������������������������������");
}
	return 0;
}
