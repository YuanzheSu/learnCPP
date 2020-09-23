// monsterGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime
};

struct Monster
{
    MonsterType type{ MonsterType::ogre };  
    std::string name{ "John Doe" };
    int hp{ 100 };
};

std::string castMonsterTypetoString(MonsterType type)
{
	if (type == MonsterType::ogre)
		return "Ogre";
	else if (type == MonsterType::dragon)
		return "Dragon";
	else if (type == MonsterType::orc)
		return "Orc";
	else if (type == MonsterType::giant_spider)
		return "Giant Spyder";
	else if (type == MonsterType::slime)
		return "Slime";

	return "UNKNOWN";
}

void printMonster(Monster monster)
{
    std::cout << "This " << castMonsterTypetoString(monster.type) << " is named " << monster.name << " and has " << monster.hp << " health.\n";
}

int main()
{
	Monster m1{ MonsterType::ogre, "Torg", 145 };
	Monster m2{ MonsterType::slime, "Blurp", 23 };
	
	printMonster(m1);
	printMonster(m2);
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
