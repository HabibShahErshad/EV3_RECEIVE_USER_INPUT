/*
 \file		user_input.c
 \author	MOHAMMAD HABIB SHAH ERSHAD BIN MOHD AZRUL SHAZRIL
 \date		2/7/2022
 \brief		User request input
*/
#include <ev3.h>
#include <string.h>
#include <stdio.h>

int main(void)
{InitEV3();

	int angle1 = 0;
	int angle2 = 0;
	int angle3 = 0;

	int distance1 = 0;
	int distance2 = 0;
	int distance3 = 0;

	int number = 0;

	char a1[20],a2[20],a3[20],d1[20],d2[20],d3[20], n[20];

	while(1){
	sprintf(a1, "%d", angle1);
	sprintf(a2, "%d", angle2);
	sprintf(a3, "%d", angle3);
	sprintf(d1, "%d", distance1);
	sprintf(d2, "%d", distance2);
	sprintf(d3, "%d", distance3);
	sprintf(n, "%d", number);




	//while(ButtonIsUp(BTNEXIT)!=1){
	TermPrintln("Angle_1    : %s",a1);
			TermPrintln("Distance_1 : %s",d1);
			TermPrintln("Angle_2    : %s",a2);
			TermPrintln("Distance_2 : %s",d2);
			TermPrintln("Angle_3    : %s",a3);
			TermPrintln("Distance_3 : %s",d3);
			TermPrintln("");
			TermPrintln("%s", n);
	if(ButtonIsUp(BTNUP) == 0)
	{
		if(number == 1)
		{
			angle1++;
					while(ButtonIsUp(BTNUP) == 0)
					{
						angle1 = angle1;
					}
		}
		else if(number == 2)
		{
			distance1++;
					while(ButtonIsUp(BTNUP) == 0)
					{
						distance1 = distance1;
					}
		}
		else if(number == 3)
				{
					angle2++;
							while(ButtonIsUp(BTNUP) == 0)
							{
								angle2 = angle2;
							}
				}
		else if(number == 4)
				{
					distance2++;
							while(ButtonIsUp(BTNUP) == 0)
							{
								distance2 = distance2;
							}
				}
		else if(number == 5)
				{
					angle3++;
							while(ButtonIsUp(BTNUP) == 0)
							{
								angle3 = angle3;
							}
				}
		else if(number == 6)
				{
					distance3++;
							while(ButtonIsUp(BTNUP) == 0)
							{
								distance3 = distance3;
							}
				}




	}
	else if(ButtonIsUp(BTNDOWN) == 0)
		{
		if(number == 1)
				{
					angle1--;
							while(ButtonIsUp(BTNDOWN) == 0)
							{
								angle1 = angle1;
							}
				}
				else if(number == 2)
				{
					distance1--;
							while(ButtonIsUp(BTNDOWN) == 0)
							{
								distance1 = distance1;
							}
				}
				else if(number == 3)
				{
							angle2--;
									while(ButtonIsUp(BTNDOWN) == 0)
									{
										angle2 = angle2;
									}
						}
				else if(number == 4)
				{
							distance2--;
									while(ButtonIsUp(BTNDOWN) == 0)
									{
										distance2 = distance2;
									}
						}
				else if(number == 5)
				{
							angle3--;
									while(ButtonIsUp(BTNDOWN) == 0)
									{
										angle3 = angle3;
									}
						}
				else if(number == 6)
				{
							distance3--;
									while(ButtonIsUp(BTNDOWN) == 0)
									{
										distance3 = distance3;
									}
						}
		}
		if(number == 1 || number == 2)
		{
			TermPrintln("Angle_1    : %s",a1);
								TermPrintln("Distance_1 : %s",d1);
		}
		else if(number == 3 || number == 4)
		{
			TermPrintln("Angle_2    : %s",a2);
									TermPrintln("Distance_2 : %s",d2);
		}
		else if(number == 5 || number == 6)
				{
					TermPrintln("Angle_3    : %s",a3);
											TermPrintln("Distance_3 : %s",d3);
				}



	if(ButtonIsUp(BTNEXIT) == 0)
	{
		break;
	}


	if(ButtonIsUp(BTNRIGHT) == 0)
	{
		number++;
		while(ButtonIsUp(BTNRIGHT) == 0)
		{
			number=number;
		}
	}
	else if(ButtonIsUp(BTNLEFT) == 0)
	{
		number--;
		while(ButtonIsUp(BTNLEFT) == 0)
		{
			number=number;
		}
	}



	//
	LcdClean();
	}
	LcdClean();
	TermPrintln("Angle_1    : %s",a1);
		TermPrintln("Distance_1 : %s",d1);
		TermPrintln("Angle_2    : %s",a2);
		TermPrintln("Distance_2 : %s",d2);
		TermPrintln("Angle_3    : %s",a3);
		TermPrintln("Distance_3 : %s",d3);
		TermPrintln("");
		TermPrintln("%s", n);

		TermPrintln("Thank You");



	ButtonWaitForPress(BUTTON_ID_ENTER);
	//}
	return 0;
}
