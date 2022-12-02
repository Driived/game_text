#include "header.h"


Class pyt1_les(Class personage, Agr mob) {
	int val;
	cout << "1-идти прямо по тропе" << endl;
	cin >> val;
	if (val == 1) {
		
		mob = {"гоблин", 25, 5, 1, 100};//гоблин
		personage = battle(personage, mob);
	}
	cout << "поздравляем с вашим первым монстром" << endl;
	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "гоблин",25, 5, 1, 100 }; //гоблин
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		cout << "вы никого не встретили" << endl;
	}
	else if (val == 3) {
		cout << "вы встретили путника" << endl;
		cout << "путник:Приветствую, осторожнее если пойдешь прямо то встретишь сильного орка ,я сам еле от туда ноги унес, так что не стоит идти по ней" << endl;
	}
	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк",60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "гоблин", 25, 5, 1, 100 };//гоблин
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL)); // сундук
		int sunduk = rand() % 3;
		switch (sunduk)
		{
		case 1:
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			break;
		case 2:
			personage.zelyeDamege ++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;

			break;
		case 3:
			personage.zelyeDexterity ++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;

			break;
		case 4:
			personage.zelyeIntelekt ++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
		default:
			break;
		}
		cout << "после обыска сундука через некоторе время мы вернулись на дорогу" << endl;
	}
	cout << "1-идти прямо по тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк", 60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	cout << "2-идти по левой тропе" << endl;
	cin >> val;
	if (val == 2) {
		mob = { "орк", 60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк", 600, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "гоблин", 25, 5, 1, 100 }; // гоблин
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "орк",60, 15, 0, 200 }; // орк
		personage = battle(personage, mob); // будет просто орк
	}
	cout << "1-отдохнуть у дерева" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "волк", 35, 7, 3, 120 }; // волк
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "волк", 35, 7, 3, 120 }; // волк
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "орк",60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL)); // сундук
		int sunduk = rand() % 3;
		switch (sunduk)
		{
		case 1:
			personage.zelyeHP++;
			break;
		case 2:
			personage.zelyeDamege++;
			break;
		case 3:
			personage.zelyeDexterity++;

			break;
		case 4:
			personage.zelyeIntelekt++;
		default:
			break;
		}
	}
	cout << "1-идти прямо по тропе" << endl;
	cin >> val;
	if (val == 1) {
		cout << "вы встретили торговца" << endl;
		cout << "торговец: Приветствую путник, я бродячий торговец покупай мои товары" << endl;
		//тут функция торговца
		cout << "спасибо за покупку и удачи" << endl;
	}

	cout << "вы увидели медведя" << "1-напасть на него" << endl << "2-обойти его" << endl;
	cin >> val;
	if (val == 1) {
		cout << "Вы избежали боя" << endl;
	}
	else if (val == 2) {
		mob = { "медведь", 100, 15, 3, 350 }; // медведь
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "медведь", 100, 20, 3, 350 }; // медведь
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "орк",600, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "волк", 35, 7, 3, 120 }; // волк
		personage = battle(personage, mob);
	}
	cout << "1-идти прямо по тропе" << endl << "2-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "медведь",200, 20, 3, 350 }; // медведь
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "орк", 60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "гоблин", 35, 10, 1, 100 };
		personage = battle(personage, mob);
	}

	else if (val == 2) {
		mob = { "волк", 35, 7, 3, 120 }; // волк
		personage = battle(personage, mob);
	}
	cout << "на нас на дороге напал разбойник 1-начать бой" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "разбойник",50, 10, 6, 200 }; // разбойник
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "разбойник", 50, 10, 6, 200 }; // разбойник
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "волк",35, 7, 3, 120 }; // волк
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL)); // сундук
		int sunduk = rand() % 3;
		switch (sunduk)
		{
		case 1:
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			break;
		case 2:
			personage.zelyeDamege++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			break;
		case 3:
			personage.zelyeDexterity++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;

			break;
		case 4:
			personage.zelyeIntelekt++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
		default:
			break;
		}
		cout << "после обыска сундука через некоторе время мы вернулись на дорогу" << endl;
	}
	cout << "1-идти прямо по тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "гоблин", 25, 5, 1, 100 };//гоблин
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "ведьма", 70, 25, 5, 250 }; // ведьма
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "ведьма", 700, 25, 5, 250 }; // ведьма
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		personage.currentHP = personage.maxHP;
		cout << "вы никого не встретили и смогли немного передохнуть" << endl;
	}
	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк",60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "ведьма", 70, 25, 5, 250 }; // ведьма
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "волк", 35, 7, 3, 120 }; // волк
		personage = battle(personage, mob);
	}
	cout << "1-идти прямо по тропе" << endl << "2-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "разбойник", 75, 10, 6, 200 }; // разбойник
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "орк", 60, 15, 0, 200 }; // орк
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl;
	cin >> val;
	if (val == 1) {
		srand(time(NULL)); // сундук
		int sunduk = rand() % 3;
		switch (sunduk)
		{
		case 1:
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;

			break;
		case 2:
			personage.zelyeDamege++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;

			break;
		case 3:
			personage.zelyeDexterity++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;

			break;
		case 4:
			personage.zelyeIntelekt++;
			personage.zelyeHP++;
			personage.zelyeHP++;
			personage.zelyeHP++;
		default:
			break;
		}
		cout << "после обыска сундука через некоторе время мы вернулись на дорогу" << endl;
	}
	return personage;

}
Class locka(Class personag, Agr mob, Boss1 BOSS) {
	pyt1_les(personag, mob);
	cout << "БОСС" << endl;
	BOSS.Boss_battle(personag);
	return personag;
}
