#ifndef FILEWORKER_H
#define FILEWORKER_H
#include "Order.h"
#include <fstream>
#include <vector>
#include <sstream>


class FileWorker
{
    public:
        FileWorker();
        void ReadFile();
        void FilterFile(string lineorder);
        int Convertoint(string toconvert);
        vector<Order> PassOrders();


    protected:

    private:
        vector<Order> _Orders;
};

#endif // FILEWORKER_H
