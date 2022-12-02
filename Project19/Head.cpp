#include "header.h"

int Class::inventar() {
	int vibor_zelya;
	cout << "�������� ����� ����� ������������" << endl;
	cout << "����� HP " << zelyeHP << endl;
	cout << "����� �����" << zelyeDamege << endl;
	cout << "����� ��������" << zelyeDexterity << endl;
	cout << "����� ���������" << zelyeIntelekt << endl;
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
	cout << "�������� ��� ������ ��������" << endl;
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
		cout << "������!";
	}
}

int Class::gainexp(int currentexp, int gained_exp) {//��������� �����
	currentexp = currentexp + gained_exp;
	return currentexp;
}
void Class::check_level(int currentlevel, int currentexp, int maxexp) { //�������� �� ��������� ������
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
		return boss_attack1; // ������� �����
	}
	else if (val >= 7 && val <= 9) {
		if (boss_HP < 500) {
			boss_attack2 = rand() % ((max + 50) - (min + 50)) + (min + 50);
			return boss_attack2; // ����� ������
		}
	}
	else if (val >= 10 && val <= 12) {
		boss_attack3 = rand() % ((max - 30) - (min - 15)) + (min - 15);
		return boss_attack3; // ������� �����, �� ����� ����
	}
	else if (val >= 13 && val <= 14) {
		// �������� ������
	}
	else if (val == 15) {
		boss_HP += 200;
		return boss_HP;
	}
}



Class Boss1::Boss_battle(Class personage) {
	/*
		����� ������� ����� �����, �� ������ ��� ��� ����������
		��� ������� ���� ������� �������� ���������
	*/

	if (personage.personage_class == "wizard") {
		bool fight = true;
		while (fight == true) {
			if (personage.currentHP < 0 || boss_HP < 0) {
				fight = false;
				break;
			}
			int val;
			cout << "��� ������ �������?" << endl;
			cout << "������� --- [1]" << endl;
			cout << "���������� --- [2]" << endl;
			cout << "���������� ���� --- [3]" << endl;
			cout << "����� � ��� --- [4]" << endl;
			cout << "������������ ��������� --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "�� ������� ���� " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "�� �� ����������" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "�� ��� ������ ����  " << Boss_attack() << endl;
					cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "�� ����������!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "�� ������� ���� " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "�� ������ ������� � ���� ���" << endl;
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
			cout << "��� ������ �������?" << endl;
			cout << "������� --- [1]" << endl;
			cout << "���������� --- [2]" << endl;
			cout << "���������� ���� --- [3]" << endl;
			cout << "����� � ��� --- [4]" << endl;
			cout << "������������ ��������� --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "�� ������� ���� " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "�� �� ����������" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "�� ��� ������ ����  " << Boss_attack() << endl;
					cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "�� ����������!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "�� ������� ���� " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "�� ������ ������� � ���� ���" << endl;
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
			cout << "��� ������ �������?" << endl;
			cout << "������� --- [1]" << endl;
			cout << "���������� --- [2]" << endl;
			cout << "���������� ���� --- [3]" << endl;
			cout << "����� � ��� --- [4]" << endl;
			cout << "������������ ��������� --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "�� ������� ���� " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "�� �� ����������" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "�� ��� ������ ����  " << Boss_attack() << endl;
					cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "�� ����������!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "�� ������� ���� " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "�� ������ ������� � ���� ���" << endl;
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
			cout << "��� ������ �������?" << endl;
			cout << "������� --- [1]" << endl;
			cout << "���������� --- [2]" << endl;
			cout << "���������� ���� --- [3]" << endl;
			cout << "����� � ��� --- [4]" << endl;
			cout << "������������ ��������� --- [5]" << endl;
			cin >> val;
			if (val == 1) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.power;
				cout << "�� ������� ���� " << personage.power << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 2) {
				if (boss_dexterity > personage.dexterity) {
					cout << "�� �� ����������" << endl;
					personage.currentHP = personage.currentHP - Boss_attack();
					cout << "�� ��� ������ ����  " << Boss_attack() << endl;
					cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
					cout << endl;
					continue;
				}
				else {
					cout << "�� ����������!" << endl;
					cout << endl;
					continue;
				}

			}
			if (val == 3) {
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				boss_HP = boss_HP - personage.intelligence;
				cout << "�� ������� ���� " << personage.intelligence << endl;
				personage.currentHP = personage.currentHP - Boss_attack();
				cout << "�� ��� ������ ����  " << Boss_attack() << endl;
				cout << "HP ����  " << boss_HP << "  ���� HP  " << personage.currentHP << endl;
				cout << endl;
				continue;
			}

			if (val == 4) {
				cout << "�� ������ ������� � ���� ���" << endl;
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
		cout << personage.currentexp << "����� ��������" << endl;
		personage.check_level(personage.currentlevel, personage.currentexp, personage.maxexp);
		return personage;

	}
}