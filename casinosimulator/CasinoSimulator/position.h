#pragma once
#include "Location.h"
ref class Position
{
private:
	bool top, bottom, left, right;
	array<Location2^, 1> ^locations = gcnew array<Location2^, 1>(8);
	int pointer=0;
public:
	Position(bool top, bool bottom, bool left, bool right)
	{
		int x, y;
		if (bottom == true)
		{
			x = 199;
			y = 650;
			for (int i = 0; i < 8;i++)
			{
				locations[i] = gcnew Location2(x , y);
				x += 50;
			}
		}
		if (top == true)
		{
			x = 199;
			y = 273-100;
			for (int i = 0; i < 8; i++)
			{
				locations[i] = gcnew Location2(x, y);
				x += 50;
			}
		}
		if (left == true)
		{
			x = 78;
			y = 173+50;
			for (int i = 0; i < 8; i++)
			{
				locations[i] = gcnew Location2(x, y);
				y += 50;
			}
		}
		if (right == true)
		{
			x = 798-108;
			y = 173+50;
			for (int i = 0; i < 8; i++)
			{
				locations[i] = gcnew Location2(x, y);
				y+=50;
			}
		}
	}
	Location2^ getLocation()
	{
		pointer++;
		return locations[pointer-1] ;
	}
	
};
