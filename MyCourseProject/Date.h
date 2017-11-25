#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
using namespace std;

class Date {
    private:
	 	int _day;
	 	int _month;
	 	unsigned int _year;
	public:
		Date();
		Date(int day,int month ,int year);
		~Date(void);

		int getDay();

		void setDay(int day);

		int getMonth();

		void setMonth(int month);

		unsigned int getYear();

		void setYear(unsigned int year);
};


#endif // DATE_H_INCLUDED
