#include <iostream>
#include <string>
#include <cstdlib>

#include "display.h"
#include "AI.h"

void im::sleep(int s)
{
  	#ifdef _WIN64
		Sleep(s);
	#elif __linux__
	    usleep(100 * s);
	#else
		// exit(1);
	#endif
}

void im::cls()
{
	#ifdef _WIN64
		std::system("cls");
	#elif __linux__
	    std::system("clear");
	#else
		// exit(1);
	#endif

}

void DISPLAY::logo()
{
	std::cout<<"               "<<"----------Attack or Defend I [Console 32bit]----------"<<std::endl;
	im::sleep(1000);
	std::cout<<"                    "<<"-------------By Zhou Leyi-------------"<<std::endl;
	im::sleep(1000);
	std::cout<<"                        "<<">>>>>>>>>"<<this->version<<"<<<<<<<<"<<std::endl;
	im::sleep(1500);
	im::cls();
}

void DISPLAY::draw(AI &a,PLAYER &p)
{
	im::cls();
	std::cout<<"********************************************************"<<std::endl;
	std::cout<<"我方"<<"                         "<<"敌方"<<std::endl;
	for(int n=1;n<=a.Aamount;n++)
	{
		if(n>p.Pamount)
		{
			std::cout<<std::endl; 
			std::cout<<"                                   ""["<<n<<"]"<<a.Adata[3*n-2]<<std::endl;
			std::cout<<"                                   "<<"敌方:"<<a.Adata[3*n]<<std::endl;
		}
		else
		{
		std::cout<<std::endl;
		std::cout<<"["<<n<<"]"<<p.Pdata[3*n-2]<<std::flush;
		std::cout<<"                      ""["<<n<<"]"<<a.Adata[3*n-2]<<std::endl;
		std::cout<<"血量:"<<p.Pdata[3*n]<<std::flush;
		std::cout<<"                         "<<"血量:"<<a.Adata[3*n]<<std::endl;
	    }
	}
	std::cout<<"********************************************************By Zhou Leyi"<<std::endl; 
}
