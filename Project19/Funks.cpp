#include "Header.h"


Class Personag() {
	int val;
	cout << "������� ����� ���������:" << endl;
	cout << "���������---[1]" << endl;
	cout << "������---[2]" << endl;
	cout << "���---[3]" << endl;
	cout << "����---[4]" << endl;
	cin >> val;
	/*
	int maxexp = 300;
	int currentHP;
	int maxHP;
	int power;//8
	int intelligence;//18
	int dexterity;//12//38 ��������
	int zelyeHP ;
	int zelyeDamege;
	int zelyeIntelekt;
	int zelyeDexterity;
	int currentlevel = 1;// ������� �������
	int currentexp = 0;// ������� exp
	*/
	if (val == 1) {
		Class personag =  { "wizard",300,100,100,8,18,8,10,0,0,0,1,0 };//�� ����� �������� �� �����
		return personag;
	}
	else if (val == 2) {
		Class personag =  { "archer",300,100,100,10,10,20,0,0,0,1,0 };
		return personag;
	}
	else if (val == 3) {
		Class personag =  { "thief", 300,80,80,6,12,20,0,0,0,1,0 };
		return personag;
	}
	else if (val == 4) {
		Class personag = {"warrior", 300,150,150,18,8,12,0,0,0,0,1,0 };
		return personag;
	}

}

Class battle(Class personag, Agr mob) {
	bool bat = true;
	cout << "��� ���������� " << mob.name<<endl;
	while (bat == true) {
		if (mob.HP <= 0 || personag.currentHP < 0)
		{
			bat = false;
			break;
		}
		// ����� ���� ����� ��, � ���������� ������ �� �������
		int val;
		
		cout << "��� ������ �������?" << endl;
		cout << "������� --- [1]" << endl;
		cout << "���������� --- [2]" << endl;
		cout << "���������� ���� --- [3]" << endl;
		cout << "����� � ��� --- [4]" << endl;
		cout << "������������ ��������� --- [5]" << endl;
		cin >> val;
		if (val == 1) {
			cout << "HP "<<mob.name <<" " << mob.HP << "  ���� HP  " << personag.currentHP << endl;
			mob.HP = mob.HP - personag.power;
			cout << "�� ������� ���� " << personag.power << endl;
			personag.currentHP = personag.currentHP - mob.damage;
			cout << "�� ��� ������ ����  " << mob.damage << endl;
			cout << "HP " << mob.name << " " << mob.HP << "  ���� HP  " << personag.currentHP << endl;
			cout << endl;
			continue;
		}

		if (val == 2) {
			if (mob.dexterity > personag.dexterity) {
				cout << "�� �� ����������" << endl;
				personag.currentHP = personag.currentHP - mob.damage;
				cout << "�� ��� ������ ����  " << mob.damage << endl;
				cout << "HP "<<" " << mob.name << " " << mob.HP << "  ���� HP  " << personag.currentHP << endl;
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
			cout << "HP " << mob.name << " " << mob.HP << "  ���� HP  " << personag.currentHP << endl;
			mob.HP = mob.HP - personag.intelligence;
			cout << "�� ������� ���� " << personag.intelligence << endl;
			personag.currentHP = personag.currentHP - mob.damage;
			cout << "�� ��� ������ ����  " << mob.damage << endl;
			cout << "HP " << " " << mob.name << " " << mob.HP << "  ���� HP  " << personag.currentHP << endl;
			cout << endl;
			continue;
		}

		if (val == 4) {
			cout << "�� ������ ������� � ���� ���" << endl;
			break;
		}
		if (val == 5) {
			if (personag.zelyeDamege > 0 || personag.zelyeDexterity > 0 || personag.zelyeHP > 0 || personag.zelyeIntelekt > 0) {
				personag.inventar();

			}

			cout << personag.currentHP;

		}
	}

	if (personag.currentHP > 0) {
		personag.currentexp += personag.gainexp(personag.currentexp, mob.gained_exp);
		cout << personag.currentexp << endl;
		personag.check_level(personag.currentlevel, personag.currentexp, personag.maxexp);
		/*return personag.currentHP, personag.currentexp, personag.zelyeDamege,
			personag.zelyeDexterity, personag.zelyeHP, personag.zelyeIntelekt;*/
		return personag;

	}
}

void show_inf() {
	int val;
	cout << "������� ����� ���������:" << endl;
	cout << "���������---[1]" << endl;
	cout << "������---[2]" << endl;
	cout << "���---[3]" << endl;
	cout << "����---[4]" << endl;
	cin >> val;
	Class wizard = { "wizard", 300, 100, 100, 8, 18, 8, 10, 10, 10, 10, 1, 10 };
	Class archer = { "archer", 100,100,1,1,12,8,18,0,0,0,0,0 };
	Class thief = { "thief", 80,80,1,1,6,12,20,0,0,0,0,0 };
	Class warrior = { "warrior", 300,150,150,18,8,12,0,0,0,0,1,0 };
	switch (val)
	{
	case 1:
		cout << "wizard" << endl;
		cout << "currentHP" << wizard.currentHP << endl;
		cout << "maxHP" << wizard.maxHP << endl;

		cout << "power" << wizard.power << endl;
		cout << "intelligence" << wizard.intelligence << endl;
		cout << "dexterity" << wizard.dexterity << endl;
		cout << endl;
		break;
	case 2:
		cout << "archer" << endl;
		cout << "currentHP" << archer.currentHP << endl;
		cout << "maxHP" << archer.maxHP << endl;

		cout << "power" << archer.power << endl;
		cout << "intelligence" << archer.intelligence << endl;
		cout << "dexterity" << archer.dexterity << endl;
		cout << endl;
		break;
	case 3:
		cout << "thief" << endl;
		cout << "currentHP" << thief.currentHP << endl;
		cout << "maxHP" << thief.maxHP << endl;

		cout << "power" << thief.power << endl;
		cout << "intelligence" << thief.intelligence << endl;
		cout << "dexterity" << thief.dexterity << endl;
		cout << endl;
		break;
	case 4:
		cout << "warrior" << endl;
		cout << "currentHP" << warrior.currentHP << endl;
		cout << "maxHP" << warrior.maxHP << endl;

		cout << "power" << warrior.power << endl;
		cout << "intelligence" << warrior.intelligence << endl;
		cout << "dexterity" << warrior.dexterity << endl;
		cout << endl;
		break;
	default:
		break;
	}
}




