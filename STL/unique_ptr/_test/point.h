#include <ostream>

class Point {
public:
	Point(int x, int y, int z) : mx{x}, my{y}, mz{z} {}
	friend std::ostream& operator<<(std::ostream& os, const Point& p)
	{
		return os << '(' << p.mx << ", " << p.my << ", " << p.mz << ')';
	}

	Point& set(int x, int y, int z)
	{
		mx = x;
		my = y;
		mz = z;
		return *this;
	}

	int get_x()const { return mx; }
	int get_y()const { return my; }
	int get_z()const { return mz; }
	//...
private:
	int mx{}, my{}, mz{};
};


