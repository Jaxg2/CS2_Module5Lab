#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color
{
private:
	int red;
	int green;
	int blue;
	static const Color RED;
	static const Color YELLOW;
	static const Color BlUE;
	static const Color GREEN;
	static const Color PURPLE;
	static const Color ORANGE;
	static const Color BLACK;
	static const Color WHITE;
	static const Color GRAY;
public:
	Color(int r, int g, int b);
	friend std::ostream& operator<<(std::ostream& os, const Color& color);
};

#endif