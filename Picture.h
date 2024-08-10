#ifndef PICTURE_H
#define PICTURE_H
#include "Color.h"
#include <vector>
#include <iostream>
using namespace std;

class Picture
{
private:
	vector <Color> pixels;
	int width;
	int height;

public:
	Picture(int width, int height);
	void setPixel(int x, int y, const Color& c);
	int getHeight() const;
	int getWidth() const;
	friend std::ostream& operator<<(std::ostream& os, const Picture& picture);
};

#endif