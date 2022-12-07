#include "number.h"

using namespace number;

int number::Number::getNumber()
{
	return number_;
}

const Number ZERO = Number(0);
const Number ONE = Number(1);

std::ostream& operator<<(std::ostream& out, Number num)
{
    out << num.getNumber();
    return out;
}
