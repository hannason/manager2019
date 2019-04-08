#include "user.h"
#include "menu.h"

int main(int argc, char* argv[]) {
  LOGIN* userlist[100]; // 사용자목록 포인터 배열 (최대 100)
  int is_login=0; // 로그인 여부 (0 NO, 1 Yes)
  int make;
  int count;
  int menu_id;
  if (argc != 2) {
    printf("Usage : manager <datafile>\n");
    return 0;
  }else if(fopen(argv[1],"r")==NULL){
	printf("%s file not exist! make anyway? (Yes 1, No 2) >>", argv[1]);
	scanf("%d",&make);
	if(make==1){ 
		 FILE *fp =fopen(argv[1],"w");
	}else{
		return 0;
	}
  }
  printf("> Welcome!!\n");
  count = load_file(userlist, argv[1])-1;
  while(1){
    menu_id = ask_menu(is_login); //  로그인여부를 파라미터로 알려야 한다.
    if(menu_id==1)
	count=join(userlist, count);
    else if (menu_id==2)
	is_login = login(userlist, count);
    else if (menu_id==3)
	logout(&is_login);
    else if (menu_id==4)
	list(userlist, count);
    else
	break;
  }
  save_file(userlist, count, argv[1]);
  return 0;
}
