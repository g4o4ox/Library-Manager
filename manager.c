#include <stdio.h>

#define MAXVALUE 100


struct Book {
	char name[75];
	char type[30];
	int     bookcode;	
};
struct Operator{
	char name[80];
	char cargo[50];
	char password[9];
	int code;

};
struct Client{
	char name[80];
	char cpf[20];
};

int main(){
	int limitRange = MAX;	
	int a = 0;
	while( a < 1){
		printf("---------------------------------------------");
		printf("\n---------- LIBRARY MANAGER ------------------");
		for(int b = 0; a < limitRange; a++){
			print("\n%s %d   ",Book.name[a],Book.type[a] );
		} 
		scanf("%d", a );
		int exit;
		if(exit == 4){
			a++;
		}
    }
}
