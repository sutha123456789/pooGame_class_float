#pragma once

#include"Graphics.h"
class  Circle
{
public:
	void Draw(Graphics& gfx)const
	{
		gfx.DrawCircle(int(x), int(y), radius, c);
	}
private :
	static constexpr Color c = Colors::Blue;
	int radius = 120;
	int x = 200;
	int y = 300;
};
