#include "header.h"


Class pyt1_les(Class personage, Agr mob) {
	int val;
	cout << "1-���� ����� �� �����" << endl;
	cin >> val;
	if (val == 1) {
		
		mob = {"������", 25, 5, 1, 100};//������
		personage = battle(personage, mob);
	}
	cout << "����������� � ����� ������ ��������" << endl;
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������",25, 5, 1, 100 }; //������
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		cout << "�� ������ �� ���������" << endl;
	}
	else if (val == 3) {
		cout << "�� ��������� �������" << endl;
		cout << "������:�����������, ���������� ���� ������� ����� �� ��������� �������� ���� ,� ��� ��� �� ���� ���� ����, ��� ��� �� ����� ���� �� ���" << endl;
	}
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���",60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "������", 25, 5, 1, 100 };//������
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL)); // ������
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
		cout << "����� ������ ������� ����� �������� ����� �� ��������� �� ������" << endl;
	}
	cout << "1-���� ����� �� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���", 60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	cout << "2-���� �� ����� �����" << endl;
	cin >> val;
	if (val == 2) {
		mob = { "���", 60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���", 600, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "������", 25, 5, 1, 100 }; // ������
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "���",60, 15, 0, 200 }; // ���
		personage = battle(personage, mob); // ����� ������ ���
	}
	cout << "1-��������� � ������" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "����", 35, 7, 3, 120 }; // ����
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "����", 35, 7, 3, 120 }; // ����
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "���",60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL)); // ������
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
	cout << "1-���� ����� �� �����" << endl;
	cin >> val;
	if (val == 1) {
		cout << "�� ��������� ��������" << endl;
		cout << "��������: ����������� ������, � �������� �������� ������� ��� ������" << endl;
		//��� ������� ��������
		cout << "������� �� ������� � �����" << endl;
	}

	cout << "�� ������� �������" << "1-������� �� ����" << endl << "2-������ ���" << endl;
	cin >> val;
	if (val == 1) {
		cout << "�� �������� ���" << endl;
	}
	else if (val == 2) {
		mob = { "�������", 100, 15, 3, 350 }; // �������
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "�������", 100, 20, 3, 350 }; // �������
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "���",600, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "����", 35, 7, 3, 120 }; // ����
		personage = battle(personage, mob);
	}
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "�������",200, 20, 3, 350 }; // �������
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "���", 60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 35, 10, 1, 100 };
		personage = battle(personage, mob);
	}

	else if (val == 2) {
		mob = { "����", 35, 7, 3, 120 }; // ����
		personage = battle(personage, mob);
	}
	cout << "�� ��� �� ������ ����� ��������� 1-������ ���" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���������",50, 10, 6, 200 }; // ���������
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���������", 50, 10, 6, 200 }; // ���������
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "����",35, 7, 3, 120 }; // ����
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		srand(time(NULL)); // ������
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
		cout << "����� ������ ������� ����� �������� ����� �� ��������� �� ������" << endl;
	}
	cout << "1-���� ����� �� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 25, 5, 1, 100 };//������
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 70, 25, 5, 250 }; // ������
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "������", 700, 25, 5, 250 }; // ������
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		personage.currentHP = personage.maxHP;
		cout << "�� ������ �� ��������� � ������ ������� �����������" << endl;
	}
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ����� �����" << endl << "3-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���",60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "������", 70, 25, 5, 250 }; // ������
		personage = battle(personage, mob);
	}
	else if (val == 3) {
		mob = { "����", 35, 7, 3, 120 }; // ����
		personage = battle(personage, mob);
	}
	cout << "1-���� ����� �� �����" << endl << "2-���� �� ������ �����" << endl;
	cin >> val;
	if (val == 1) {
		mob = { "���������", 75, 10, 6, 200 }; // ���������
		personage = battle(personage, mob);
	}
	else if (val == 2) {
		mob = { "���", 60, 15, 0, 200 }; // ���
		personage = battle(personage, mob);
	}

	cout << "1-���� ����� �� �����" << endl;
	cin >> val;
	if (val == 1) {
		srand(time(NULL)); // ������
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
		cout << "����� ������ ������� ����� �������� ����� �� ��������� �� ������" << endl;
	}
	return personage;

}
Class locka(Class personag, Agr mob, Boss1 BOSS) {
	pyt1_les(personag, mob);
	cout << "����" << endl;
	BOSS.Boss_battle(personag);
	return personag;
}
