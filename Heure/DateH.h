#pragma once
#include "Hour.h"

namespace date
{
    class DateH :
        public Hour
    {
    protected:
        unsigned int day;
        unsigned int month;
        unsigned int year;

    public:
        DateH(unsigned int, unsigned int, unsigned int,
            unsigned int day = 0, unsigned int month = 0, unsigned int year = 0);
       
        bool dummy_valid_date(unsigned int, unsigned int, unsigned int);
        bool is_leap(unsigned int);
        unsigned int months_days(unsigned int, unsigned int);
        bool date_checker(unsigned int, unsigned int, unsigned int);
        
        bool operator >(const DateH&) const;
        void print() const;
    };
}

