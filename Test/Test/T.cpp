

#include <iostream>
#include <string>
#include <stdlib.h>
//#include <windows.h>
#include<conio.h>
#include <regex>     //ÕıÔò¿â
#include<mmsystem.h> //ÒôÀÖ¿â
#pragma  comment(lib,"winmm.lib")  //¾²Ì¬°ü
using namespace std;

int main()
{
	system("title Csl");
	system("color f4");
	system("mode con: cols=45 lines=10");
	time_t timer = time(NULL);
	cout << "c++time is %s" << ctime(&timer) << endl;
	cout << clock() << endl;;
	system("pause");
	return 0;
}