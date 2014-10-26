#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include <fstream>
#include <queue>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#include "Character.h"

void DislayCommands(){
	cout << endl << "Space = forward one character, Q = quit, C = new character, E = edit stat,\n N = edit Notes, < = up one stat, > = down one stat, S = Save" << endl;
}




void main(){
	FILE* Strings;
	FILE* Stats;
	int CampaignNum=0;
	int CharacterNum=0;
	queue<Character*,deque<Character*>> Characters;
	char command = 0;
	int Select = 0;
	int tempNumChar =0;
	int NumStats = 33;
	Character* Char;
	char buffer[1000];
	int tempHld = 0;


	Strings = fopen("Strings", "r");
	Stats = fopen("Stats", "r");
	tempHld = fgetc(Stats);
	for(int i = 0; i < tempHld;i++){
		Char = new Character;
		fgets(Char->Name,50,Strings);
		for(int j = 0; j < 50;j++){
			if(Char->Name[j] == '\n')
				Char->Name[j] = '\0';
		}
		for(int j = 0; j < Char->numStats;j++){
			Char->Stats[j] = fgetc(Stats);
		}
		fgets(Char->Notes,1000,Strings);
		for(int j = 0; j < 1000;j++){
			if(Char->Notes[j] == '\n')
				Char->Notes[j] = '\0';
		}
		Characters.push(Char);

	}




	while(command != 'q'){
		DislayCommands();
		cout << "Current Selection: " << Select << endl;
		if(!Characters.empty())
			Characters.front()->Display();
		command = _getch();
		system("cls");
		switch(command){
		case 'c':
			Char = new Character();
			Char->Write();
			Characters.push(Char);
			break;
		case ' ':
			Characters.push(Characters.front());
			Characters.pop();
			break;
		case ',':
			Select --;
			if(Select < 0)
				Select = NumStats;
			break;
		case '.':
			Select ++;
			if((Select) > NumStats)
				Select = 0;
			break;
		case 'e':
			if(Characters.size() != 0)
				Characters.front()->Set(Select);
			break;
		case 'n':
			if(Characters.size() != 0)
				Characters.front()->Set();
			break;
		case 's':	
			freopen("Strings", "w",Strings);
			freopen("Stats", "w",Stats);

			fputc(Characters.size(),Stats);
			for(int i = 0; i < Characters.size();i++){
				fputs(Characters.front()->Name,Strings);
				fputs("\n",Strings);
				for(int j = 0; j < Characters.front()->numStats;j++){
					fputc(Characters.front()->Stats[j],Stats);
				}
				fputs(Characters.front()->Notes,Strings);
				fputs("\n",Strings);
				Characters.push(Characters.front());
				Characters.pop();
			}
			
			break;
		}
		system("cls");
	}

	
	freopen("Strings", "w",Strings);
	freopen("Stats", "w",Stats);

	fputc(Characters.size(),Stats);
	for(int i = 0; i < Characters.size();i++){
		fputs(Characters.front()->Name,Strings);
		fputs("\n",Strings);
		for(int j = 0; j < Characters.front()->numStats;j++){
			fputc(Characters.front()->Stats[j],Stats);
		}
		fputs(Characters.front()->Notes,Strings);
		fputs("\n",Strings);
		Characters.push(Characters.front());
		Characters.pop();
	}
	fclose(Stats);
	fclose(Strings);
}

