#pragma once
#include <iostream>
#include <string>
#include <SDL.h>

#include "surface.h"

using std::string;

namespace Tmpl8 {
	class Animation
	{
	public:
		//basic info
		int numberOfFrames;
		int frameWidth, frameHeight;
		int offsetX, offsetY; //frame pivot point
		float frameDuration; //how long single frame shows on screen 1 = 1 second, 0.5 = 500ms
		Sprite* spriteSheet; //reference to existing texture

		void setup(char* spriteSheetFile, int numberOfFrames, float frameDuration, int offsetX, int offsetY);
		~Animation();
		void draw(Surface* renderer, int frame, int x, int y);
	};
};
