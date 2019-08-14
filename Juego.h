#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

using namespace sf;
using namespace std;

class juego
{
public:
	juego(int width, int height, std::string title);
	void draw1();
	void gameLoop();
	void eventProcess();
	void mouseProcess();
	void colliderProcess();

private:
	RenderWindow* ventana1;
	int fps;
	Texture* texture1;
	Sprite* sprite1;

	RectangleShape* Mario;

	RectangleShape* Wall1;
	RectangleShape* Wall2;

	RectangleShape* Box1;
	RectangleShape* Box2;
	RectangleShape* Box3;
	RectangleShape* Box4;
	RectangleShape* Box5;
	RectangleShape* Box6;
	RectangleShape* Box7;
	RectangleShape* Box8;
	RectangleShape* Box9;
	RectangleShape* Box10;
	RectangleShape* Box11;
	RectangleShape* Box12;
	RectangleShape* Box13;
	RectangleShape* Box14;
	RectangleShape* Box15;
	RectangleShape* Box16;
	RectangleShape* Box17;
	RectangleShape* Box18;
	RectangleShape* Box19;
	RectangleShape* Box20;
	RectangleShape* Box21;
	RectangleShape* Box22;
	RectangleShape* Box23;
	RectangleShape* Box24;
	RectangleShape* Box25;

	RectangleShape* Ladder1;
	RectangleShape* Ladder2;
	RectangleShape* Ladder3;
	RectangleShape* Ladder4;
	RectangleShape* Ladder5;
	RectangleShape* Ladder6;
	RectangleShape* Ladder7;
	RectangleShape* Ladder8;
	RectangleShape* Ladder9;
	RectangleShape* Ladder10;
	RectangleShape* Ladder11;
	RectangleShape* Ladder12;
	RectangleShape* Ladder13;
	RectangleShape* Ladder14;
	RectangleShape* Ladder15;
	RectangleShape* Ladder16;
	RectangleShape* Ladder17;
	RectangleShape* Ladder18;
	RectangleShape* Ladder19;
	RectangleShape* Pauline1;
	RectangleShape* OilDrum;
	RectangleShape* Hammer1;
	RectangleShape* Hammer2;
	RectangleShape* Barrels;
    RectangleShape* Dk;
	RectangleShape* Barrel1;

	Event* Event1;
	Vector2i MousePosition;

	Clock* Watch1;
	Time* Time1;
	float Time2;

};
