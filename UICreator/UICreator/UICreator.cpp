// Dupa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CMenu.hpp"

int main()
{
	funs::actionHelp();
	std::cout << defaultVals::END_LINE;
	CMenu* cmenu_currentMenu = new CMenu("UICreator_MateuszZimniak", "");
	cmenu_currentMenu->run();
}
