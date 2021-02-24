#include <stdio.h>
#include <locale.h>

int main (){

		setlocale(LC_ALL, "Portuguese");
		
		int escolha, resp_consumo;
		float cons_med, distancia, preco_combus, comb1, comb2, media_preco, km_perc, litros, ConsumoMedio;
		

		
		printf("----- ESCOLHA UMA OPÇÃO -----\n");
		printf("1 - Viagem de apenas IDA ou VOLTA\n");
		printf("2 - Viagem de IDA e VOLTA\n");
		printf("-----------------------------\n");
		
		escolher:
		
		scanf("%i", &escolha);
		
		switch(escolha){
			case 1:
				printf("\nVocê sabe o consumo médio do seu carro?\n");
				printf("1 - Sim");
				printf("\n2 - Não");
				scanf("%i", &resp_consumo);
				
				
				if(resp_consumo == 1){
					printf("Insira o preço do combustível que você usa: ");
					scanf("%f", &preco_combus);
					
					printf("Insira o consumo médio do carro: ");
		        	scanf("%f", &cons_med);
		        
			        printf("Digite a distância que você irá percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = distancia / cons_med; 
					printf("\n\nCombustível necessário para a viagem: %.1f litros\n", comb1);
				
					media_preco = preco_combus * comb1;
					printf("\nO valor necessario em combustível é de R$%.2f", media_preco);
				} else if (resp_consumo == 2) {
					printf("Insira o preço do combustível que você usa: ");
					scanf("%f", &preco_combus);
					
					printf("Digite quantos KM seu carro percorreu com um 1 tanque de combustível: ");
					scanf("%i", &km_perc);
					
					printf("Digite a quantidade de litros que você gastou: ");
					scanf("%i", &litros);
					
					ConsumoMedio = km_perc / litros; 
					
			        printf("Digite a distância que você irá percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = distancia / ConsumoMedio; 
					printf("\n\nCombustível necessário para a viagem: %.1f litros\n", comb1);
				
					media_preco = preco_combus * comb1;
					printf("\nO valor necessario em combustível é de R$%.2f", media_preco);
					
				}
				
			break;
				
				
			case 2:
				printf("\nVocê sabe o consumo médio do seu carro?\n");
				printf("1 - Sim");
				printf("\n2 - Não");
				scanf("%i", &resp_consumo);
				
				
				
				if(resp_consumo == 1){
					printf("Insira o preço do combustível que você usa: ");
					scanf("%f", &preco_combus);
					
					printf("Insira o consumo médio do carro: ");
		        	scanf("%f", &cons_med);
		        
			        printf("Digite a distância que você irá percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = (distancia / cons_med) * 2; 
					printf("\n\nCombustível necessário para a viagem: %.1f litros\n", comb1);
				
					media_preco = (preco_combus * comb1) * 2;
					printf("\nO valor necessario em combustível é de R$%.2f", media_preco);
				} else if (resp_consumo == 2) {
					printf("Insira o preço do combustível que você usa: ");
					scanf("%f", &preco_combus);
					
					printf("Digite quantos KM seu carro percorreu com um 1 tanque de combustível: ");
					scanf("%i", &km_perc);
					
					printf("Digite a quantidade de litros que você gastou: ");
					scanf("%i", &litros);
					
					ConsumoMedio = km_perc / litros; 
					
			        printf("Digite a distância que você irá percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = (distancia / ConsumoMedio) * 2; 
					printf("\n\nCombustível necessário para a viagem: %.1f litros\n", comb1);
				
					media_preco = (preco_combus * comb1) * 2; 
					printf("\nO valor necessario em combustível é de R$%.2f", media_preco);
					
				}
				
			break;
				
				default:
					printf("\n\n-----Opção invalida-----\n");
					goto escolher;
		}
		
		return 0;
		
		
}
