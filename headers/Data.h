#ifndef DATA_H
#define DATA_H
#include <ostream>
using std::ostream;

class Data{
    int d_;
    int m_;
    int r_;
public:
    Data (int d, int m, int r);
    int compare (const Data& d);
	int liczbaDni ()const;
    friend ostream& operator<<(ostream& out, const Data& d);
};

#endif
