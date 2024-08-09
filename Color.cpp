#include "Color.h"

Color::Color(int r, int g, int b) : red(r), green(g), blue(b)
{

}

const Color Color::RED(255, 0, 0);

const Color Color::YELLOW(255, 255, 0);

const Color Color::BLUE(0, 0, 255);

const Color Color::GREEN(0, 255, 0);

const Color Color::PURPLE(150, 0, 255);

const Color Color::ORANGE(255, 150, 0);

const Color Color::BLACK(0, 0, 0);

const Color Color::WHITE(255, 255, 255);

const Color Color::GRAY(150, 150, 150);

std::ostream& operator<<(std::ostream& os, const Color& color)
{
	if (color.red == color.green && color.green == color.blue)
	{
		os << 'W';
	}
	else if (color.red < 50)
	{
		os << 'D';
	}
	else
	{
		os << 'G';
	}

	if (color.red == color.blue && color.red > color.green)
	{
		os << 'P';
	}
	if (color.red == color.green && color.red > color.blue)
	{
		os << 'Y';
	}
	if (color.blue == color.green && color.blue > color.red)
	{
		os << 'T';
	}
	if (color.red > color.green && color.red > color.blue)
	{
		os << 'R';
	}
	if (color.green > color.red && color.green > color.blue)
	{
		os << 'G';
	}
	if (color.blue > color.red && color.blue > color.green)
	{
		os << 'B';
	}
	return;
} 