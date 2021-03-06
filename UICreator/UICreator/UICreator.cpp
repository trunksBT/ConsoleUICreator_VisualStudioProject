// Dupa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CMenu.hpp"

using namespace defaultVals;

int main()
{
	std::cout << funs::actionHelp();

	CMenu* cmenu_currentMenu = new CMenu("MenuGlowne", "main", NULL);
	cmenu_currentMenu->runPredefinedCommands({
		{"createMenu", "Podmenu1", "menu1"},
			{"menu1"},
			{"createCommand", "UruchomPrzeglarke", "internet"},
			{"createMenu", "Podmenu1", "menu1"},
			{"back"},
		{"createMenu", "Podmenu2", "menu2"},
			{"menu2"},
			{"createCommand", "Test", "test"},
			{"createCommand", "DefaultCommand", "defcom"},
			{"back"},
		{"createCommand", "NapiszAlaMaKota", "ala"},
		{"print"}
	});
	cmenu_currentMenu->run();

	std::cout << "Dzieki za uzycie aplikacji ~ Mateusz Zimniak" << END_LINE;
}
