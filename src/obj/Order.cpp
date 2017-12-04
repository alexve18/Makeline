#include "Order.h"

Order::Order(int ID, int Deliver, string Location, char Size, string Toppings, string Comment, int Prize, string Status, int Payed)
{
    //ctor
    _ID = ID;
    _deliver = Deliver;
    _location = Location;
    _size = Size;
    _toppings = Toppings;
    _comment = Comment;
    _prize = Prize;
    _status = Status;
    _payed = Payed;
}

string Order::GetStatus()
{
    return this->_status;
}

ostream& operator << (ostream& out, const Order& order)
{
    out << "ID: " << order._ID << " ";
    out << "Size: " << order._size << " ";
    out << "Toppings: " << order._toppings << " ";
    out << "Comment: " << order._comment << " ";
    out << "Status: " << order._status << endl;

    return out;
}
