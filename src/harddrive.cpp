#include <iostream>
#include <string>
#include "harddrive.h"

void HardDrive::formatHardDrive()
{
	FILE * fin = fopen("harddrive.hdf", "w+");
	char bin[512], var = '/0';
	for(int i = 0; i < 512; i++)
	{
		bin[i] = var;
	}
	
	fclose(fin);
}

void HardDrive::readHardDrive()
{
	
}