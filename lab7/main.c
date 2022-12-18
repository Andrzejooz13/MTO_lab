#include <stdio.h>
#include <string.h>

int my_printf(char *format_string, char param){
	int j=0;
	for(int i=0;i<strlen(format_string);i++){
		if((format_string[i] == '#') && (format_string[i+1] == 'j'){
			i++;
			int temp = 0;
			int result = 0;
			char tab[1000];
			for(j=0;;j++){
				
				char[tab]=param % 10;
				if(temp==0){
					result=9;
				}
				else{
					result = (temp*9+1)%10;
				}
				tab[j]=result;
				
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
		if((scanf("%s", buf2)) == 0); 
		my_printf(buf,buf2);
		getchar();
	}
	return 0;
}
