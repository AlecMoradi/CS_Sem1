// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 5;
	while(true){
		cout << x << endl;
		if(x == 25){
			break;

		}
		x = x + 1;
		
	}

	
	srand(time(NULL));
	// write code here
	int b = 15;
	while(true){
		cout << b << endl;
		if(b == 5){
			break;

		}
		b = b - 1;
		
	}
	
	for(int c = 15 <= 5; c = c - 1){
		cout << c << endl; 
	}
}