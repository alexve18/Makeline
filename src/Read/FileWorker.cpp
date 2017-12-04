#include "FileWorker.h"

FileWorker::FileWorker()
{
    //ctor
    ReadFile();
}

void FileWorker::ReadFile()
{
    string line;
    ifstream fin;
    fin.open("Orders.txt");
    if(fin.is_open())
    {
        while(!fin.eof())
        {
           getline(fin, line);
           FilterFile(line);
        }
    }
    else
    {
        cout << "File could not be opened" << endl;
    }
}

void FileWorker::FilterFile(string lineorder)
{
    string filter[9];
    int counter = 0;
    for(unsigned int i = 0; i < lineorder.size(); i++)
    {
        if(lineorder[i] == '|')
        {
            counter++;
        }
        else
        {
            filter[counter] += lineorder[i];
        }
    }
    Order order(Convertoint(filter[0]), Convertoint(filter[1]), filter[2], filter[3][0], filter[4], filter[5], Convertoint(filter[6]), filter[7], Convertoint(filter[8]));
    _Orders.push_back(order);
}

vector<Order> FileWorker::PassOrders() {
    return _Orders;
}

int FileWorker::Convertoint(string toconvert)
{
    stringstream ss;
    int temp = 0;
    ss << toconvert;
    ss >> temp;

    return temp;
}
