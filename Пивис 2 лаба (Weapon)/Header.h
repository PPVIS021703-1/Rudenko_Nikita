#include <iostream>
#include <string>

using namespace std;

namespace wea 
{
	class Weapon { //����������

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

	class Gun: virtual private Weapon { //������������� ������
	public:
		void print(string n = "\n���������:\n") override 
		{
			cout << n << endl;
		}
		void shoot() override {
			cout << "���!"<<endl;
		}
		
		void makarow();
		void caliber(double m);
		void gyurza();
		void stechkin();
		void caliber();
	};

	class Automatic_Weapon : virtual  protected Weapon {
	public:
		void print(string n = "\n��������:\n") override {
			cout << n << endl;
		}
		void shoot()override
		{
			cout << "��������!"<<endl;
		}
		
		
		void store_volume(int p);
		void fn_fal();
		void ak_47();
		void hk_g3();
	};
	class Submachine_gun: public Gun, public Automatic_Weapon {
	public:
		void print(string n = "\n��������-������:\n") {
			cout << n << endl;
		}
		void shoot() override {
			cout << "��� ��� ���" << endl;
		}
		void shpagin();


	};

	class Car : virtual public Weapon {
	public:
		void print(string n = "\n���������� ������:\n") override {
			cout << n << endl;
		};
		void tank_t_34();
		void m1_abrams();
	};

	class Aircraft : private Weapon {
	public:
		void print(string n = "\n����������� ��������:\n") override {
			cout << n << endl;
		}
		void plane_chengdu_j_20();
		void plane_j_31();

	};

	class All_weapons : public Gun, public Automatic_Weapon, public Car, public Aircraft,public Submachine_gun
	{
	public:
		void print(string n = "�� ����������: \n") override {
			cout << n << endl;
		}
		void shoot()override {
			cout << "BOOM!"<<endl;
		}
	};
}


