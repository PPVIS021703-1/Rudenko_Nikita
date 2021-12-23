#include <iostream>
#include <string>

using namespace std;

namespace wea 
{
	class Weapon { //вооружение

	public:
		virtual void print(string) = 0;

		virtual void shoot();

		void makarow();
		void gyurza();
		void stechkin();
		void fn_fal();
		void ak_47();
		void hk_g3();
		void tank_t_34();
		void m1_abrams();
		void plane_chengdu_j_20();
		void plane_j_31();


	};

	class Gun: virtual private Weapon { //огнестрельное оружие
	public:
		void print(string n = "\nПистолеты:\n") override 
		{
			cout << n << endl;
		}
		void shoot() override {
			cout << "Пау!"<<endl;
		}
		
		void makarow();
		void caliber(double m);
		void gyurza();
		void stechkin();
		void caliber();
	};

	class Automatic_Weapon : virtual  protected Weapon {
	public:
		void print(string n = "\nАвтоматы:\n") override {
			cout << n << endl;
		}
		void shoot()override
		{
			cout << "Тррррррр!"<<endl;
		}
		
		
		void store_volume(int p);
		void fn_fal();
		void ak_47();
		void hk_g3();
	};
	class Submachine_gun: public Gun, public Automatic_Weapon {
	public:
		void print(string n = "\nПистолет-пулемёт:\n") {
			cout << n << endl;
		}
		void shoot() override {
			cout << "Тук Тук Тук" << endl;
		}
		void shpagin();


	};

	class Car : virtual public Weapon {
	public:
		void print(string n = "\nСамоходные машины:\n") override {
			cout << n << endl;
		};
		void tank_t_34();
		void m1_abrams();
	};

	class Aircraft : private Weapon {
	public:
		void print(string n = "\nЛетательные аппараты:\n") override {
			cout << n << endl;
		}
		void plane_chengdu_j_20();
		void plane_j_31();

	};

	class All_weapons : public Gun, public Automatic_Weapon, public Car, public Aircraft,public Submachine_gun
	{
	public:
		void print(string n = "Всё вооружение: \n") override {
			cout << n << endl;
		}
		void shoot()override {
			cout << "BOOM!"<<endl;
		}
	};
}


