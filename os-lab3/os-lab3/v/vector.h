#include <math.h>
#include "number.h"
#include <ostream>

using namespace number;

namespace vector
{
    class Vector
    {
    public:
        Vector(Number f_param_, Number s_param_) : f_param(f_param_), s_param(s_param_) {};

        Number getFirstParam() const
        {
            return f_param;
        }

        Number getSecondParam() const
        {
            return s_param;
        }

        Number getRaduis()
        {
            return Number(sqrt((f_param * f_param + s_param * s_param).getNumber()));
        }

        Number getAngle()
        {
            return Number(atan((s_param / f_param).getNumber()));
        }

    private:
        Number f_param;
        Number s_param;
    };

    const Vector ZERO_VECTOR = Vector(ZERO, ZERO);
    const Vector ORT_VECTOR = Vector(ONE, ONE);
}