// fileReading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <dirent.h>
#include <string>



using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	DIR *dir;
	struct dirent *ent;
	string path = "C:/";

	if ((dir = opendir (path.c_str())) != NULL) {
	  /* print all the files and directories within directory */
	  while ((ent = readdir (dir)) != NULL) {
		printf ("%s\n", ent->d_name);
	  }
	  closedir (dir);
	} else {
	  /* could not open directory */
	  perror ("");
	  return EXIT_FAILURE;
	}
	return 0;


}

