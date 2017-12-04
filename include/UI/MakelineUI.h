#ifndef MAKELINEUI_H
#define MAKELINEUI_H
#include "OrderServices.h"

using namespace std;

class MakelineUI
{
    public:
        MakelineUI();
        void MainMenu();
    private:
        OrderServices OS;
};

#endif // MAKELINEUI_H
