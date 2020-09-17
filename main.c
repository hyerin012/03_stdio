#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char c;
    int i;
    
    printf("input a numer :");
    scanf("%c",&c);
    
    i=c-'0';//conversion using '0'constant
    printf("The input numer is %i\n",i);
	
	return 0;
}
