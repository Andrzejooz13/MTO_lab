#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_printf(char *format_string, char *param){
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'k')){
			i++;
			
			for(int j=0; j<strlen(param); j++){
			//printf("%d\n", isalpha(param[j]));
			if(isalpha(param[j])!=0){
				if(param[j] >= 65 && param[j] <= 90){
					putchar(param[j]+32);
				}
				else if(param[j] >= 97 && param[j] <= 122){
					putchar(param[j]-32);
				}
			}
			else{
				printf("Wprowadziles gdzieś nie literę!");
				break;
			}
			}
		}else{
			putchar(format_string[i]);
		}

	}
	puts("");
}

int main(int argc, char *argv[]){
	char buf[1024],buf2[1024];

	while(gets(buf)){
		gets(buf2);
		my_printf(buf,buf2);
	}
	return 0;
}
