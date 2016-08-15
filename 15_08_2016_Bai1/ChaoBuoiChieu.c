#include <stdio.h>
    	
void main(){
	printf("hom nay co phai la buoi chieu hay khong? y/n\n");
	char chonlua;
	scanf("%c",&chonlua);
	if(chonlua == 'y'){
		printf("chao buoi chieu\n");
	}else if(chonlua == 'n'){
		printf("bay gio khong phai la buoi chieu\n");
	}else{
		printf("nhap sai\n");
	}
    for(int i = 1;i<0;i++){
        printf ("hello");
    }
}
