#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, int param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'g')){
			i++;
			int temp;
			for(;;){
				temp=param % 10;
				if(temp==0){
					temp=9;
				}
				else{
					temp-=1;
				}
				printf("%d",temp);
				
				if((param=param/10) == 0) break;
			}
		}else
			putchar(format_string[i]);
	}
	puts("");
	return 0;
}

int main(int argc, char *argv[]){
	char buf[1024];
	int buf2;
	while(gets(buf)){
		if((scanf("%d", &buf2)) == 0) {printf("Podales nie liczbe\n");return 1;}
		my_printf(buf,buf2);
	}
	return 0;
}
