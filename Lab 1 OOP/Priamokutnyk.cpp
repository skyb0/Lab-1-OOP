#include <iostream>

using namespace std;

class Priamokutnyk
{
private:
	double vysot;
	double shyr;

public:

	Priamokutnyk(double vysot, double shyr)
	{
		this->vysot = vysot;
		this->shyr = shyr;
	}
	~Priamokutnyk() { }

	double GetShyr()
	{
		return shyr;
	}
	double GetVysot()
	{
		return vysot;
	}

	void SetVysot(double value)
	{
		if ((value == (double)value || value == (int)value) && value > 0)
		{
			this->vysot = value;
		}
		else
		{
			cout << "wrong value of 'Vysot'" << endl;
		}
	}
	void SetShyr(double value)
	{
		if ((value == (double)value || value == (int)value) && value > 0)
		{
			this->shyr = value;
		}
		else
		{
			cout << "wrong value of 'shyr'" << endl;
		}
	}

	double Plosha(Priamokutnyk& obj)
	{
		return (vysot * shyr);
	}
	double Perim(Priamokutnyk& obj)
	{
		return 2 * (vysot + shyr);
	}
	void PrintInf(Priamokutnyk& pr)
	{
		cout << "Висота: " << pr.GetVysot() << " Ширина: " << pr.GetShyr() << " Периметр: " << pr.Perim(pr) << " Площа: " << pr.Plosha(pr) << endl;
	}
};
