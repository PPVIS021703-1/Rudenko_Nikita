#include "Header.h"
#include <iostream>
using namespace std;
using namespace wea;
void Weapon::shoot(){
	cout << "Выстрелы\n\n";
}
void Weapon::makarow() {
	cout << "Пистолет Макарова" << endl;
}
void Weapon::gyurza() {
	cout << "Пистолет Гюрза" << endl;
}
void Weapon::stechkin() {
	cout << "Пистолет Стечкина" << endl;
}
void Weapon::fn_fal() {
	cout << "Бельгийская автоматическая винтовка"<<endl;
}
void Weapon::ak_47() {
	cout << "Автомат Калашникова"<<endl;
}
void Weapon::hk_g3(){
	cout << "Автоматическая винтовка фирмы «Хеклер и Кох»";
}
void Weapon::m1_abrams() {
	cout << "Танк Абрамс"<<endl;
}
void Weapon::tank_t_34() {
	cout << "Танк Т-34" << endl;
}


void Weapon::plane_j_31() {
	cout << "Самолёт типа J - 31" << endl;
}
void Weapon::plane_chengdu_j_20() {
	cout << "Истребитель классификации Chengdu J-20" << endl;
}

void Submachine_gun::shpagin() 
{
	cout << "Пистолет-пулемёт Шпагина"<<endl;
}

void Automatic_Weapon::store_volume(int p)
{
	cout <<"Объём магазина: "<< p <<endl;
}
void Gun::caliber(double m)
{
	cout << "Каллибр патрона: " << m<< endl;
}

void Gun::gyurza() {
	Weapon::gyurza();
	Weapon::shoot();
}
void Gun::makarow() {
	Weapon::makarow();
	Weapon::shoot();
}
void Gun::stechkin() {
	Weapon::stechkin();
	Weapon::shoot();
}

void Automatic_Weapon::fn_fal() {
	Weapon::fn_fal();
}
void Automatic_Weapon::ak_47() {
	Weapon::ak_47();
}
void Automatic_Weapon::hk_g3() {
	Weapon::hk_g3();
}
void Car::tank_t_34() {
	Weapon::tank_t_34();
}
void Car::m1_abrams() {
	Weapon::m1_abrams();
}

void Aircraft::plane_j_31() {
	Weapon::plane_j_31();
}
void Aircraft ::plane_chengdu_j_20() {
	Weapon::plane_chengdu_j_20();
}




