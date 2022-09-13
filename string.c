#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Personne{
	char nom[100];
	char prenom[100];
	int age;
};
typedef struct Personne p;



int main()
{
	char line[100],check[100];
	p p1;
	p *pp1=&p1;
	 //Personne p1;
	printf("entrer votre prenom");
	fgets(line,100,stdin);
	sscanf(line,"%s",p1.prenom);
	printf("entrer votre nom");
	fgets(line,100,stdin);
	line[strlen(line)-1]=0;
	strcpy(p1.nom,line);
	rentrer:
	printf("entrer votre age");
	fgets(line,100,stdin);
	if(sscanf(line,"%d %s",&p1.age,check)!=1){
		goto rentrer;
	}
	printf("%s %s %d",p1.prenom,pp1->nom,p1.age);
	
    return 0;
}
