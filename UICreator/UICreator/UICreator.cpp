// Dupa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CMenu.hpp"
#include "CMenuCommand.hpp"

int main()
{
	funs::actionHelp();
	CMenu* cmenu_currentMenu = new CMenu("MainMenu", "CommandMainMenu");
	cmenu_currentMenu->run();
}
//int main()
//{
//	Abstract* dupa1 = new Concrete("Dupa1");
//	Abstract* dupa1_Child1 = new Concrete("Dupa1_Child1", dupa1);
//	Abstract* dupa1_Child2 = new Concrete("Dupa1_Child2", dupa1);
//	Abstract* dupa1_Child1_Child1 = new Concrete("Dupa1_Child1_Child1", dupa1_Child1);
//	Abstract* dupa1_Child1_Child2 = new Concrete("Dupa1_Child1_Child2", dupa1_Child1);
//
//	dupa1->addObject(dupa1_Child1);
//	dupa1->addObject(dupa1_Child2);
//
//	dupa1_Child1->addObject(dupa1_Child1_Child1);
//	dupa1_Child1->addObject(dupa1_Child1_Child2);
//
//	std::cout << dupa1->toStringTree();
//	std::cout << "*********************" << std::endl;
//	std::cout << dupa1_Child1->toStringTree();
//	std::cout << "*********************" << std::endl;
//	std::cout << dupa1_Child1->getParent()->toStringTree();
//
//	delete dupa1;
//}
