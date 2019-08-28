#include <stdio.h>

int main(int argc, char **argv) {
	
	//Actividad 1
 	int i=0;
	for(i=0;i<15;i++){
		printf("#%i: FSE2020-1 Arenas Olguin Jose Gerardo Cortes Reyes Tanya Cecilia\n",i+1);	
	}

	//ACTIVIDAD 2

/*	
	int i=0,j=0;
	j=atoi(argv[1]);
	for(i=0;i<j;i++){
		printf("#%i: FSE2020-1 Arenas Olguin Jose Gerardo Cortes Reyes Tanya Cecilia\n", i+1);
}
*/
 
  //ACTIVIDAD 3

/*int i=0;
//int j=atoi(argv[1]);
int aux= 0;
for(i=0;i<=j;i++){
	printf("#%i: FSE2020-1 Arenas Olguin Jose Gerardo Cortes Reyes Tanya Cecilia\n",i+1);
	if (aux==0){
		printf("\033[0;36m;");
		aux+=1;
	}else if(aux==1){
		printf("\033[1;31m");
		aux+=1;
	}else if(aux==2){
		printf("\033[0;32m");
		aux+=1;
	}else if(aux==3){
		printf("\033[1;32m");
		aux+=1;
	}else if(aux==4){
		aux+=1;
		printf("\033[0;33m");
	}else if(aux==5){
		aux+=1;
		printf("\033[01;33m");
	}else if(aux==6){
		aux+=1;
		printf("\033[0;34m");
	}else if (aux==7){
		aux+=1;
		printf("\033[1;34m");
	}else{
		aux=0;
		printf("\033[0m");
	};


}
*/
	return 0;
}
