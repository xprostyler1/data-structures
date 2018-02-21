#include <stdio.h>



void main()
{
	int arfit,i,j;
		printf("Dose ton arithmo ton fititon:\n");
		scanf("%d",&arfit);
		for(i=0; i<arfit; i++)
		{
			FILE *fp;
			char mitroo[9],eponimo[20],onoma[20],patronimo[20],mitronimo[20],diefthinsi[40],mathima[50],stathero[10],kinito[10];
			j=i+1;
			printf("\nDose ta stixia tou %dou",j);
			printf("\nMitroo:");
			scanf("%s",mitroo);
			printf("\n Eponimo:");
			scanf("%s",eponimo);
			printf("\n Onoma:");
			scanf("%s",onoma);
			printf("\n patronimo:");
			scanf("%s",patronimo);
			printf("\n mitronimo:");
			scanf("%s",mitronimo);
			printf("\n diefthinsi:");
			scanf("%s",diefthinsi);
			printf("\n mathima:");
			scanf("%s",mathima);
			printf("\n stathero:");
			scanf("%s",stathero);
			printf("\n kinito:");
			scanf("%s",kinito);

		//eggrafi sto arxio
			fp=fopen("eggrafima.csv","a");
			fprintf(fp,"\n%s, %s, %s, %s, %s, %s, %s, %s, %s",mitroo,eponimo,onoma,patronimo,mitronimo,diefthinsi,mathima,stathero,kinito);
			fclose(fp);
			printf("\n\nI eggrafi prostethike sto arxio");

		//diavazma ton eggrafon ap to arxio
			fp=fopen("eggrafima.txt","r");
			fscanf(fp,"%s %s %s %s %s %s %s %s %s",mitroo,eponimo,onoma,patronimo,mitronimo,diefthinsi,mathima,stathero,kinito);
   	 	printf("\n Mitroo: %s \n eponimo: %s \n onoma: %s \n patronimo: %s \n mitronimo: %s \n diefthinsi: %s \n mathima: %s \n stathero: %s \n kinito: %s\n\n",mitroo,eponimo,onoma,patronimo,mitronimo,diefthinsi,mathima,stathero,kinito);
			fclose(fp);	  
		}
}

//	{fp=fopen("eggrafima.csv","r")
	
//	}



