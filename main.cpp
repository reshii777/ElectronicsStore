#include <iostream>
#include <string>
#include "Electronics.h"
#include "Blender.h"
#include "Smartphone.h"
#include "TabletPC.h"
#include "VacuumCleaner.h"
#include "RobotCleaner.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

    Electronics * grocery[5];

    grocery[0] = new Blender(string("Blender"), 5000, 800, string("Red"));
    grocery[1] = new Smartphone(string("Smartphone"), 25000, 6.8);
    grocery[2] = new TabletPC(string("TabletPC"), 40000, 11.3);
    grocery[3] = new VacuumCleaner(string("VacuumCleaner"), 9000, 2000, string("Gray"));
    grocery[4] = new RobotCleaner(string ("RobotCleaner"), 35000, 1500, string("Black"), 3.4);

    bool open = true;
    while (open)
    {
        cout << "Выберете товар :  1 - Blender, 2 - Smartphone, 3 - TabletPC, 4 - VacuumCleaner, 5 - Robot Cleaner,  0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            grocery[0]->Show();
            cout << endl;
            break;

        case 2:
            grocery[1]->Show();
            cout << endl;
            break;

        case 3:
            grocery[2]->Show();
            cout << endl;
            break;

        case 4:
            grocery[3]->Show();
            cout << endl;
            break;

       case 5:
            grocery[4]->Show();
            cout << endl;
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 6 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];
    delete grocery[4];

    return 0;
}
