#include "Character.h"
enum{
	HPTotal, Strength,	Dexterity,	Constitution,	Intelligence,	Wisdom,	Charisma,	AC,	Touch,	Flatfoot,	CMB,	CMD,	
	Initiative,	Ref,	Will,	Fort,	Appraise,	Bluff,	Disguise,	Arcana,	Dungeon,	Engineering,	Geography,
	History,	Local,	Nature,	Nobility,	Planes,	Religion,	Linguistics,	Perception,	SenseMotive,	SleightOfHand,
	Stealth 
	};


void Character::Write(){
	cout << endl << "Name is ";
	std::cin.getline(Name,49);
			
	 

	for(int i = 0; i < numStats; i++){
		switch(i){
		case HPTotal:
			cout << "Health Points: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Strength:
			cout << "Ability Score (Str): ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Dexterity:
			cout << "Ability Score (Dex): ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Constitution:
			cout << "Ability Score (Con): ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Intelligence:
			cout << "Ability Score (Int): ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Wisdom:
			cout << "Ability Score (Wis): ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Charisma:
			cout << "Ability Score (Chr): ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case AC:
			cout << "Armor Class: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Touch:
			cout << "Touch AC: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Flatfoot:
			cout << "FlatFooted AC: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case CMB:
			cout << "CMB: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case CMD:
			cout << "CMD: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Initiative:
			cout << "Init Bonus: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Ref:
			cout << "Reflex Save Bonus: ";
			std::cin >> Stats[i]; std::cin.ignore();
			
			 
			break;
		case Will:
			cout << "Will Save Bonus: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Fort:
			cout << "Fortitude Save Bonus: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Appraise:
			cout << "Appraise: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Bluff:
			cout << "Bluff: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Disguise:
			cout << "Disguise: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Arcana:
			cout << "knw Arcana: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Dungeon:
			cout << "knw Dungeon: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Engineering:
			cout << "knw Engineering: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Geography:
			cout << "knw Geography: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case History:
			cout << "knw History: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Local:
			cout << "knw Local: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Nature:
			cout << "knw Nature: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Nobility:
			cout << "knw Nobility: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Planes:
			cout << "knw Planes: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Religion:
			cout << "knw Religion: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Linguistics:
			cout << "Linguistics: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Perception:
			cout << "Perception: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case SenseMotive:
			cout << "Sense Motive: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case SleightOfHand:
			cout << "Sleight of Hand: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		case Stealth:
			cout << "Stealth: ";
			
			std::cin >> Stats[i]; std::cin.ignore();
			 
			break;
		default:
			cout << "wut? error in the write character::write func?";

		}
	}
	
	cout << "Notes/other: ";
	
	std::cin.getline(Notes,1000); 
	 

};

void Character::Display(){
	cout << "Name is ";
	cout << Name;
	cout << endl;

	for(int i = 0; i < numStats; i++){
		switch(i){
		case HPTotal:
			cout << "Health Points: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Strength:
			cout << "Ability Score (Str)/Mod: ";
			if(Stats[i]-10 > 9 || Stats[i]%2 == 0)	cout << Stats[i] << '/'  << ((Stats[i]-10)/2) << endl;
			else	cout << Stats[i] << '/'  << ((Stats[i]-11)/2) << endl;
			break;
		case Dexterity:
			cout << "Ability Score (Dex)/Mod: ";
			if(Stats[i]-10 > 9 || Stats[i]%2 == 0)	cout << Stats[i] << '/'  << ((Stats[i]-10)/2) << endl;
			else	cout << Stats[i] << '/'  << ((Stats[i]-11)/2) << endl;
			break;
		case Constitution:
			cout << "Ability Score (Con)/Mod: ";
			if(Stats[i]-10 > 9 || Stats[i]%2 == 0)	cout << Stats[i] << '/'  << ((Stats[i]-10)/2) << endl;
			else	cout << Stats[i] << '/'  << ((Stats[i]-11)/2) << endl;
			break;
		case Intelligence:
			cout << "Ability Score (Int)/Mod: ";
			if(Stats[i]-10 > 9 || Stats[i]%2 == 0)	cout << Stats[i] << '/'  << ((Stats[i]-10)/2) << endl;
			else	cout << Stats[i] << '/'  << ((Stats[i]-11)/2) << endl;
			break;
		case Wisdom:
			cout << "Ability Score (Wis)/Mod: ";
			if(Stats[i]-10 > 9 || Stats[i]%2 == 0)	cout << Stats[i] << '/'  << ((Stats[i]-10)/2) << endl;
			else	cout << Stats[i] << '/'  << ((Stats[i]-11)/2) << endl;
			break;
		case Charisma:
			cout << "Ability Score (Chr)/Mod: ";
			if(Stats[i]-10 > 9 || Stats[i]%2 == 0)	cout << Stats[i] << '/'  << ((Stats[i]-10)/2) << endl;
			else	cout << Stats[i] << '/'  << ((Stats[i]-11)/2) << endl;
			break;
		case AC:
			cout << "Armor Class: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Touch:
			cout << "Touch AC: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Flatfoot:
			cout << "FlatFooted AC: ";
			cout << Stats[i];
			cout << endl;
			break;
		case CMB:
			cout << "CMB: ";
			cout << Stats[i];
			cout << endl;
			break;
		case CMD:
			cout << "CMD: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Initiative:
			cout << "Init Bonus: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Ref:
			cout << "Reflex Save Bonus: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Will:
			cout << "Will Save Bonus: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Fort:
			cout << "Fortitude Save Bonus: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Appraise:
			cout << "Appraise: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Bluff:
			cout << "Bluff: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Disguise:
			cout << "Disguise: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Arcana:
			cout << "knw Arcana: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Dungeon:
			cout << "knw Dungeon: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Engineering:
			cout << "knw Engineering: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Geography:
			cout << "knw Geography: ";
			cout << Stats[i];
			cout << endl;
			break;
		case History:
			cout << "knw History: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Local:
			cout << "knw Local: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Nature:
			cout << "knw Nature: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Nobility:
			cout << "knw Nobility: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Planes:
			cout << "knw Planes: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Religion:
			cout << "knw Religion: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Linguistics:
			cout << "Linguistics: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Perception:
			cout << "Perception: ";
			cout << Stats[i];
			cout << endl;
			break;
		case SenseMotive:
			cout << "Sense Motive: ";
			cout << Stats[i];
			cout << endl;
			break;
		case SleightOfHand:
			cout << "Sleight of Hand: ";
			cout << Stats[i];
			cout << endl;
			break;
		case Stealth:
			cout << "Stealth: ";
			cout << Stats[i];
			cout << endl;
			break;
		default:
			cout << "wut? error in the write character::write func?";

		}
	}
	
	cout << "Notes/other: ";
	cout << Notes;
	cout << endl;
};

void Character::Set(int stat){
	switch(stat){
		case HPTotal:
			cout << "Health Points: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Strength:
			cout << "Ability Score (Str): ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Dexterity:
			cout << "Ability Score (Dex): ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Constitution:
			cout << "Ability Score (Con): ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Intelligence:
			cout << "Ability Score (Int): ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Wisdom:
			cout << "Ability Score (Wis): ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Charisma:
			cout << "Ability Score (Chr): ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case AC:
			cout << "Armor Class: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Touch:
			cout << "Touch AC: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Flatfoot:
			cout << "FlatFooted AC: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case CMB:
			cout << "CMB: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case CMD:
			cout << "CMD: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Initiative:
			cout << "Init Bonus: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Ref:
			cout << "Reflex Save Bonus: ";
			std::cin >> Stats[stat]; std::cin.ignore();
			
			 
			break;
		case Will:
			cout << "Will Save Bonus: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Fort:
			cout << "Fortitude Save Bonus: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Appraise:
			cout << "Appraise: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Bluff:
			cout << "Bluff: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Disguise:
			cout << "Disguise: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Arcana:
			cout << "knw Arcana: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Dungeon:
			cout << "knw Dungeon: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Engineering:
			cout << "knw Engineering: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Geography:
			cout << "knw Geography: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case History:
			cout << "knw History: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Local:
			cout << "knw Local: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Nature:
			cout << "knw Nature: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Nobility:
			cout << "knw Nobility: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Planes:
			cout << "knw Planes: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Religion:
			cout << "knw Religion: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Linguistics:
			cout << "Linguistics: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Perception:
			cout << "Perception: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case SenseMotive:
			cout << "Sense Motive: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case SleightOfHand:
			cout << "Sleight of Hand: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		case Stealth:
			cout << "Stealth: ";
			
			std::cin >> Stats[stat]; std::cin.ignore();
			 
			break;
		default:
			cout << "wut? error in the write character::write func?";

		}
};

void Character::Set(){
	cout << "Notes: ";
	std::cin.getline(Notes,1000); 
};

Character::Character(){
	for(int i = 0; i < numStats; i++){
		Stats[i] = 0;
	}
	for(int i = 0; i < 1000; i++)
		Notes[i] = '\0';
	for(int i = 0; i < 50; i++)
		Name[i] = '\0';
}