#ifndef DATA_H
#define DATA_H
#include <ostream>
using std::ostream;

class Data{
    int dzien_;
    int miesiac_;
    int rok_;
public:
    Data (int d, int m, int r);
    int compare (const Data& d);
    friend ostream& operator<<(ostream& out, const Data& d);
};

#endif
