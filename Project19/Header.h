#pragma once
#include <ctime>
#include <iostream>
#include <random>


using namespace std;


struct Agr
{
	
	string name;
	int HP;
	int damage;
	int dexterity;
	int gained_exp;

};

struct Class //������ ���������
{
	string 
		personage_class;
	int maxexp;
	int currentHP;
	int maxHP;
	int power;//8
	int intelligence;//18
	int dexterity;//12//38 ��������
	int zelyeHP;
	int zelyeDamege;
	int zelyeIntelekt;
	int zelyeDexterity;
	int currentlevel = 1;// ������� �������
	int currentexp = 0;// ������� exp

	int inventar();
	int levelsystem();
	int gainexp(int currentexp, int gained_exp);
	void check_level(int currentlevel, int currentexp, int maxexp);
};

struct Boss1
{
	int boss_HP = 1000;
	int boss_attack1; // ������� �����
	int boss_attack2; // �����
	int boss_attack3; // ����������
	int boss_dexterity; // ��������, �� ��� ����� �������� ������� ���� �� �����

	int Boss_attack();
	Class Boss_battle(Class personage);
};

Class Personag();
Class battle(Class personag, Agr mob);
Class locka(Class personag, Agr mob, Boss1 BOSS);

void Okoshko();
void OknoIgri();