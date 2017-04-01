// CRLDemoApp.cpp : main project file.
//C++/CLI or C++ .Net or Managed C++

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");

	int val = 10;
	System::String^ str ="Jugal";
	
	int retrunVal = change(val,str);
	Console::ReadLine();
    return 0;
}


int change(int val, System::String^ str)
{
	val = 20;
	str ="jugal1";
	return 30;
}
