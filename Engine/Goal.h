#pragma once

#include"Graphics.h"
#include"Dude.h"
class Goal
{
public:
	Goal(int in_x, int in_y)
		:
		x(in_x),
		y(in_y)
	{}
	void Draw(Graphics& gfx)const
	{
		gfx.DrawRectDim(int(x),int( y),int( dimention), dimention, c);
	}
	bool TestCollision(const Dude& dude)const
	{

		const float duderight = dude.GetX() + dude.GetWidth();
		const float dudebottom = dude.GetY() + dude.GetHeight();
		const float  pooright = x + dimention;
		const float poobottom = y + dimention;
		return
			duderight >= x &&
			dude.GetX() <= pooright &&
			dudebottom >= y &&
			dude.GetY() <= poobottom;
	}
	void Respawn(float in_x, float in_y)
	{
		x = in_x;
		y = in_y;

	}
	void UpdateColor()
	{
		if (colorIncreasing)
		{
			if (c.GetR() >= 253)
			{
				colorIncreasing = false;
			}
			else
			{
				c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
			}

		}
		else
		{
			if (c.GetR() <= 127)
			{
				colorIncreasing = true;
			}
			else
			{
				c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
			}
		}

	}

private :
	static constexpr float  dimention = 20;
	Color c = { 127,0,0 };
	bool colorIncreasing = true;
	float x;
	float y;

};