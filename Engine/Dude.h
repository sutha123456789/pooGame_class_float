#pragma once
#include"Graphics.h"
#include"Keyboard.h"
class Dude
{
public :
	void Draw(Graphics& gfx)const;
	void ClampToScreen();
	void Update(const Keyboard& kbd);
	float GetX() const;
	float GetY() const;
	float GetWidth()const;
	float GetHeight()const;
private:
	float x = 400.0f;
	float   y = 300.0f;
	static constexpr int speed = 3.0f;
	static constexpr int width = 20.0f;
	static constexpr int height = 20.0f;
};