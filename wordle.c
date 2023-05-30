#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
int main(int argc, char *argv[]) {
	char word[30], r;
	int n, g, i, j, f, l, w, m, ni;
	printf("%d\n", w);
	printf("Unesite rec.\n");
	scanf("%s", word);
	system("cls");
	n=strlen(word);
	char guess[n];
	for(f=0;f<n+2;f++){
		g:
		printf("Unesite rec od %d slova.\n",n);
		for(ni=0;ni<n;ni++){
			printf("_ ");
		}
		printf("\n");

		scanf("%s", guess);
		if(strlen(guess)!=n){
			printf("Pogresan broj slova majumne glupi.");
			goto g;
		}	
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(toupper(word[j])==toupper(guess[i])){
					if(toupper(word[i])==toupper(guess[i])){
						r=219;
						printf("\033[1;32m%c\033[0m ", r);
						l++;
						goto w;
					} else {
						r=219;
						printf("\033[1;33m%c\033[0m ", r);
						goto w;
					}
				} else {
					r=0;
				}
			}
			if(r==0){
				printf("_ ");
			}
			w:
			printf("");
		}
		printf("\n");
		if(l==n){
			printf("Pogodili ste!");
			return 0;
		}
		l=0;
	}
	printf("Izgubili ste! Rec je bila: %s", word);
	return 0;
}
