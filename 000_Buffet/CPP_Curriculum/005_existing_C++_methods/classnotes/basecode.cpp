// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
gotoxy(3,5+1);
	cout<< '@';
	gotoxy(3,5+2);
	cout << '&';
	gotoxy(3,5+3);
	cout<< '$';
	
	for(int i=0;i<5;i++){
	gotoxy(3,5);
	cout<< '&';
	
}
for(int i=0;i<5;i++){
	gotoxy(3+i,5+i);
	cout<< '&';
	
}
}