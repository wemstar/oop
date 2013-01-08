/*
 * FileHandler.h
 *
 *  Created on: 07-01-2013
 *      Author: wemstar
 */

#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_
#include <map>
#include "Plik.h"
namespace oop {

/*
 *
 */
class FileHandler {
public:
	typedef std::map<const char *, std::ifstream *> tablica_plik;
	FileHandler(int,char**);
	~FileHandler();
	Linie operator[](char* nazwa)
	{
		return Linie(_tab_plikow[nazwa]);
	}
private:
	tablica_plik _tab_plikow;
};

} /* namespace oop */
#endif /* FILEHANDLER_H_ */
