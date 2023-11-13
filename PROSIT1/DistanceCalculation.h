#pragma once
class DistanceCalculation
{
private:
	int x1, y1, x2, y2;
	void ini_obj(int, int, int, int);
public:
	DistanceCalculation(void);
	DistanceCalculation(int, int, int, int);
	double calculateDistance(void);
	void set_x1(int);
	void set_y1(int);
	void set_x2(int);
	void set_y2(int);
	int get_x1(void);
	int get_y1(void);
	int get_x2(void);
	int get_y2(void);
};

