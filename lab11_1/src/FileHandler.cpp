/*
 * FileHandler.cpp
 *
 *  Created on: 07-01-2013
 *      Author: wemstar
 */

#include "FileHandler.h"

namespace oop {
FileHandler::FileHandler(int n,char** agrv)
{
	for(int i=1;i< n;++i)
	{
		_tab_plikow[agrv[i]]=new std::ifstream(agrv[i]);

	}
}
FileHandler::~FileHandler()
{
	for(tablica_plik::iterator i=_tab_plikow.begin();i!= _tab_plikow.end();++i)
	{
		i->second->close();
		delete i->second;
	}
}
} /* namespace oop */
