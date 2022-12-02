
#include "header.h"
Class pyt2_mount(Class personage, Agr mob) {
	//я уже заебался теперь горы
	setlocale(LC_ALL, "Russian");
	int val;
	cout << "1-идти по долине" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "гарпия", 50, 10, 1, 150 };
		personage = battle(personage, mob);
	}
	cin >> val;
	cout << "1-идти к подножию горы" << endl;
	if (val == 1) {
		mob = { "гарпия", 50, 10, 1, 150 };
		personage = battle(personage, mob);
	}
	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "гарпия", 50, 10, 1, 150 };
		personage = battle(personage, mob);
		cout << "вы подошли к пещере " << endl;
	}
	else if (val == 2) {
		cout << "вы подошли к пещере " << endl;
	}
	
	cout << "1- не входить в пещеру " << endl << "2-войти в пещеру" << endl;
	cin >> val;
	if (val == 1) {
		cout << "проход был завален вы пошли через пещеру " << endl;
	}
	else if (val == 2) {
		cout << "вы вошли в  пещеру " << endl;
		cin >> val;
		if (val == 1) {
			cout << "1-продолжить путь " << endl;
		}
		cout << "вы встретили орка " << endl << "1- атаковать";
		cin >> val;
		if (val == 1) {
			mob = { "орк", 150, 25, 1, 200 };
			personage = battle(personage, mob);
			cout << "после победы над орком вы нашли сундук и открыли его вам попалось в нем 100 голды и 3 зелья здоровья " << endl;
			srand(time(NULL)); 
			int sunduk = rand() % 3;
			switch (sunduk)
			{
			case 1:
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
			cout << "вы вышли с пещеры тем же путем как в нее вошли" << endl;
		}
	}
	cout << "1- отдохнуть в пустой пещере" << endl << "2 продолжить путь";
	cin >> val;
	if (val == 1) {
		
		cout << "в пустую пещеру неожиданно зашел троль " << endl << "1- атаковать";
		cin >> val;
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	cout << "1-идти прямо по тропе" << endl  << "2-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "гарпия", 50, 10, 1, 150 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "орк", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}
	
	cout << "1-зайти в пещеру" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по проходу" << endl << "2-идти по левому проходу" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
		cout << "тут оказался тупик, вы вернулись и прошли по другому проходу " << endl;
	}
	
	cout << "1-идти на выход из пещеры" << endl;
	cin >> val;
	if (val == 1) {
		srand(time(NULL)); 
		int sunduk = rand() % 3;
		switch (sunduk)
		{
		case 1:
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
	}

	cout << "вы увидели грифона" << "1-напасть на него" << endl << "2-обойти его" << endl;
	cin >> val;
	if (val == 1) {
		//мы избежали боя
	}
	else if (val == 2) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "грифон", 200, 25, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "орк", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	cout << "1-идти прямо по тропе" << endl << "2-зайти в пещеру" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк", 150, 25, 1, 200 };
		personage = battle(personage, mob);
		cout << " вы нашли неглубокую пещеру и там же переждали ночь" <<  endl;
	}
	else if (val == 2) {
		cout << "вы вошли в  пещеру " << endl;
		
		cout << "вы встретили орка " << endl << "1- атаковать";
		cin >> val;
		if (val == 1) {
			mob = { "орк", 150, 25, 1, 200 };
			personage = battle(personage, mob);
			cout << "1-продолжить путь " << endl;
			 cin >> val;
			if (val == 1) {
				mob = { "троль", 170, 30, 1, 250 };
				personage = battle(personage, mob);	
				
				cout << "вы вышли из пещеры " << endl;
			}
			
		}
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "орк", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}

	else if (val == 2) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	cout << "на нас на дороге напал грифон 1-начать бой" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "грифон", 200, 25, 1, 250 };
		personage = battle(personage, mob);
	}

	cout << "1-идти прямо по тропе" << endl << "2-идти по левой тропе" << endl << "3-идти по правой тропе" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "грифон", 200, 25, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "троль", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL));
		int sunduk = rand() % 3;
		switch (sunduk)
		{
		case 1:
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
	}
	
}
Class locka(Class personag, Agr mob, Boss1 BOSS) {
	pyt2_mount(personag, mob);
	return personag;
}