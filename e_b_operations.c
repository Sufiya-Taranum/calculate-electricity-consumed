#include "e_b_header.h"

float electricity_consumed(int units)
{
    if(units<=200)
    {
        return units*5;
    }
    else if(units<=300)
    {
       return ((200*5)+(units-200)*7);
    }
    else if(units>300)
    {
      return ((200*5)+(100*7)+(units-300)*10);
    }
    return 0;
}
