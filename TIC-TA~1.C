
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

void rules();//FUNCTION TO DISPLAY RULES
void instructions();//FUNCTION TO DISPLAY INSTRUCTIONS
void credits();//FUNCTION TO DISPLAY THE CREDITS

int main(){
	int g,h,d;
	int gd = DETECT,gm;

	int count=0;
	int opt,again;
	char num = '1';
	char choice, next;
	char val[100];
	int i,j, k,x,y;
	int press;
    char a[3][3];// STORING ARRAY
    int b[3][3];// FLAG
	char name1[30];
	char name2[30];
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();

	start:
	settextstyle(1,HORIZ_DIR,4);
	setcolor(2);
	for(x = 0;x <= 100;x = x + 1){
	outtextxy(x,0,"TIC-TAC-TOE");
	if(x != 100){
	cleardevice();
	}
	}
	sound(425);
	       delay(250);
	       sound(450);
	       delay(120);
	       sound(475);
	       delay(120);
	       sound(500);
	       delay(600);
	       nosound();
	setcolor(1);
	settextstyle(3,HORIZ_DIR,2);

	//MAIN MENU

	outtextxy(100,100,"Press 1 to start a new game.");
	outtextxy(100,120,"Press 2 to view the rules for the game.");
       outtextxy(100,140,"Press 3 to see how to play the game.");
	outtextxy(100,160,"Press 4 to view the credits.");
	outtextxy(100,180,"Press 5 to exit the game.");
	scanf("%d",&press);
	cleardevice();
	if(press == 2){
		rules();
		}
		else if(press == 3){
			instructions();
		}
	else if(press == 4){
			credits();
		}
		else if(press == 1){
			for(i = 0; i < 3;i++){
					for(j = 0; j < 3; j++ ){
						a[i][j] = num;
						num++;
					}
				}
				for(i = 0; i < 3;i++){
					for(j = 0; j < 3; j++ ){
						b[i][j] = 0;
					}
				}

	  setcolor(4);
    outtextxy(100,100,"\nPlayer 1 enter your name:");
    scanf("%s",name1);
    cleardevice();
    setcolor(3);
    outtextxy(100,100,"Player 2 enter your name:");
    scanf("%s",name2);
    cleardevice();


	setcolor(1);

	// TABLE
	rectangle(100,80,160,140);
	rectangle(100,140,160,200);
	rectangle(100,200,160,260);
	rectangle(160,80,220,140);
	rectangle(160,140,220,200);
	rectangle(160,200,220,260);
	rectangle(220,80,280,140);
	rectangle(220,140,280,200);
	rectangle(220,200,280,260);
	setcolor(7);
		moveto(120,100);
	sprintf(val,"%c",a[0][0]);
	outtext(val);
		moveto(180,100);
	sprintf(val,"%c",a[0][1]);
	outtext(val);
		moveto(240,100);
	sprintf(val,"%c",a[0][2]);
	outtext(val);
		moveto(120,160);
	sprintf(val,"%c",a[1][0]);
	outtext(val);
		moveto(180,160);
	sprintf(val,"%c",a[1][1]);
	outtext(val);
		moveto(240,160);
	sprintf(val,"%c",a[1][2]);
	outtext(val);
		moveto(120,220);
	sprintf(val,"%c",a[2][0]);
	outtext(val);
		moveto(180,220);
	sprintf(val,"%c",a[2][1]);
	outtext(val);
		moveto(240,220);
	sprintf(val,"%c",a[2][2]);
	outtext(val);


	for(i = 0; i<9; i++)
	{
		scanf("%c", &next);
		moveto(80,280);
		j=(i%2) + 1;
		if(j==1)
		{setcolor(4);
		 sprintf(val,"%s please make a move from 1 to 9\n",name1);
		 outtext(val);
		}
		else
		{setcolor(3);
		 sprintf(val,"%s please make a move from 1 to 9\n",name2);
		 outtext(val);

		}

		//ASKING PLAYERS TO MAKE A MOVE
		scanf("%c", &choice);

		cleardevice();
		for (g=300; g<=350; g=g+25)
		{
		    sound(g);
		    delay(25);
		}
		nosound();
			setcolor(1);
		rectangle(100,80,160,140);
		rectangle(100,140,160,200);
		rectangle(100,200,160,260);
		rectangle(160,80,220,140);
		rectangle(160,140,220,200);
		rectangle(160,200,220,260);
		rectangle(220,80,280,140);
		rectangle(220,140,280,200);
		rectangle(220,200,280,260);



		//CHECKING THE INPUT
		switch(choice)
		{
			case '1':
				if(b[0][0] == 0){//CHECKING FOR CHEATING
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(120,100,1);
					 a[0][0]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(120,100,1);
					 a[0][0]='O';}
					b[0][0]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;

			case '2':
				if(b[0][1] == 0){

				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(180,100,1);a[0][1]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(180,100,1);a[0][1]='O';}
					b[0][1]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;

			case '3':

				if(b[0][2] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(240,100,1);a[0][2]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(240,100,1);a[0][2]='O';}
					b[0][2]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
                                        }
					count--;
					i--;
				}
				break;


			case '4':

				if(b[1][0] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(120,160,1);a[1][0]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(120,160,1);a[1][0]='O';}
					b[1][0]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
                                        }
					count--;
					i--;
				}
				break;


			case '5':

				if(b[1][1] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(180,160,1);a[1][1]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(180,160,1);a[1][1]='O';}
					b[1][1]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=2; h=h+1)
					{
						for (g=550; g<=750; g=g+25)
						{
							sound(g);
							delay(75);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;
			case '6':

				if(b[1][2] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(240,160,1);a[1][2]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(240,160,1);a[1][2]='O';}
					b[1][2]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;

			case '7':

				if(b[2][0] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(120,220,1);a[2][0]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(120,220,1);a[2][0]='O';}
					b[2][0]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;

			case '8':

				if(b[2][1] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(180,220,1);a[2][1]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(180,220,1);a[2][1]='O';}
					b[2][1]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;
			case '9':

				if(b[2][2] == 0){
				if (j!=2)
					{setfillstyle(1,4);
					 floodfill(240,220,1);a[2][2]='X';}
				else
					{setfillstyle(1,3);
					 floodfill(240,220,1);a[2][2]='O';}
					b[2][2]++;
				}
				else{
					outtextxy(180,300,"\aNo cheating!!");
					for (h=1; h<=3;h=h+1)
					{
						for (g=300;g<=1000;g=g+20)
						{
							sound(g);
							delay(25);
							nosound();
						}
					}
					count--;
					i--;
				}
				break;
			default :
				outtextxy(180,300,"\aInvalid input\n\n");
				outtextxy(180,320,"Be careful next time\n\n");
				i--;
				count--;
				break;
		}

		count++;
		setcolor(7);
		moveto(120,100);
	sprintf(val,"%c",a[0][0]);
	outtext(val);
		moveto(180,100);
	sprintf(val,"%c",a[0][1]);
	outtext(val);
		moveto(240,100);
	sprintf(val,"%c",a[0][2]);
	outtext(val);
		moveto(120,160);
	sprintf(val,"%c",a[1][0]);
	outtext(val);
		moveto(180,160);
	sprintf(val,"%c",a[1][1]);
	outtext(val);
		moveto(240,160);
	sprintf(val,"%c",a[1][2]);
	outtext(val);
		moveto(120,220);
	sprintf(val,"%c",a[2][0]);
	outtext(val);
		moveto(180,220);
	sprintf(val,"%c",a[2][1]);
	outtext(val);
		moveto(240,220);
	sprintf(val,"%c",a[2][2]);
	outtext(val);


	    // SEEING IF SOMEONE HAS WON
	    if (a[0][0]==a[0][1] && a[0][0]==a[0][2]  ||
	       a[0][0]==a[1][0] && a[0][0]==a[2][0]  ||
		    a[0][0]==a[1][1] && a[0][0]==a[2][2]  ||
		    a[2][0]==a[1][1] && a[2][0]==a[0][2]  ||
		    a[0][1]==a[1][1] && a[0][1]==a[2][1]  ||
		    a[0][2]==a[1][2] && a[0][2]==a[2][2]  ||
		    a[1][0]==a[1][1] && a[1][0]==a[1][2]  ||
		    a[2][0]==a[2][1] && a[2][0]==a[2][2] )
		{
			if(j==1)
			 {
			   moveto(120,320);
			   setcolor(4);

			   sprintf (val,"\a%s wins!!\n\n",name1);
			   outtext(val);
			  }
			 else
			 {moveto(120,320);
			  setcolor(3);
			  sprintf(val,"\a%s wins!!\n\n",name2);
			  outtext(val);
			 }

			 setfillstyle(1,3);
			 for(y = 100;y <= 220;y = y+20){
				for(x = 120;x <= 240;x = x+20){
					floodfill(x,y,1);
				 }
			 }
	       sound(660);
	       delay(150);
               sound(660);
               delay(300);
               sound(660);
	       delay(300);
               sound(510);
               delay(100);
               sound(660);
	       delay(300);
	       sound(770);
               delay(550);

	       setfillstyle(1,4);
			 for(y = 100;y <= 220;y = y+20){
				for(x = 120;x <= 240;x = x+20){
					floodfill(x,y,1);
				 }
			 }
	       sound(380);
	       delay(575);
               sound(510);
               delay(450);
               sound(380);
               delay(400);
               sound(320);
               delay(500);
               sound(440);
               delay(300);
               sound(480);
               delay(330);

	       setfillstyle(1,2);
			 for(y = 100;y <= 220;y = y+20){
				for(x = 120;x <= 240;x = x+20){
					floodfill(x,y,1);
				 }
			 }
	       sound(450);
	       delay(150);
               sound(430);
               delay(300);
               sound(380);
               delay(200);
               sound(660);
               delay(200);
               sound(760);
               delay(150);
               sound(860);
               delay(300);

	       setfillstyle(1,0);
			 for(y = 100;y <= 220;y = y+20){
				for(x = 120;x <= 240;x = x+20){
					floodfill(x,y,1);
				 }
			 }
	       sound(700);
	       delay(150);
               sound(760);
               delay(350);
               sound(660);
               delay(300);
               sound(520);
               delay(150);
               sound(580);
               delay(150);
               sound(480);
               delay(500);
	       nosound();
		setcolor(7);
		moveto(120,100);
	sprintf(val,"%c",a[0][0]);
	outtext(val);
		moveto(180,100);
	sprintf(val,"%c",a[0][1]);
	outtext(val);
		moveto(240,100);
	sprintf(val,"%c",a[0][2]);
	outtext(val);
		moveto(120,160);
	sprintf(val,"%c",a[1][0]);
	outtext(val);
		moveto(180,160);
	sprintf(val,"%c",a[1][1]);
	outtext(val);
		moveto(240,160);
	sprintf(val,"%c",a[1][2]);
	outtext(val);
		moveto(120,220);
	sprintf(val,"%c",a[2][0]);
	outtext(val);
		moveto(180,220);
	sprintf(val,"%c",a[2][1]);
	outtext(val);
		moveto(240,220);
	sprintf(val,"%c",a[2][2]);
	outtext(val);



			count = 0;
			choose:
			setcolor(1);

			outtextxy(180,360,"Press 1 to return to the main menu.");
			outtextxy(180,380,"Press 2 to exit the game.");
			scanf("%d", &opt);
			switch (opt){
			case 1:
				num = '1';
			cleardevice();
			goto start;

		    case 2:
			exit (0);
				}

		}
	    else{
		if(count == 9){
			outtextxy(180,340,"Its a draw!!\n\n");
			num = '1';
			goto choose;
			}
		}

	}

	}



	else{
		exit (0);
	}

	outtextxy(180,360,"Press 1 to go to main menu or 2 to exit\n");
	scanf("%d", &again);
	cleardevice();
	if(again == 1){	goto start;}
	else{ exit(0);}
	closegraph();
	return 0;

}

void rules(){
	setcolor(1);
	settextstyle(3,HORIZ_DIR,1);
	outtextxy(1,100,"1.The aim of the game is to get your marker, either X or O");
	outtextxy(1,120," consecutively thrice in a row.");
	outtextxy(1,140,"2.It can be in a horizontal,vertical or diagonal row.");
	outtextxy(1,160,"3.You cannot place your marker where ");
	outtextxy(1,180," your opponent has already placed his marker");
	outtextxy(1,200,"HAVE FUN!.\n\n");
}
void instructions(){
	setcolor(1);
	settextstyle(3,HORIZ_DIR,1);
	outtextxy(1,100,"HOW TO PLAY TIC TAC TOE:Enter your name.");
	outtextxy(1,120,"2.Choose the number corresponding to where you want to place your");
	outtextxy(1,130,"  marker.");
	outtextxy(1,150,"3.Player 1 plays with X. Player 2 plays with O.");
	outtextxy(1,170,"4.Alternately place your markers till the game is won or drawn.\n\n");
}
void credits(){
	setcolor(1);
	settextstyle(4,HORIZ_DIR,3);
	outtextxy(1,200,"This game was developed by the trio of");
	outtextxy(1,230," Aditya Bhave,Neil Daftary & Aditya Desai");
}
