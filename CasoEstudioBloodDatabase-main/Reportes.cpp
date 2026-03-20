#include "Reportes.h"

void Reports::loadDataBase(vector<Donor> donors) {
    auxDonor = donors;
}

int Reportes::donorTotal() {
    return auxDonor.size();
}

int Reportes::donorTotal(string bloodType, int district) {
    int count = 0;

    for (int i = 0; i < auxDonor.size(); i++) {
        if (auxDonor[i].getBloodType() == bloodType &&
            auxDonor[i].getDistrict() == district) {
            count++;
        }
    }

    return count;
}