#ifndef DATA_H
#define DATA_H

class Data{
    int dzien_;
    int miesiac_;
    int rok_;
public:
    Data (int d, int m, int r);
    int compare (const Data& d);
};

#endif
