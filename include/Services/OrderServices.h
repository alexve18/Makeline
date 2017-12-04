#ifndef ORDERSERVICES_H
#define ORDERSERVICES_H
#include "FileWorker.h"


class OrderServices
{
    public:
        OrderServices();
        void GetOrders();
        void PrintOrders();
        void DoneOrder(char input);
    private:
        vector<Order> theorders;
        FileWorker fw;
};

#endif // ORDERSERVICES_H
