
#include "header.h"
Class pyt2_mount(Class personage, Agr mob) {
	//� ��� �������� ������ ����
	setlocale(LC_ALL, "Russian");
	int val;
	cout << "1-���� �� ������" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 50, 10, 1, 150 };
		personage = battle(personage, mob);
	}
	cin >> val;
	cout << "1-���� � �������� ����" << endl;
	if (val == 1) {
		mob = { "������", 50, 10, 1, 150 };
		personage = battle(personage, mob);
	}
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 50, 10, 1, 150 };
		personage = battle(personage, mob);
		cout << "�� ������� � ������ " << endl;
	}
	else if (val == 2) {
		cout << "�� ������� � ������ " << endl;
	}
	
	cout << "1- �� ������� � ������ " << endl << "2-����� � ������" << endl;
	cin >> val;
	if (val == 1) {
		cout << "������ ��� ������� �� ����� ����� ������ " << endl;
	}
	else if (val == 2) {
		cout << "�� ����� �  ������ " << endl;
		cin >> val;
		if (val == 1) {
			cout << "1-���������� ���� " << endl;
		}
		cout << "�� ��������� ���� " << endl << "1- ���������";
		cin >> val;
		if (val == 1) {
			mob = { "���", 150, 25, 1, 200 };
			personage = battle(personage, mob);
			cout << "����� ������ ��� ����� �� ����� ������ � ������� ��� ��� �������� � ��� 100 ����� � 3 ����� �������� " << endl;
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
			cout << "�� ����� � ������ ��� �� ����� ��� � ��� �����" << endl;
		}
	}
	cout << "1- ��������� � ������ ������" << endl << "2 ���������� ����";
	cin >> val;
	if (val == 1) {
		
		cout << "� ������ ������ ���������� ����� ����� " << endl << "1- ���������";
		cin >> val;
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	cout << "1-���� ����� �� �����" << endl  << "2-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 50, 10, 1, 150 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "���", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}
	
	cout << "1-����� � ������" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �������" << endl << "2-���� �� ������ �������" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
		cout << "��� �������� �����, �� ��������� � ������ �� ������� ������� " << endl;
	}
	
	cout << "1-���� �� ����� �� ������" << endl;
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

	cout << "�� ������� �������" << "1-������� �� ����" << endl << "2-������ ���" << endl;
	cin >> val;
	if (val == 1) {
		//�� �������� ���
	}
	else if (val == 2) {
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 200, 25, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "���", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	cout << "1-���� ����� �� �����" << endl << "2-����� � ������" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���", 150, 25, 1, 200 };
		personage = battle(personage, mob);
		cout << " �� ����� ���������� ������ � ��� �� ��������� ����" <<  endl;
	}
	else if (val == 2) {
		cout << "�� ����� �  ������ " << endl;
		
		cout << "�� ��������� ���� " << endl << "1- ���������";
		cin >> val;
		if (val == 1) {
			mob = { "���", 150, 25, 1, 200 };
			personage = battle(personage, mob);
			cout << "1-���������� ���� " << endl;
			 cin >> val;
			if (val == 1) {
				mob = { "�����", 170, 30, 1, 250 };
				personage = battle(personage, mob);	
				
				cout << "�� ����� �� ������ " << endl;
			}
			
		}
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���", 150, 25, 1, 200 };
		personage = battle(personage, mob);
	}

	else if (val == 2) {
		mob = { "�����", 170, 30, 1, 250 };
		personage = battle(personage, mob);
	}
	cout << "�� ��� �� ������ ����� ������ 1-������ ���" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 200, 25, 1, 250 };
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 200, 25, 1, 250 };
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "�����", 170, 30, 1, 250 };
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