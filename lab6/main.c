#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, int param){
	int j=0;
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == '.') && ((format_string[i+2] >= 48) && (format_string[i+2] <= 57)) && (format_string[i+3] == 'g')){
			i++;
			int temp;
			int tab[1000];
			for(j=0;;j++){
				
				temp=param % 10;
				if(temp==0){
					temp=9;
				}
				else{
					temp-=1;
				}
				tab[j]=temp;
				
				if((param=param/10) == 0) break;
			}
			for(int k=j;k>=0;k--){
				printf("%d", tab[k]);	
			}
		
		}else
			putchar(format_string[i]);
	}
	puts("");
	return 0;
}

int main(int argc, char *argv[]){
	char buf[1024];
	int buf2=0;
	while(gets(buf)){
		if((scanf("%d", &buf2)) == 0) {printf("Podales nie liczbe\n");return 1;}
		my_printf(buf,buf2);
		getchar();
	}
	return 0;
}
