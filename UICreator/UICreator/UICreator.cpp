// Dupa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CMenu.hpp"

using namespace defaultVals;

int main()
{
	std::cout << funs::actionHelp();
	
	CMenu* cmenu_currentMenu = new CMenu("UICreator_MateuszZimniak", "");
	cmenu_currentMenu->run();

	std::cout << "Dzieki za uzycie aplikacji ~ Mateusz Zimniak" << END_LINE;
}
