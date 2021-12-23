#include <iostream>
#include "Header.h"
using namespace std;
using namespace wea;

int main() {
    setlocale(0, "");
    int choose;
    int p = 71;
    double m = 7.62;
    Gun gun;
    Automatic_Weapon machine;
    Car car;
    Aircraft air;
    All_weapons all;
    Submachine_gun sub_machine;
    //Player player;
    while (true) {
        cout << "\nВведите 1 для вывода всех пистолетов\nВведите 2 для вывода всех автоматов\nВведите 3 для вывода всех самоходных машин\nВведите 4 для вывода всего летающего транспорта\nВведите 5 для вывода всего вооружения\nВведите 6 для вывода пистолета-пулемёта\nВведите 7 для выхода" << endl;
        cin >> choose;
        if (choose == 1) {

            /*Gun* weapon = &gun;
            weapon->makarow();*/
            gun.print();
            gun.makarow();
            gun.gyurza();
            gun.stechkin();
            cout << endl;
            gun.shoot();
            cout << endl;
        }
        if (choose == 2) {
            machine.print();
            machine.fn_fal();
            machine.ak_47();
            machine.hk_g3();
            cout << endl;
            machine.shoot();
            cout << endl;
        }
        if (choose == 3) {
            car.print();
            car.m1_abrams();
            car.tank_t_34();
            cout << endl;
        }
        if (choose == 4) {
            air.print();
            air.plane_j_31();
            air.plane_chengdu_j_20();
            cout << endl;
        }
        switch (choose) {
        case 5:
            all.Gun::print();
            all.Gun::makarow();
            all.Gun::gyurza();
            all.Gun::stechkin();
            cout << endl;
            all.Gun::shoot();
            cout << endl;

            all.Automatic_Weapon::print();
            all.Automatic_Weapon::fn_fal();
            all.Automatic_Weapon::ak_47();
            all.Automatic_Weapon::hk_g3();
            cout << endl;
            all.Automatic_Weapon::shoot();
            cout << endl;

            all.Car::print();
            all.Car::m1_abrams();
            all.Car::tank_t_34();
            cout << endl;

            all.Aircraft::print();
            all.Aircraft::plane_chengdu_j_20();
            all.Aircraft::plane_j_31();
             
            all.Submachine_gun::print();
            all.Submachine_gun::shpagin();
            all.Submachine_gun::caliber(m);
            all.Submachine_gun::store_volume(p);
            cout << endl;
            all.Submachine_gun::shoot();
            cout << endl;
            cout << "Вывод шума при всех этих оружиях: ";
            all.shoot();
        }
       
        if (choose == 6) {
            sub_machine.shpagin();
            sub_machine.caliber(m);
            sub_machine.store_volume(p); 
            cout << endl;
            sub_machine.shoot();

        }
        if (choose == 7) {
            break;
            
        }

    }
}
