#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Character{
	
	int Stats[34];
	const static int numStats = 34;
	char Notes[1000];
	char Name[50];
	Character();
	void Display();
	void Write();//
	void Set(int Stat);//for load from file
	void Set();
};

