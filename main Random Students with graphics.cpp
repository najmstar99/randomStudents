// Random Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <string>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#define ani 10
#define ani2 5
using std::cout;
using std::cin;
using std::endl;
using std::string;
//global variable for coloring the circles
int c=(rand() % (14 - 1 + 1)) + 1;



void circle_animation_10 (void)
{
    //Explained in the circle_animation function
        c++;
        if (c == 4) c=(rand() % (10 - 1 + 1)) + 1;
         else if (c>14) c=(rand() % (10 - 1 + 1)) + 1;

    for (int i=0;i<480;i+=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(200,150+i,30);
        floodfill(200,150+i,c);
        delay(ani2);
    }

    for (int i=0;i<960;i+=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(200+i,630,30);
        floodfill(200+i,630,c);
        if (c==1) c=14;
        delay(ani2);
    }
    for (int i=480;i>-80;i-=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(1160,150+i,30);
        floodfill(1160,150+i,c);
        if (c==14) c=1;
        delay(ani2);
    }

    for (int i=960;i>0;i-=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(200+i,150,30);
        floodfill(200+i,150,c);
        if (c==1) c=14;
        delay(ani2);
    }



}



void generatingNames(int numberOfStudents)
{
	char students[27][100]
	{
		"Ahmed Mohammed AlFeras",
		"Diaa Yahya Ganam",
		"Gamal Gamel AlAsri",
		"Rufeda Ali Khala",
		"Ahmed Mohammed Othman",
		"Ismail Ali AlGabri",
		"Shatha Ali AlKabodi",
		"Marwan Khaled AlDiani",
		"Malak Saleh Ali AlShami",
		"Sultan Ali Ahmed Saryah",
		"Ahmed Abdulkarem Amer",
		"Ahmed Ramzy Alherwi",
		"Essa Abdu Ahmed Saeed ",
		"Amjad Mohammed Ezi",
		"Mohammed Ahmed AlQaili",
		"Tarq Nage Omeer",
		"Najm Addin Fateh AlShuaibi",
		"Asaf Abdulrahman Qasem",
		"Mohammed Tarq AlAkhali",
		"Ahmed Hamod AlAsri",
		"Mohammed Khaled AlDilami",
		"Mohammed Yahya AlBeshari",
		"Zuhair Tarbosh",
		"Amat Alrahem AlAwadi",
		"Hamza Ahmed AlNoa'a",
		"Abdulwahab Mohammed Theyab",
		"Fekri Qaseem"

	};
	int randNumbers{ 0 };
	int oldRandNumbers[27]{ 0 };
	int movetext=0;
	int randomcolors=0;
	int oldrandomcolors [27] {0};


	for (int i = 0; i < numberOfStudents; i++)
	{
        srand(time(NULL));
		randNumbers = (rand() % (26 - 0 + 1)) + 0;
		randomcolors = (rand() % (14 - 1 + 1)) + 1;

		int duplicate{ 0 };
		int color_duplicate {0};
		for (int j = 0; j < i; j++)
		{
			if (randNumbers == oldRandNumbers[j] )
			{

				duplicate++;

			}
			if (randomcolors == oldrandomcolors[j])
            color_duplicate++;

		}

		if (color_duplicate == 0)
        {
            oldrandomcolors[i]  =   randomcolors;
            setbkcolor(randomcolors);
        }
		if (duplicate == 0)
		{

			oldRandNumbers[i] = randNumbers;


            circle_animation_10();

            setcolor(WHITE);

            if(randomcolors == 7) setcolor(4);
		    else if (randomcolors == 15 ) setcolor(0);
		    else if (randomcolors == 11 ) setcolor(5);
		    else if (randomcolors == 14 ) setcolor(2);
		    else if (randomcolors == 10 ) setcolor(0);

            settextstyle(10,0,6);
			outtextxy(300,240+movetext,students[randNumbers]);
			setcolor(15);

			//To make sure that the names wont overlap
			movetext+=60;
		}
		else i--;

	}
	cout << endl;

}

void circle_animation (void)
{
        //Used to get a different color in each loop
        c++;
        //To make sure that color red won't get until the end
        while (c == 4) c=(rand() % (10 - 1 + 1)) + 1;
        if (c>14) c=(rand() % (10 - 1 + 1)) + 1;

        //Drawing the left frame of the circles
    for (int i=0;i<480;i+=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(200,150+i,30);
        floodfill(200,150+i,c);
        delay(ani);
    }

    //Drawing the bottom raw of the circles
    for (int i=0;i<960;i+=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(200+i,630,30);
        floodfill(200+i,630,c);
        if (c==1) c=14;
        delay(ani);
    }
    //Drawing the right frame of the circles
    for (int i=480;i>-80;i-=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(1160,150+i,30);
        floodfill(1160,150+i,c);
        if (c==14) c=1;
        delay(ani);
    }

    //Drawing the upper frame of the circles
    for (int i=960;i>0;i-=80)
    {

        setcolor(c);
        setfillstyle(SOLID_FILL,c);
        circle(200+i,150,30);
        floodfill(200+i,150,c);
        if (c==1) c=14;
        delay(ani);
    }

    //Same as previous but Now in red
    for (int i=0;i<480;i+=80)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(200,150+i,30);
        floodfill(200,150+i,RED);
        delay(ani);
    }

    for (int i=0;i<960;i+=80)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(200+i,630,30);
        floodfill(200+i,630,RED);

        delay(ani);
    }
    for (int i=480;i>-80;i-=80)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(1160,150+i,30);
        floodfill(1160,150+i,RED);

        delay(ani);
    }

    for (int i=960;i>0;i-=80)
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(200+i,150,30);
        floodfill(200+i,150,RED);

        delay(ani);
    }

}

int main()
{
    initwindow(1366,768);

    //To make sure that the circles won't get red color until the end loop
    while (c == 4)
    c=(rand() % (14 - 1 + 1)) + 1;

    //Bye is a variable used to ask the user to leave or try the program again
    char bye = '1';
    //Loop used to make sure that the app won't play for once only
    while (true)
    {
        int numberOfStudents{ 5 };

        //Printing the names in the screen
        generatingNames(numberOfStudents);

        //Printing the frame circles
        circle_animation();

        //Printing to ask the user to try again or leave the program
        setcolor(WHITE);
        setbkcolor(RED);
        settextstyle(10,0,4);
        outtextxy(270,30,"Press any key to try again or space to exit");
        bye = getch();
        setbkcolor(BLACK);

        cleardevice();

        if (bye == 32) break;
    }



    closegraph();
	system("pause");

	return 0;
}


