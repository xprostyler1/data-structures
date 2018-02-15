#include <stdio.h>
#include <stdlib.h>

// diloseis

#define N 50      //Megethos pinaka stoivas

typedef int element;         // typos dedomenwn stoivas, sinonimo gia ton akeraio

struct STOIVA{
   element pinakas[N];      // pinakas stoixeiwn
   int top;                 // koryfi tis stoivas
};

typedef struct STOIVA STOIVA;  // Sinwnimo tis stoivas 


// prototypa synartisewn
void stoiva_init(STOIVA *s);
int stoiva_empty(STOIVA s);
int stoiva_full(STOIVA s);
int stoiva_push(STOIVA *s, element x);
int stoiva_pop(STOIVA *s, element *x);

main()
{
	int choice,element,i; // dilosi metavlitwn
	STOIVA st; //metavliti tou struct STOIVA
	
	stoiva_init(&st); // arxikopoihsh ths stoivas gia na parei to top tin katallili timi 

	while(1)
	{
		system("cls");
		printf("\n---------------------------------\n");
		printf("\tSTACK MEMORY APP: ");
		printf("\n---------------------------------\n");
			
		printf("  [1] Push an Element\n");
		printf("  [2] Pop an Element\n");
		printf("  [3] Print The Stack\n");
		printf("  [4] Exit\n\n");
		
		
		do{
			printf("  Stack :Hey user! please choose a number: ");
		scanf("%d",&choice);
		} while (choice<1 || choice>4);
		
		switch(choice) // switch gia tis epiloges toy xristi
		{
			case 1:
				printf("  Stack: Push an element: ");
				scanf("%d", &element); // diavazei to stoixeio toy xristi kai to apothikeyei se metavliti element
				if(stoiva_push(&st,element))// trexei to if, an einai ena push done an einai miden paei sto else
					printf("  Stack: Push Done :D!");
				else
					printf("  Stack: Push not completed the stack is Full :(");
				break;
			case 2:
				if (stoiva_pop(&st, &element)) // to stixio p aferw thelw na to kratisw sto element(h synartisi exei ginei by reference kai giayto &
					printf("  Stack: Pop %d done!!",element);
				else
					printf("  Stack: Pop did not happen, Stack is empty :(");
				break;
			case 3:
				//MONO GIA EKPAIDEYTIKOUS LOGOUS!!!
				//Apagorevetai na akoumpame ti domi!!
				printf("  Stack: I have  %d elements: \n", st.top+1);
				for (i=0; i<=st.top; i++)
				{
					printf("  [%3d ]",st.pinakas[i]);
				}
				break;
			case 4:
				printf("  thank you, see you later!");
				exit(0);
			default:
				printf("  pls try again and choose 1-4!!");
		}
		printf("\n\n");
		system("pause");
	}
}

// arxikopoihsh tis listas, thetoyme -1 thn korifi ths listas
void stoiva_init(STOIVA *s) // h synartisi epireazei ta dedomena giayto pername by reference
{
	s->top=-1; // exw prosbasi sth top me to -> / ara -1 deixnei oti h stoiva einai adeia 
}

// epistrefei 1/0 (TRUE/FALSE), analoga me to an h stoiva einai adeia
int stoiva_empty(STOIVA s) // pairnei san orisma by value giati den ephreazei ta dedomena 
{
	if (s.top==-1)
			return 1;
		else if(s.top!=-1)
			return 0;
}

// epistrefei 1/0 analoga me to an h stoiva einai gemati */
int stoiva_full(STOIVA s) 
{
	if (s.top==N-1)
			return 1;
		else if(s.top!=N-1)
			return 0;
}

// πηση to x sti stoiva s
// epistrefei TRUE: se periptwsi epitixias
// FALSE: se periptwsi apotixias
int stoiva_push(STOIVA *s, element x) // orisma by reference gia to top epireazei ta dedomena kai element x to deytero stoixeio pou tha eisagw
{
	// kanw elegxo an h stoiva einai gemati, olh h stoiva einai to *s
	// pernaw san orisisma sth stoiva_full to *s (eperne by value thn timi)
	// epeidi perasasme dikti sti synarti stoiva_push opote gia na perasw by value tin timi sto stoiva_full  tha valw *s
	if (stoiva_full(*s)) 
		return 0;
	else
	{
		s->top++; // ayksisi tis top kata 1
		s->pinakas[s->top]=x; // [igene sti thesi toy pinaka top kai apothikeyse to stoixeio  x.
		return 1;
	}
}

// Kanei pop to stoixeio pou einai stin korifi tis stoivas
// retern 1 : se periptwsi epitixias
// return 0 : se periptwsi apotixias
int stoiva_pop(STOIVA *s, element *x) // to deytero orisma by reference prokeimeniy na epistrafei to stoixeio p egine pop
{
	if (stoiva_empty(*s))
		return 0;
	else
	{
		*x=s->pinakas[s->top];  // apothikesys toy stoixeiou einai sto top ths stoivas 
		s->top--;
		return 1;
	}
}

