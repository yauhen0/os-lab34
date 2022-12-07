#include "vector.h"

using namespace vector;

std::ostream& operator<<(std::ostream& out, Vector vctr)
{
    out << "(" << vctr.getFirstParam().getNumber() << ", " << vctr.getSecondParam().getNumber() << ")";
    return out;
}

