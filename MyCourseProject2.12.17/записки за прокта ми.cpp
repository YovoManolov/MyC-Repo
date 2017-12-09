class Dates{
	private:
	public: 
		Dates();
		Dates(with params);
}


class Date {
	 private:
	 	int _day;
	 	int _month;
	 	int _year;
	public:

		Date(){}
		Date(int day,int month ,int year) 
		: _day(day),_month(month),_year(year)
		{}
		~Student(void) {}

		int getDay(){
			return _day;
		};

		void setDay()
		int getMonth(){
			return _month;
		};
		int getYear(){
			return _year;
		};

}



class Student{
private:
	string _name;
	unsigned long int _fn ;
	Date _birthDate;
	float _averegeSuccess;
public :
	Student();
	Student(string name ,
			unsigned long int fn ,
			Date birthDate,		
			float averageSuccess
	) 
	: _name(name), _fn(fn), _birthDate(birthDate), _avarageSuccess(averageSucecss)
	{}

	~Student(void) {}
}


