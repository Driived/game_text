#include "header.h"

int Class::inventar() {
	int vibor_zelya;
	cout << "Выберите какое зелье использовать" << endl;
	cout << "Зелье HP " << zelyeHP << endl;
	cout << "Зелье урона" << zelyeDamege << endl;
	cout << "Зелье ловкости" << zelyeDexterity << endl;
	cout << "Зелье интелекта" << zelyeIntelekt << endl;
	cin >> vibor_zelya;
	switch (vibor_zelya)
	{
	case 1:
		currentHP += 50;
		zelyeHP--;
		return zelyeHP;
	case 2:
		power += 10;
		zelyeDamege--;
		return zelyeDamege;
	case 3:
		dexterity += 10;
		zelyeDexterity--;
		return zelyeDexterity;
	case 4:
		intelligence += 10;
		zelyeIntelekt--;
		return zelyeIntelekt;
	default:
		break;
	}
}

int Class::levelsystem() {
	int vibor;
	cout << "Выберите что хотите улучшить" << endl;
	cout << "maxHP " << maxHP << endl;
	cout << "power " << power << endl;
	cout << "intelligence " << intelligence << endl;
	cout << "dexterity " << dexterity << endl;
	cout << endl;
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		maxHP += 50;
		return maxHP;
	case 2:
		power += 1;
		return power;
	case 3:
		intelligence += 1;
		return intelligence;
	case 4:
		dexterity += 1;
		return dexterity;
	default:
		cout << "Ошибка!";
	}
}

int Class::gainexp(int currentexp, int gained_exp) {//получение опыта
	currentexp = currentexp + gained_exp;
	return currentexp;
}
void Class::check_level(int currentlevel, int currentexp, int maxexp) { //проверка на повышение уровня
	if (currentexp >= maxexp) {
		currentlevel++;
		currentexp = 1;
		maxexp = maxexp * 1.5;
		levelsystem();
	}

}

int Boss1::Boss_attack() {
	srand(time(0));
	int min = 25;
	int max = 100;
	int val;
	val = rand() % 15;
	if (val >= 0 && val <= 6) {
		boss_attack1 = rand() % (max - min) + min;
		return boss_attack1; // обычная атака
	}
	else if (val >= 7 && val <= 9) {
		if (boss_HP < 500) {
			boss_attack2 = rand() % ((max + 50) - (min + 50)) + (min + 50);
			return boss_attack2; // может ультой
		}
	}
	else if (val >= 10 && val <= 12) {
		boss_attack3 = rand() % ((max - 30) - (min - 15)) + (min - 15);
		return boss_attack3; // меньший дамаг, но будет стан
	}
	else if (val >= 13 && val <= 14) {
		// прописан уворот
	}
	else if (val == 15) {
		boss_HP += 200;
		return boss_HP;
	}
}



Class Boss1::Boss_battle(Class personage) {
	/*
		Будет изменен текст битвы, до деланы бои под персонажей
		Под каждого моба строчка монолога персонажа
	*/

	if (personage.personage_class == "wizard") {
		bool fight = true;
		while (fight == true) {
			if (personage.currentHP < 0 || boss_HP < 0) {
				fight = false;
				break;
			}
			int val;
			cout << "Что хотите сделать?" << endl;
			cout << "Ударить --- [1]" << endl;
			cout << "Увернуться --- [2]" << endl;
			cout << "Магический удар --- [3]" << endl;
			cout << "Побег с боя --- [4]" << endl;
			cout << "Использовать инвентарь --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "Вы нанесли урон " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "Вы не увернулись" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "По вам прошел урон  " << Boss_attack() << endl;
					cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "Вы увернулись!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "Вы нанесли урон " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "Вы решили сбежать с поля боя" << endl;
				break;
			}
			if (val == 5) {
				if (personage.zelyeDamege > 0 || personage.zelyeDexterity > 0 || personage.zelyeHP > 0 || personage.zelyeIntelekt > 0) {
					personage.inventar();

				}

				cout << personage.currentHP;

			}
		}


	}
	else if (personage.personage_class == "thief") {
		bool fight = true;
		while (fight == true) {
			if (personage.currentHP < 0 || boss_HP < 0) {
				fight = false;
				break;
			}
			int val;
			cout << "Что хотите сделать?" << endl;
			cout << "Ударить --- [1]" << endl;
			cout << "Увернуться --- [2]" << endl;
			cout << "Магический удар --- [3]" << endl;
			cout << "Побег с боя --- [4]" << endl;
			cout << "Использовать инвентарь --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "Вы нанесли урон " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "Вы не увернулись" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "По вам прошел урон  " << Boss_attack() << endl;
					cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "Вы увернулись!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "Вы нанесли урон " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "Вы решили сбежать с поля боя" << endl;
				break;
			}
			if (val == 5) {
				if (personage.zelyeDamege > 0 || personage.zelyeDexterity > 0 || personage.zelyeHP > 0 || personage.zelyeIntelekt > 0) {
					personage.inventar();

				}

				cout << personage.currentHP;

			}
		}
	}
	else if (personage.personage_class == "archer") {
		bool fight = true;
		while (fight == true) {
			int val;
			cout << "Что хотите сделать?" << endl;
			cout << "Ударить --- [1]" << endl;
			cout << "Увернуться --- [2]" << endl;
			cout << "Магический удар --- [3]" << endl;
			cout << "Побег с боя --- [4]" << endl;
			cout << "Использовать инвентарь --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "Вы нанесли урон " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "Вы не увернулись" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "По вам прошел урон  " << Boss_attack() << endl;
					cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "Вы увернулись!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "Вы нанесли урон " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "Вы решили сбежать с поля боя" << endl;
				break;
			}
			if (val == 5) {
				if (personage.zelyeDamege > 0 || personage.zelyeDexterity > 0 || personage.zelyeHP > 0 || personage.zelyeIntelekt > 0) {
					personage.inventar();

				}

				cout << personage.currentHP;

			}
		}
	}
	else if (personage.personage_class == "warrior") {
		bool fight = true;
		while (fight == true) {
			int val;
			cout << "Что хотите сделать?" << endl;
			cout << "Ударить --- [1]" << endl;
			cout << "Увернуться --- [2]" << endl;
			cout << "Магический удар --- [3]" << endl;
			cout << "Побег с боя --- [4]" << endl;
			cout << "Использовать инвентарь --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "Вы нанесли урон " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "Вы не увернулись" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "По вам прошел урон  " << Boss_attack() << endl;
					cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "Вы увернулись!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "Вы нанесли урон " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "По вам прошел урон  " << Boss_attack() << endl;
				cout << "HP моба  " << boss_HP << "  Ваше HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "Вы решили сбежать с поля боя" << endl;
				break;
			}
			if (val == 5) {
				if (personage.zelyeDamege > 0 || personage.zelyeDexterity > 0 || personage.zelyeHP > 0 || personage.zelyeIntelekt > 0) {
					personage.inventar();

				}

				cout << personage.currentHP;

			}

		}
	}

	if (personage.currentHP > 0) {
		personage.currentexp += personage.gainexp(personage.currentexp, 1500);
		cout << personage.currentexp << "опыта получено" << endl;
		personage.check_level(personage.currentlevel, personage.currentexp, personage.maxexp);
		return personage;

	}
}