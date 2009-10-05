#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <iostream>
using namespace std;

/**
	How to use..... Yay!

	Level level;
	level.level[0][0] = 10;
**/

class Level {
public:
	Level(){
		levelSet = false;
		length = 10;
		setLevel();
		

	}
	
	Level(int _length){
		levelSet = false;
		length = _length;
		setLevel();
	}
	
	~Level(){

		// De-Allocate
		for(int i = 0; i < length; ++i)
		  delete[] level[i];
		delete[] level;
	}
	
	void setLevel(){
		// Allocate
		level = new int*[length];
		for(int i=0;i<length;i++)
			level[i] = new int[length];
			
		levelSet = true;
	}
	
	int length;
	int **level;
	bool levelSet;
};
#endif