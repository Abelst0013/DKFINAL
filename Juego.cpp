#include "juego.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

juego::juego(int width, int height, std::string title)
{
	fps = 60;

	ventana1 = new RenderWindow(VideoMode(width, height), title.c_str());

	ventana1->setFramerateLimit(fps);

	Watch1 = new Clock();

	Time1 = new Time();

	Time2 = 0;

	texture1 = new Texture;

	sprite1 = new Sprite;

	texture1->loadFromFile("L1.png");

	sprite1->setTexture(*texture1);

	Event1 = new Event; 

	Mario = new RectangleShape({ 30,50 });
	Mario->setFillColor(Color::Magenta);
	Mario->setPosition(185, 870);

	Wall1 = new RectangleShape({ 45,900 });
	Wall1->setFillColor(Color::Red);
	Wall1->setPosition(0, 0);

	Wall2 = new RectangleShape({ 50,900 });
	Wall2->setFillColor(Color::Red);
	Wall2->setPosition(755, 0);

	Box1 = new RectangleShape({ 200, 25 });
	Box1->setFillColor(Color::Red);
	Box1->setPosition(0, 870);

	Box2 = new RectangleShape({ 200,25 });
	Box2->setFillColor(Color::Red);
	Box2->setPosition(200, 865);

	Box3 = new RectangleShape({ 200,25 });
	Box3->setFillColor(Color::Red);
	Box3->setPosition(400, 855);

	Box4 = new RectangleShape({ 200,25 });
	Box4->setFillColor(Color::Red);
	Box4->setPosition(600, 845);

	Box5 = new RectangleShape({ 200, 25 });
	Box5->setFillColor(Color::Red);
	Box5->setPosition(0, 735);

	Box6 = new RectangleShape({ 200, 25 });
	Box6->setFillColor(Color::Red);
	Box6->setPosition(200, 745);

	Box7 = new RectangleShape({ 200, 25 });
	Box7->setFillColor(Color::Red);
	Box7->setPosition(400, 755);

	Box8 = new RectangleShape({ 75, 25 });
	Box8->setFillColor(Color::Red);
	Box8->setPosition(600, 765);

	Box9 = new RectangleShape({ 75, 25 });
	Box9->setFillColor(Color::Red);
	Box9->setPosition(125, 655);

	Box10 = new RectangleShape({ 200, 25 });
	Box10->setFillColor(Color::Red);
	Box10->setPosition(200, 645);

	Box11 = new RectangleShape({ 200, 25 });
	Box11->setFillColor(Color::Red);
	Box11->setPosition(400, 635);

	Box12 = new RectangleShape({ 200, 25 });
	Box12->setFillColor(Color::Red);
	Box12->setPosition(600, 625);

	Box13 = new RectangleShape({ 200, 25 });
	Box13->setFillColor(Color::Red);
	Box13->setPosition(0, 515);

	Box14 = new RectangleShape({ 200, 25 });
	Box14->setFillColor(Color::Red);
	Box14->setPosition(200, 525);

	Box15 = new RectangleShape({ 200, 25 });
	Box15->setFillColor(Color::Red);
	Box15->setPosition(400, 535);

	Box16 = new RectangleShape({ 75, 25 });
	Box16->setFillColor(Color::Red);
	Box16->setPosition(600, 545);

	Box17 = new RectangleShape({ 75, 25 });
	Box17->setFillColor(Color::Red);
	Box17->setPosition(125, 435);

	Box18 = new RectangleShape({ 200, 25 });
	Box18->setFillColor(Color::Red);
	Box18->setPosition(200, 425);

	Box19 = new RectangleShape({ 200, 25 });
	Box19->setFillColor(Color::Red);
	Box19->setPosition(400, 415);

	Box20 = new RectangleShape({ 200, 25 });
	Box20->setFillColor(Color::Red);
	Box20->setPosition(600, 405);

	Box21 = new RectangleShape({ 200, 25 });
	Box21->setFillColor(Color::Red);
	Box21->setPosition(0, 300);

	Box22 = new RectangleShape({ 200, 25 });
	Box22->setFillColor(Color::Red);
	Box22->setPosition(200, 305);

	Box23 = new RectangleShape({ 200, 25 });
	Box23->setFillColor(Color::Red);
	Box23->setPosition(400, 315);

	Box24 = new RectangleShape({ 75, 25 });
	Box24->setFillColor(Color::Red);
	Box24->setPosition(600, 325);

	Box25 = new RectangleShape({ 150, 25 });
	Box25->setFillColor(Color::Red);
	Box25->setPosition(290, 205);


	Pauline1 = new RectangleShape({ 40,50 });
	Pauline1->setFillColor(Color::Magenta);
	Pauline1->setPosition(290, 155);


	Ladder1 = new RectangleShape({ 20, 15 });
	Ladder1->setFillColor(Color::Blue);
	Ladder1->setPosition(275,770);

	Ladder2 = new RectangleShape({ 20, 45 });
	Ladder2->setFillColor(Color::Blue);
	Ladder2->setPosition(275, 820);

	Ladder3 = new RectangleShape({ 20, 55 });
	Ladder3->setFillColor(Color::Blue);
	Ladder3->setPosition(615, 790);

	Ladder4 = new RectangleShape({ 20, 150});
	Ladder4->setFillColor(Color::Blue);
	Ladder4->setPosition(265, 155);

	Ladder5 = new RectangleShape({ 20, 150 });
	Ladder5->setFillColor(Color::Blue);
	Ladder5->setPosition(225, 155);

	Ladder6 = new RectangleShape({ 20, 75 });
	Ladder6->setFillColor(Color::Blue);
	Ladder6->setPosition(245, 450);

	Ladder7 = new RectangleShape({ 20, 15 });
	Ladder7->setFillColor(Color::Blue);
	Ladder7->setPosition(290, 330);  //15

	Ladder8 = new RectangleShape({ 20, 45 });
	Ladder8->setFillColor(Color::Blue);
	Ladder8->setPosition(290, 380);

	Ladder9 = new RectangleShape({ 20, 55 });
	Ladder9->setFillColor(Color::Blue);
	Ladder9->setPosition(615, 350);

	Ladder10 = new RectangleShape({ 20, 55 });
	Ladder10->setFillColor(Color::Blue);
	Ladder10->setPosition(615, 570);

	Ladder11 = new RectangleShape({ 20, 15 });
	Ladder11->setFillColor(Color::Blue);
	Ladder11->setPosition(565, 440);

	Ladder12 = new RectangleShape({ 20, 45 });
	Ladder12->setFillColor(Color::Blue);
	Ladder12->setPosition(565, 490);

	Ladder13 = new RectangleShape({ 20, 75 });
	Ladder13->setFillColor(Color::Blue);
	Ladder13->setPosition(325, 670);

	Ladder14 = new RectangleShape({ 20, 95 });
	Ladder14->setFillColor(Color::Blue);
	Ladder14->setPosition(390, 550);

	Ladder15 = new RectangleShape({ 20, 85 });
	Ladder15->setFillColor(Color::Blue);
	Ladder15->setPosition(420, 230);

	Ladder16 = new RectangleShape({ 20, 55 });
	Ladder16->setFillColor(Color::Blue);
	Ladder16->setPosition(145, 460);

	Ladder17 = new RectangleShape({ 20, 55 });
	Ladder17->setFillColor(Color::Blue);
	Ladder17->setPosition(145, 680);

	Ladder18 = new RectangleShape({ 20, 15 });
	Ladder18->setFillColor(Color::Blue);
	Ladder18->setPosition(225, 550);

	Ladder19 = new RectangleShape({ 20, 45 });
	Ladder19->setFillColor(Color::Blue);
	Ladder19->setPosition(225, 600);

	OilDrum = new RectangleShape({ 30, 50 });
	OilDrum->setFillColor(Color::Cyan);
	OilDrum->setPosition(125, 820);

	Hammer1 = new RectangleShape({ 25, 25 });
	Hammer1->setFillColor(Color::Green);
	Hammer1->setPosition(575, 695);

	Hammer2 = new RectangleShape({ 25, 25 });
	Hammer2->setFillColor(Color::Green);
	Hammer2->setPosition(125, 375);

	Barrels = new RectangleShape({ 75, 85 });
	Barrels->setFillColor(Color::Yellow);
	Barrels->setPosition(50,215 );

	Dk = new RectangleShape({ 90, 90 });
	Dk->setFillColor(Color::White);
	Dk->setPosition(130, 215);

	Barrel1 = new RectangleShape({ 10,10 });
	Barrel1->setFillColor(Color::Yellow);
	Barrel1->setPosition(150, 310);

	gameLoop();
}

void juego::draw1()
{
	ventana1->clear();

	ventana1->draw(*sprite1);

	ventana1->draw(*Pauline1);

	ventana1->draw(*Wall1);
	ventana1->draw(*Wall2);

	ventana1->draw(*Box1);
	ventana1->draw(*Box2);
	ventana1->draw(*Box3);
	ventana1->draw(*Box4);
	ventana1->draw(*Box5);
	ventana1->draw(*Box6);
	ventana1->draw(*Box7);
	ventana1->draw(*Box8);
	ventana1->draw(*Box9);
	ventana1->draw(*Box10);
	ventana1->draw(*Box11);
	ventana1->draw(*Box12);
	ventana1->draw(*Box13);
	ventana1->draw(*Box14);
	ventana1->draw(*Box15);
	ventana1->draw(*Box16);
	ventana1->draw(*Box17);
	ventana1->draw(*Box18);
	ventana1->draw(*Box19);
	ventana1->draw(*Box20);
	ventana1->draw(*Box21);
	ventana1->draw(*Box22);
	ventana1->draw(*Box23);
	ventana1->draw(*Box24);
	ventana1->draw(*Box25);

	ventana1->draw(*Ladder1);
	ventana1->draw(*Ladder2);
	ventana1->draw(*Ladder3);
	ventana1->draw(*Ladder4);
	ventana1->draw(*Ladder5);
	ventana1->draw(*Ladder6);
	ventana1->draw(*Ladder7);
	ventana1->draw(*Ladder8);
	ventana1->draw(*Ladder9);
	ventana1->draw(*Ladder10);
	ventana1->draw(*Ladder11);
	ventana1->draw(*Ladder12);
	ventana1->draw(*Ladder13);
	ventana1->draw(*Ladder14);
	ventana1->draw(*Ladder15);
	ventana1->draw(*Ladder16);
	ventana1->draw(*Ladder17);
	ventana1->draw(*Ladder18);
	ventana1->draw(*Ladder19);

	ventana1->draw(*OilDrum);
	ventana1->draw(*Hammer1);
	ventana1->draw(*Hammer2);
	ventana1->draw(*Barrels);

	ventana1->draw(*Dk);
	ventana1->draw(*Barrel1);

	ventana1->draw(*Mario);

	ventana1->display();
}

void juego::gameLoop()
{
	while(ventana1->isOpen())
	{
		*Time1 = Watch1->getElapsedTime();
		if (Time1->asSeconds() > 1 / fps)
		{
			Time2 += 0.5; 
			if (Time2 > 2)
			{
				Barrel1->setPosition((Barrel1->getPosition().x),(Barrel1->getPosition().y+5));
				Mario->setPosition((Mario->getPosition().x), (Mario->getPosition().y + 10));
				Time2 = 0;
			}
			mouseProcess();
			eventProcess();
			colliderProcess();
			draw1();
			Watch1->restart();
		}
	}
}

void juego::eventProcess()
{
	while (ventana1->pollEvent(*Event1))
	{
		switch (Event1->type)
		{
		case Event::Closed:
			ventana1->close();
			exit(1);
			break;

		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::D))
			{
				Mario->setPosition(Mario->getPosition().x + 10, Mario->getPosition().y);
			}
			else if (Keyboard::isKeyPressed(Keyboard::A))
			{
				Mario->setPosition(Mario->getPosition().x - 10, Mario->getPosition().y);
			}
			else if (Keyboard::isKeyPressed(Keyboard::Right))
			{
				Mario->setPosition(Mario->getPosition().x + 10, Mario->getPosition().y - 85);
			}
			else if (Keyboard::isKeyPressed(Keyboard::Left))
			{
				Mario->setPosition(Mario->getPosition().x - 10, Mario->getPosition().y - 85);
			}

		break;

		case Event::MouseButtonPressed:
			if (Mouse::isButtonPressed(Mouse::Left))
			{
				Barrel1->setPosition(Vector2f(MousePosition));
			}
		}
	}
}

void juego::mouseProcess()
{
	MousePosition = Mouse::getPosition(*ventana1);
	MousePosition = (Vector2i)ventana1->mapPixelToCoords(MousePosition);
}

void juego::colliderProcess()
{
	FloatRect Mouse_Position(Vector2f(MousePosition), { 32,32 });
	if (Mario->getGlobalBounds().intersects(Mouse_Position))
	{
		Mario->setPosition(Vector2f(MousePosition));
	}

	if (Mario->getGlobalBounds().intersects(Barrel1->getGlobalBounds()))
	{
		Barrel1->rotate(3);
	}

	if (Mario->getGlobalBounds().intersects(Box1->getGlobalBounds())) //1
	{
		Mario->setPosition(Mario->getPosition().x, 820);
	}

	if (Mario->getGlobalBounds().intersects(Box2->getGlobalBounds())) //2
	{
		Mario->setPosition(Mario->getPosition().x, 815);
	}

	if (Mario->getGlobalBounds().intersects(Box3->getGlobalBounds())) //3
	{
		Mario->setPosition(Mario->getPosition().x, 805);
	}

	if (Mario->getGlobalBounds().intersects(Box4->getGlobalBounds())) //4
	{
		Mario->setPosition(Mario->getPosition().x, 795);
	}

	if (Mario->getGlobalBounds().intersects(Box5->getGlobalBounds())) //5
	{
		Mario->setPosition(Mario->getPosition().x, 685);
	}

	if (Mario->getGlobalBounds().intersects(Box6->getGlobalBounds())) //6
	{
		Mario->setPosition(Mario->getPosition().x, 695);
	}

	if (Mario->getGlobalBounds().intersects(Box7->getGlobalBounds()))  //7
	{
		Mario->setPosition(Mario->getPosition().x, 705);
	}

	if (Mario->getGlobalBounds().intersects(Box8->getGlobalBounds()))  //8
	{
		Mario->setPosition(Mario->getPosition().x, 715);
	}

	if (Mario->getGlobalBounds().intersects(Box9->getGlobalBounds())) //9
	{
		Mario->setPosition(Mario->getPosition().x, 605);
	}

	if (Mario->getGlobalBounds().intersects(Box10->getGlobalBounds()))  //10
	{
		Mario->setPosition(Mario->getPosition().x, 595);
	}

	if (Mario->getGlobalBounds().intersects(Box11->getGlobalBounds())) //11
	{
		Mario->setPosition(Mario->getPosition().x, 585);
	}

	if (Mario->getGlobalBounds().intersects(Box12->getGlobalBounds())) //12
	{
		Mario->setPosition(Mario->getPosition().x, 575);
	}

	if (Mario->getGlobalBounds().intersects(Box13->getGlobalBounds())) //13
	{
		Mario->setPosition(Mario->getPosition().x, 465);
	}

	if (Mario->getGlobalBounds().intersects(Box14->getGlobalBounds())) //14
	{
		Mario->setPosition(Mario->getPosition().x, 475);
	}

	if (Mario->getGlobalBounds().intersects(Box15->getGlobalBounds())) //15
	{
		Mario->setPosition(Mario->getPosition().x, 485);
	}

	if (Mario->getGlobalBounds().intersects(Box16->getGlobalBounds())) //16
	{
		Mario->setPosition(Mario->getPosition().x, 495);
	}

	if (Mario->getGlobalBounds().intersects(Box17->getGlobalBounds()))  //17
	{
		Mario->setPosition(Mario->getPosition().x, 385);
	}

	if (Mario->getGlobalBounds().intersects(Box18->getGlobalBounds()))  //18
	{
		Mario->setPosition(Mario->getPosition().x, 375);
	}

	if (Mario->getGlobalBounds().intersects(Box19->getGlobalBounds())) //19
	{
		Mario->setPosition(Mario->getPosition().x, 365);
	}

	if (Mario->getGlobalBounds().intersects(Box20->getGlobalBounds()))  //20
	{
		Mario->setPosition(Mario->getPosition().x, 355);
	}
	if (Mario->getGlobalBounds().intersects(Box21->getGlobalBounds())) //21
	{
		Mario->setPosition(Mario->getPosition().x, 250);
	}

	if (Mario->getGlobalBounds().intersects(Box22->getGlobalBounds())) //22
	{
		Mario->setPosition(Mario->getPosition().x, 255);
	}

	if (Mario->getGlobalBounds().intersects(Box23->getGlobalBounds())) //23
	{
		Mario->setPosition(Mario->getPosition().x, 265);
	}

	if (Mario->getGlobalBounds().intersects(Box24->getGlobalBounds())) //24
	{
		Mario->setPosition(Mario->getPosition().x, 275);
	}

	if (Mario->getGlobalBounds().intersects(Box25->getGlobalBounds())) //25
	{
		Mario->setPosition(Mario->getPosition().x, 155);
	}

	if (Barrel1->getGlobalBounds().intersects(Wall1->getGlobalBounds())) //Wall1
	{
		Barrel1->setPosition(Barrel1->getPosition().x + 100, (Barrel1->getPosition().y));
	}

	if (Barrel1->getGlobalBounds().intersects(Wall2->getGlobalBounds())) //Wall1
	{
		Barrel1->setPosition(Barrel1->getPosition().x - 100, (Barrel1->getPosition().y));
	}

	if (Barrel1->getGlobalBounds().intersects(Box1->getGlobalBounds())) //B1
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 865);
	}

	if (Barrel1->getGlobalBounds().intersects(Box2->getGlobalBounds())) //2
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 865);
	}

	if (Barrel1->getGlobalBounds().intersects(Box3->getGlobalBounds())) //3
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 855);
	}

	if (Barrel1->getGlobalBounds().intersects(Box4->getGlobalBounds())) //4
	{	
		Barrel1->setPosition(Barrel1->getPosition().x-3, 845);
	}	

	if (Barrel1->getGlobalBounds().intersects(Box5->getGlobalBounds())) //5
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 735);
	}

	if (Barrel1->getGlobalBounds().intersects(Box6->getGlobalBounds())) //6
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 745);
	}

	if (Barrel1->getGlobalBounds().intersects(Box7->getGlobalBounds()))  //7
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 755);
	}

	if (Barrel1->getGlobalBounds().intersects(Box8->getGlobalBounds()))  //8
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 765);
	}

	if (Barrel1->getGlobalBounds().intersects(Box9->getGlobalBounds())) //9
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 655);
	}

	if (Barrel1->getGlobalBounds().intersects(Box10->getGlobalBounds()))  //10
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 645);
	}

	if (Barrel1->getGlobalBounds().intersects(Box11->getGlobalBounds())) //11
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 635);
	}

	if (Barrel1->getGlobalBounds().intersects(Box12->getGlobalBounds())) //12
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 625);
	}

	if (Barrel1->getGlobalBounds().intersects(Box13->getGlobalBounds())) //13
	{	
		Barrel1->setPosition(Barrel1->getPosition().x+3, 515);
	}	
	if (Barrel1->getGlobalBounds().intersects(Box14->getGlobalBounds())) //14
	{	
		Barrel1->setPosition(Barrel1->getPosition().x+3, 525);
	}	
		
	if (Barrel1->getGlobalBounds().intersects(Box15->getGlobalBounds())) //15
	{	
		Barrel1->setPosition(Barrel1->getPosition().x+3, 535);
	}	
		
	if (Barrel1->getGlobalBounds().intersects(Box16->getGlobalBounds())) //16
	{	
		Barrel1->setPosition(Barrel1->getPosition().x+3, 545);
	}	
		
	if (Barrel1->getGlobalBounds().intersects(Box17->getGlobalBounds()))  //17
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 435);
	}

	if (Barrel1->getGlobalBounds().intersects(Box18->getGlobalBounds()))  //18
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 425);
	}

	if (Barrel1->getGlobalBounds().intersects(Box19->getGlobalBounds())) //19
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 415);
	}

	if (Barrel1->getGlobalBounds().intersects(Box20->getGlobalBounds()))  //20
	{
		Barrel1->setPosition(Barrel1->getPosition().x-3, 405);
	}
	if (Barrel1->getGlobalBounds().intersects(Box21->getGlobalBounds())) //21
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 310);
	}

	if (Barrel1->getGlobalBounds().intersects(Box22->getGlobalBounds())) //22
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 315);
	}

	if (Barrel1->getGlobalBounds().intersects(Box23->getGlobalBounds())) //23
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 325);
	}

	if (Barrel1->getGlobalBounds().intersects(Box24->getGlobalBounds())) //24
	{
		Barrel1->setPosition(Barrel1->getPosition().x+3, 340);
	}

	if (Barrel1->getGlobalBounds().intersects(Box25->getGlobalBounds())) //25
	{
		Barrel1->setPosition(Barrel1->getPosition().x, 155);
	}

	if (Barrel1->getGlobalBounds().intersects(OilDrum->getGlobalBounds())) //Delete
	{
		Barrel1->setPosition(Barrel1->getPosition().x, 310);
	}
}
