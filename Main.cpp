//Jaxon
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Color.h"
#include "Picture.h"
using namespace std;

//Prints out if the file isn't found
void handleFileNotFound(const string& message)
{
	cout << message << endl;
	exit(EXIT_FAILURE);
}

//In case coordinates are out of range
void handleCoordinateOutOfRange(const string& message)
{
	cout << message << endl;
}

//In case vector is out of range
void handleColorVectorOutOfRange(const string& message)
{
	cout << message << endl;
}

//Reads file and couts if there is an error
void processFile(const string& filename, Picture& picture)
{
	ifstream file(filename);
	if (!file.is_open())
	{
		handleFileNotFound("File not found: " + filename);
	}
	int x;
	int y;
	int r;
	int g;
	int b;

	while (file >> x >> y >> r >> g >> b)
	{
		if (x < 0 || y < 0)
		{
			handleCoordinateOutOfRange("Coordinate out of range: " + x + y);
		}
		if (r < 0 || r > 255)
		{
			handleColorVectorOutOfRange("Error, Red out of range: " + x + y);
			r = max(0, min(255, r));
		}
		if (g < 0 || g > 255)
		{
			handleColorVectorOutOfRange("Error, Green out of range: " + x + y);
			g = max(0, min(255, g));
		}
		if (b < 0 || b > 255)
		{
			handleColorVectorOutOfRange("Error,  Blue out of range: " + x + y);
			b = max(0, min(255, r));
		}
		picture.setPixel(x, y, Color(r, g, b));
	}
}

int main()
{

	//Exception
	try
	{
		Picture picture(10, 10);
		processFile("picturetest.txt", picture);
		cout << picture;
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}