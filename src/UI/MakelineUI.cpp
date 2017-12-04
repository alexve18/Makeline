#include "MakelineUI.h"

MakelineUI::MakelineUI()
{
    //ctor
}

void MakelineUI::MainMenu()
{
    int input;
    while(true) {
        OS.PrintOrders();
        cout << "What Order have you done?" << endl;
        cin >> input;
        OS.DoneOrder(input);
    }
}
