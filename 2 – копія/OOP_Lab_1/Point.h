#include <string> 
#include <sstream> 
using namespace std;

class Point
{
private:
	double x;
	double y;
	double x2;
	double y2;
	
public:
	double GetFirst() const { return x; }
	double GetSecond() const { return y; }
	double GetFirst2() const { return x2; }
	double GetSecond2() const { return y2; }
	bool Init(double f, double s, double f2, double s2);
	void Read();
	void Display() const;
	double tz1();
	double tz2();
	double tz3();
	
};


