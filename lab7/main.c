#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, char *param){
	int j=0;
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'j'){
			i++;
			int temp = 0;
			int result = 0;
			char tab[1000];
			for(j=0;;j++){
				
				if((param[j]<48 || param[j]>57) && (param[j]<65 || param[j]>70))
				{
					printf("Not hexadecimal character");
					return 1;
				}
				
				switch(param[j])
				{
					case 65:
						tab[j] = 71;
						break;
					case 66:
						tab[j] = 72;
						break;
					case 67:
						tab[j] = 73;
						break;
					case 68:
						tab[j] = 74;
						break;
					case 69:
						tab[j] = 75;
						break;
					case 70:
						tab[j] = 76;
						break;
					default:
						printf("Not hexadecimal character");
						return 1;
				}
				
				if((param=param/10) == 0) break;
			}
			for(int k=j;k>=0;k--){
				printf("%d", tab[k]);	
			}
		
		}else{
			putchar(format_string[i]);
	}
	}
	puts("");
	return 0;
//end
}
int main(int argc, char *argv[]){
	char buf[1024];
	char buf2[1024];
	while(gets(buf)){
		(scanf("%[^\n]s", buf2);
		getchar(); 
		my_printf(buf,buf2);
		getchar();
	}
	return 0;
}
