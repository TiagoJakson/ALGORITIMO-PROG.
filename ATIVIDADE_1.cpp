#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ATIVIDADE 1 REFERENTE A 3� VA

//ENTRADA DE DADOS
int i, a;
int mat1[15], mat2[10]; //DEFININDO AS MATRIZES

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //SETANDO A LINGUAGEM PT BR

//ITERA��ES A SEREM REALIZADAS
   
    for(i=0 ; i<14; i++) //INSERINDO  OS VALORES DA 1� MATRIZ
	{
        printf("INSIRA OS N�'S DAS MATR�CULAS DOS ALUNOS DE L�GICA DE PROGRAMA��O: ");
        scanf("%d", &mat1[i]);
    }
   
    printf("\n");
   
    for(i=0; i<9; i++) //INSERINDO OS VALORES DA 2� MATRIZ
	{
        printf("INSITA OS N�'S DAS MATR�CULAS DOS ALUNOS DE L�GICA DE PROGRAMA��O: ");
        scanf("%d", &mat2[i]);
    }
    printf("\n");

//SA�DA DE DADOS
    	for(i=0; i<14; i++)
		{
    	for(a=0; a<14; a++)
		{
        if(mat1[i] == mat2[a]) printf("OS N�'S DAS MATR�CULAS IGUAIS S�O: %d\n", mat1[i]); //VERIFICANDO QUAIS OS VALORES NAS MATRIZES S�O IGUAIS
    }
}
return 0;
}
