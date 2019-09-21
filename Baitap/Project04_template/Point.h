#pragma once
#include<iostream>
using  namespace std;
template<typename T>
class Point
{
public:
	T xVal, yVal;
public:
	Point(T, T);
	~Point();
	void Show();
	friend ostream& operator <<(ostream&, const Point<T>&);
	//friend Point operator+(const Point<T>&, const Point<T>&);
	Point operator+(const Point&);
	//Point operator+(const Point<T>&);


};

