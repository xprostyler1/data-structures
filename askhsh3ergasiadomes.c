#include <stdio.h> AGURIA
#include <stdlib.h>

#define SIZE 80

struct student{													//kataskevi tou struct me ta stixia
	char am[SIZE];
	char name[SIZE];
	char last_name[SIZE];
	char fathers_name[SIZE];
	char mothers_name[SIZE];
	char adress[SIZE];
	char phone_number[SIZE];
	char mobile_number[SIZE];
	char lesson[SIZE]; 
};

typedef struct student RECORD;									//Orismos sinonimou sto struct, me onoma RECORD

void read_record(RECORD *p);									//Sinartiri pou diavazi apo to xristi ta stixia
void print_record(RECORD x);									//Sinartiri pou ektiponi ston xristi ta stixia

void main()
{
	RECORD *pinakas;
	int i,N;
	
	//O xristis bori na epileksi mono times anamesa sto 1 ke sto 50
	
	do
	{
	printf("Dose to plithos ton fititon: \n");
	scanf("%d", &N);
	}
	while(N<=0 || N>50);
	
	
	
	//Dinamiki desmefsi mnimis gia ton pinaka simfona me ton arithmo ton fititon pou edose o xristis
	
	pinakas=malloc(sizeof(RECORD)*N);
	if(!pinakas)													//An den bori na desmefsi mnimi tote bgazi to akoloutho minima ke to programma termatizi
	{
		printf("adinamia desmefsis mnimis");
		exit(0);
	}
	

	for (i=0; i<N; i++)												//Diavazma ton dedomenon ton stiymiotipon
	{
		printf("\n%do atomo:\n",i+1);
		read_record(&pinakas[i]);
	}
	
	for (i=0; i<N; i++)												//EKtiposi ton stiymiotipon
		print_record(pinakas[i]);
	
	free(pinakas);													//Apeleftherosi tis mnimis tou pinaka
}




//Sinartiri pou diavazi apo to xristi ta stixia


void read_record(RECORD *p)											
{
	printf("\nPress the AM: ");
	scanf("%s",p->am);
	
	printf("Press the Name: ");
	scanf("%s",p->name);
	
	printf("Press the Last Name: ");
	scanf("%s",p->last_name);
	
	printf("Press the Fathers Name: ");
	scanf("%s",p->fathers_name);
	
	printf("Press the Mothers Name: ");
	scanf("%s",p->mothers_name);
	
	printf("Press the Adress: ");
	scanf("%s",p->adress);
	
	printf("Press the Phone Number: ");
	scanf("%s",p->phone_number);
	
	printf("Press the Mobile Number: ");
	scanf("%s",p->mobile_number);
	
	printf("Press the Lesson: ");
	scanf("%s",p->lesson);
	
	printf("\n============================= \n");
}


//Sinartisi pou ektiponi ta stixia ston xristi


void print_record(RECORD x)
{
	
	printf("%s %s %s %s %s %s %s %s %s\n\n",x.am, x.name, x.last_name, x.fathers_name,x.mothers_name, x.adress, x.phone_number, x.mobile_number, x.lesson);
}
