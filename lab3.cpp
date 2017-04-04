#include"lab3.h"
void sort(int size,vector<int>&cow){
	int i,insert,move;
	for(i=1;i<size;++i){
		insert=cow.at(i);
		move=i;
		while((move>0) && (cow.at(move-1)>insert)){
			cow.at(move)=cow.at(move-1);
			--move;
		}
		cow.at(move)=insert;
	}
}
