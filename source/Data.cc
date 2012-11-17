#include "../headers/Data.h"
#include <ostream>
using std::ostream;

Data::Data (int d, int m, int r)
{
	d_ = d;
	m_ = m;
	r_ = r;
}

int Data::compare (const Data& d)
{	
	return (d_ + 31 * m_ + 366 * r_)-(d.d_ + 31 * d.m_ + 366 * d.r_);
}

ostream& operator<<(ostream& out, const Data& d)
{
	out << d.d_ << "." << d.m_ << "." << d.r_;
	return out;
}
