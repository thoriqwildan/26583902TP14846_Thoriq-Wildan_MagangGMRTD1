#include <iostream>

using namespace std;

// DONE

int main() {

    int maxBattery, mission, chargingBattery, chargingCount;
    int missionSuccess = 0;

    cout << "Berapa jumlah misi yang akan dilakukan? ";
    cin >> mission;

    cout << "Berapa kapasitas baterai maksimum? ";
    cin >> maxBattery;

    cout << "Berapa kapasitas baterai saat diisi ulang? ";
    cin >> chargingBattery;

    cout << "Berapa kali batas maksimal baterai dapat diisi ulang? ";
    cin >> chargingCount;

    int missionEnergy[mission];

    for (int i = 0; i < mission; i++) {
        cout << "Berapa energi yg dibutuhkan untuk misi ke-" << i + 1 << "? ";
        cin >> missionEnergy[i];
    }

    for (int i = 0; i < mission; i++) {
        if (missionEnergy[i] <= maxBattery) {
            missionSuccess++;
            maxBattery -= missionEnergy[i];
        } else if (chargingCount > 0) {
            maxBattery += chargingBattery;
            chargingCount--;
        } else {
            break;
        }
    }

    cout << "Jumlah misi yang berhasil dilakukan: " << missionSuccess << endl;

    return 0;
}