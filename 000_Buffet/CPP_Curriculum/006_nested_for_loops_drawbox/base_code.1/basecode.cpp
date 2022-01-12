// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	for(int y = 1; y < 5; y++){
		for( int x = 1; x < 8; x++){
			gotoxy(x+8,y+5);
			cout << "$";
		}
		cout << endl;
	}

}
