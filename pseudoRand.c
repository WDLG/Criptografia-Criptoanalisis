#include<stdio.h>
#include<math.h>
/*
  Autor: Andres Velasco
	
*/
long int mod(long int a,long int b){
	return a%b;
}

int main(int argc, char *argv[]){
 	  long int n = atoi (argv[1]);
    long int s = atoi (argv[2]);
    long int x = mod(pow(s,2),n);
		int i=0;
		int b;
		printf("%i          %i          %i\n",i,x,b);
		
 		for (i=1;i<21;i++){
				x=mod(pow(x,2),n);
				b=mod(x,2);
				printf("%i          %i          %i\n",i,x,b);
		}
}
