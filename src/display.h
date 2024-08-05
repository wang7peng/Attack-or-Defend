#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include <string>
#ifdef _WIN64
	#include <Windows.h>
#else
	#include <unistd.h>
#endif

#include "player.h"
class AI;
class PLAYER;
class DISPLAY
{
	public:
	    DISPLAY(std::string v):version(v){};
	    void logo();
	    void draw(AI &a,PLAYER &p);
	private:
		std::string version;
};
#endif

// improve: 提升一些系统级别的函数，确保能够跨平台
namespace im {
    void sleep(int s);
    void cls();
}