#include<iostream>
#include<fstream>
#include<iomanip>
#include"lab3.h"
int main(){
	int i,size,insert,move,win=0;
	cin>>size;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Wrong."<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Wrong."<<endl;
		exit(1);
	}
	inFile>>size;
	vector<int> cow(size);
	for(i=0;i<size;++i){
		inFile>>cow.at(i);
	}
	sort(size,cow);
	for(i=size-1;i>size-6;--i){
		win=win+cow.at(i);
	}
	outFile<<win<<endl;
return 0;
}
