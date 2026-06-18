#include <iostream>
using namespace std;

int main() {
    int choice;
    bool light = false;
    bool fan = false;
    bool doorLocked = true;
    bool alarm = false;

    do {
        cout << "\n===== SMART HOME SYSTEM =====\n";
        cout << "1. Turn Light ON\n";
        cout << "2. Turn Light OFF\n";
        cout << "3. Turn Fan ON\n";
        cout << "4. Turn Fan OFF\n";
        cout << "5. Unlock Door\n";
        cout << "6. Lock Door\n";
        cout << "7. Turn Alarm ON\n";
        cout << "8. Turn Alarm OFF\n";
        cout << "9. View Status\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                light = true;
                cout << "Light is ON.\n";
                break;

            case 2:
                light = false;
                cout << "Light is OFF.\n";
                break;

            case 3:
                fan = true;
                cout << "Fan is ON.\n";
                break;

            case 4:
                fan = false;
                cout << "Fan is OFF.\n";
                break;

            case 5:
                doorLocked = false;
                cout << "Door is UNLOCKED.\n";
                break;

            case 6:
                doorLocked = true;
                cout << "Door is LOCKED.\n";
                break;

            case 7:
                alarm = true;
                cout << "Alarm is ON.\n";
                break;

            case 8:
                alarm = false;
                cout << "Alarm is OFF.\n";
                break;

            case 9:
                cout << "\n--- HOME STATUS ---\n";
                cout << "Light: " << (light ? "ON" : "OFF") << endl;
                cout << "Fan: " << (fan ? "ON" : "OFF") << endl;
                cout << "Door: " << (doorLocked ? "LOCKED" : "UNLOCKED") << endl;
                cout << "Alarm: " << (alarm ? "ON" : "OFF") << endl;
                break;

            case 0:
                cout << "Exiting Smart Home System...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}