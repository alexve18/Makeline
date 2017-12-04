#include "OrderServices.h"

OrderServices::OrderServices()
{
    //ctor
    GetOrders();
}
void OrderServices::GetOrders()
{
    theorders = fw.PassOrders();
}
void OrderServices::PrintOrders()
{
    for(unsigned int i = 0; i < theorders.size(); i++)
    {
        cout << i << " " << theorders[i];
    }
}

void OrderServices::DoneOrder(char input)
{
    theorders.erase(theorders.begin()+input);
}
