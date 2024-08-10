#include "Color.h"
#include "Picture.h"

//Constructor
Picture::Picture(int width, int height) : width(width), height(height), pixels(height, vector <Color>(width)
{

}

//Setter for pixels
void Picture::setPixel(int x, int y, const Color& c)
{
	if (x >= 0 && x < width && y >= 0 && y < height)
	{
		pixels[y][x] = c;
	}
}

//Getter for height
int Picture::getHeight() const
{
	return height;
}

//Getter for width
int Picture::getWidth() const
{
	return width;
}

//Couts picture
std::ostream& operator<<(std::ostream& os, const Picture& picture)
{
	for (const auto& row : picture.pixels)
	{
		for (const auto& col : row)
		{
			os << col << " ";
		}
		os << endl;
	}
	return os;
}
