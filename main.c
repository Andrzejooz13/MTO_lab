#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, int param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'g')){
			i++;
			printf("%d",param);
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
		scanf("%d", buf2);
		my_printf(buf,buf2);
	}
	return 0;
}
