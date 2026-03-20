#ifndef REPORTES
#define REPORTES

#include <string>
#include <vector>
#include "Donor.h"

using namespace std;


class Reportes {
    private:
        vector<Donor> auxdonors;
    public:
        void loadDataBase(vector<Donor> donors);
         int donorTotal();
         int donorTotal(string bloodType, int district);
};
#endif
