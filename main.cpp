#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<cstring>
#include<windows.h>
#include<vector>
#include<string>
#include<algorithm>
#include "student.h"
#include "teacher.h"
#include "person.h"

using namespace std;
int main()
{
	student s1, s2, s3, s4, s;
	s1.addstudent(25, "youssef shaaban", 20, "+20 1551080257", "male");
	s2.addstudent(20, "mohammed mofreh", 20, "+20 1023456789", "male");
	s3.addstudent(50, "mohammed kamal", 21, "+20 1098765432", "male");
	s4.addstudent(4,   "ziad hossam",   7,  "+20 1065478934", "male");
	//________________________________________________________________
	teacher t1, t2, t3, t4, t;
	t1.addteacher(13, "youssef shaaban", 20, "+20 1551080257", "male");
	t2.addteacher(20, "mohammed mofreh", 20, "+20 1023456789", "male");
	t3.addteacher(50, "mohammed kamal", 21, "+20 1098765432", "male");
	t4.addteacher(4, "ziad hossam", 7, "+20 1065478934", "male");
	//________________________________________________________________
	while (1)
	{
		system("color 71");
		char st;
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                       WELCOME TO                                   |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                    |@@\n";
		cout << "\t\t\t\t\t@@|                                       our school !                                 |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                    |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                    |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                    |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                    |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                            Made by (mohamed mefrah /mohamed kamal /youssef shaaban)             |@@\n";
		cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

		cout << "Press any key to choose another option...";
		//getch();
		system("cls");
		cout << endl;
		cout << "                                             Welcome to our school !                    " << endl;
		cout << "                                             --------------------------                    " << endl << endl;

		cout << " If you are a student, press s :  " << endl;
		cout << " If you are a manager, press M :  " << endl;

		cin >> st;
		if (st == 'S' || st == 's')
		{
			int i;
			condition:	cout << "########   welcome to our school !  #########             " << endl;
			cout << "          ----------------------                   " << endl;
			cout << "########   Hello ! ##########                   " << endl;
			cout << "          --------                   " << endl;
			cout << "To review your application, please enter your id : " << endl;
			cin >> i;
			s.getstudent(i);
		}
		else if (st == 'M' || st == 'm')
		{
			int x, pass = 12345;
			cout << "If you are the administrator, enter the password : " << endl;
			cin >> x;
			if (x == pass)
			{
				char b;
				for (int v = 0; v < 3;) {
					int i;

					cout << "                                                  Hello ENG. Ammar!                    " << endl;
					cout << "                                                  -----------------                   " << endl << endl;
					condition1:cout << "1- see student data " << endl;
					cout << "2- sort student data " << endl;
					cout << "3- see teacher data " << endl;
					cout << "4- sort teacher data " << endl;

					cin >> i;
					if (i == 1)
					{
						cout << "    student data      " << endl;
						cout << "   ##############     " << endl;
						s.print();
					}
					else if (i == 2)
					{
						cout << "    sorted student data      " << endl;
						cout << "   #####################     " << endl;
						s.printstudent();
					}
					else if (i == 3)
					{
						cout << "    teacher data      " << endl;
						cout << "   ##############     " << endl;
						t.print();
					}
					else if (i == 4)
					{
						cout << "    sorted teacher data      " << endl;
						cout << "   #####################     " << endl;
						t.printteacher();
					}
					else {
						cout << "Error your input is wrong " << endl;
						cout << " Please make sure of your choice    " << endl;
						cout << "#################################" << endl;	goto condition1;
					}

					cout << "To go back to the home, press H" << endl;
					cout << "To exit the program, press E " << endl;

					cin >> b;
					if (b == 'h' || b == 'H')
					{
						v++;
					}
					else break;

				}
			}
			else
			{
				cout << "Error your input is wrong " << endl;
				cout << " Please make sure of your choice    " << endl;
				cout << "#################################" << endl;	goto condition;
			}

		}
		else
		{
			cout << "Error your input is wrong " << endl;
			cout << "                 Please make sure of your choice                    " << endl;
			cout << "###########################################################" << endl;
		}
	}
	return 0;
}
