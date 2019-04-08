#include <stdlib.h>
#include <string.h>
#include "menu.h"

int ask_menu(int is_login){
// 파라미터 : 로그인여부 (0 No, 1Yes)
// 리턴값 : 선택한 메뉴번호
// 메뉴번호 : 1. Sign up 2. Log in 3. Log out 4. List 0. Exit
  char menu[30];
  while(1){
  	if(is_login==0){
		printf("> ");
		scanf("%s",menu);
		if(strcmp(menu, "join")==0){
			return 1;
		}else if(strcmp(menu, "login")==0){
			return 2;
		}else if(strcmp(menu, "list")==0){
			return 4;
		}else if(strcmp(menu, "exit")==0){
			return 0;
		}else{
			printf("No such command!\n");
		}
  	}
 	 if(is_login==1){
		printf("# ");
  		scanf("%s",menu);
  		if(strcmp(menu, "logout")==0){
			return 3;
  		}else{
			printf("%s\n",menu);
		}
		//printf에서 띄어쓰기 단위로 입력받음...고쳐야함...
	}
  }
}
