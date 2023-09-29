#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int main()
{
	char s;
        char c;
	int f,v,n,r=0,ru=0,rc=0,b,g=0,m,k,y,p,d;
	printf("\nWELLCOME IN THE HAND CRICKET GAME\n");
	printf("\nYOU WILL BE PLAYING AGAINST COMPUTER\n");
	printf("\nTHERE ARE SOME RULES FOR THE GAME\n");
	printf("\n1) YOU CAN ONLY SCORE A RUN FROM 0 TO 6\n");
	printf("\n2) IF YOUR AND COMPUTER'S INPUT ARE SAME THEN YOU ARE OUT\n");
	printf("\nARE YOU READY? LET'S START THE GAME NOW!!\n");
	printf("\nCHOOSE HEAD OR TAIL (H- FOR HEAD || T- FOR TAIL)\n");
	scanf("%c", &s);
	char a[2]={'H','T'};
	srand(time(NULL));
        c= a[rand() % 2];
	if(c==s)
	{
		printf("\nYOU WON THE TOSS\n");
		f=1;
	}
	else
	{
		printf("\nYOU LOST THE TOSS\n");
		f=0;
        }
	if(f==1)
	{
		printf("\nCHOOSE WHAT YOU WANT TO DO BAT OR BALL (1- FOR BAT || 2- FOR BALL)\n");
		scanf("%d", &n);
		if(n==1)
		{
		printf("\nYOUR BATTING STARTS NOW. IT'S A TEST MATCH SO YOUR BATTING WILL BE OVER IF YOU ARE OUT\n");
		int h;
		for(int i=1;i>=0;i++)
		{
			printf("\nENTER YOUR SHOT\n");
			scanf("%d", &h);
			if(0<=h && h<=6)
			{
			srand(time(NULL));	
			int d= (rand() % 7);
			printf("\nTHE COMPUTER PLAYED\n %d", d);
                        if(h==d)
                        {
                                goto hop;
                        }
                        else
                        {
                                printf("\nYOUR SCORE\n %d", r=r+h);
                        }
			}
			if(h==d)
			{
hop:
				printf("\nYOU ARE OUT\n");
				printf("\nYOUR END SCORE IS %d\n", ru=r);
				goto label;
			}
			}
label:
	 printf("\nCOMPUTER NEEDS %d RUNS TO WIN \n", ru+1);	
	 printf("\nNOW IT'S YOUR TURN TO BALL\n");
         printf("\nIF YOU CAN TAKE WICKET OF COMPUTER BEFORE IT CHASES YOUR SCORE, THEN YOU ARE THE WINNER\n");
	 for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SPELL\n");
                        scanf("%d", &b);
                        if(0<=b && b<=6)
                        {
			srand(time(NULL));	
                        int j= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", j);
			if(b==j)
			{
				goto jump;
			}
			else
			{
                                printf("\nCOMPUTER'S SCORE\n %d", g=g+j);
				if(g>ru)
				{
					goto tab;
				}
			}
                        if(b==j)
                        {
jump:
                                printf("\nCOMPUTER IS OUT\n");
                                printf("\nCOMPUTER'S END SCORE IS %d\n", rc=g);
                                if(ru>rc)
				{
					printf("\nCONGRATULATIONS!! YOU WON THE MATCH!!\n");
					return 0;
                                }
				else
				{
tab:
					printf("\nCOMPUTER CHASED YOUR SCORE!!\n");
					printf("\nCOMPUTER WON THE MATCH!!   ;)\n");
					printf("\nBETTER LUCK NEXT TIME :)\n");
					return 0;
				}
                        }
		}
	}
        }		
	else if(n==2)
	{
		printf("\nYOU CHOOSE TO BALL FIRST\n");
		printf("\nCOMPUTER IS BATTING\n");
		printf("\nYOUR BALLING STARTS NOW\n");
                for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SPELL\n");
                        scanf("%d", &m);
                        if(0<=m && m<=6)
                        {
                        srand(time(NULL));
                        int k= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", k);
                        if(m==k)
                        {
                               goto jio;
                        }
			else
			{
				printf("\nCOMPUTER'S SCORE IS\n %d", g=g+k);
			}
			}
			else
			{
				printf("\nWRONG INPUT!! START AGAIN!!\n");
				return 0;
			}
		}
jio:
                                printf("\nCOMPUTER IS OUT\n");
                                printf("\nCOMPUTER'S END SCORE IS\n %d", g);
				printf("\nYOU NEED %d RUNS TO WIN\n", g+1);
		printf("\nNOW ITS YOUR TURN TO BAT\n");
		printf("\nCHASE THE SCORE BEFORE COMPUTER TAKES YOUR WICKET\n");
		int z=0;
		for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SHOT\n");
                        scanf("%d", &y);
                        if(0<=y && y<=6)
                        {
                        srand(time(NULL));
                        int p= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", p);
                        if(y==p)
                        {
                                goto suicide;
                        }
                        else
                        {
                                printf("\nYOUR SCORE\n %d", z=z+y);
				goto dick;
                        }
                        if(y==p)
                        {
suicide:
                                printf("\nYOU ARE OUT\n");
                                printf("\nYOUR END SCORE IS %d\n", z);
                                goto idk;
                        }
                        }
idk:
		if(g>z)
		{
			printf("\nYOU LOST THE MATCH\n");
			printf("\nCOMPUTER WON THE MATCH\n");
			printf("\nBETTER LUCK NEXT TIME :)\n");
			return 0;
		}
dick:
		if(z>g)
		{
			printf("\nCONGRATULATIONS!! YOU WON THE MATCH!!\n");
			return 0;
			
                }
	}
        }
	}
	else if(f==0)
	{
               int v[2]={ 0, 1};
               srand(time(NULL));
               int q= v[rand() % 2];
	       if(q==1)
	       {
		       printf("\nCOMPUTER CHOSE TO BAT FIRST\n");
                       printf("\nCOMPUTER IS BATTING\n");
                printf("\nYOUR BALLING STARTS NOW\n");
                for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SPELL\n");
                        scanf("%d", &m);
                        if(0<=m && m<=6)
                        {
                        srand(time(NULL));
                        int k= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", k);
                        if(m==k)
                        {
                               goto hell;
                        }
                        else
                        {
                                printf("\nCOMPUTER'S SCORE IS\n %d", g=g+k);
                        }
                        }
                        else
                        {
                                printf("\nWRONG INPUT!! START AGAIN!!\n");
                                return 0;
                        }
                }
hell:
                                printf("\nCOMPUTER IS OUT\n");
                                printf("\nCOMPUTER'S END SCORE IS\n %d", g);
                                printf("\nYOU NEED %d RUNS TO WIN\n", g+1);
                printf("\nNOW ITS YOUR TURN TO BAT\n");
                printf("\nCHASE THE SCORE BEFORE COMPUTER TAKES YOUR WICKET\n");
                int z=0;
                for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SHOT\n");
                        scanf("%d", &y);
                        if(0<=y && y<=6)
                        {
                        srand(time(NULL));
                        int p= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", p);
                        if(y==p)
                        {
                                goto who;
                        }
                        else
                        {
                                printf("\nYOUR SCORE\n %d", z=z+y);
                                goto pussy;
                        }
                        if(y==p)
                        {
who:
                                printf("\nYOU ARE OUT\n");
                                printf("\nYOUR END SCORE IS %d\n", z);
                                goto heaven;
                        }
                        }
heaven:
                if(g>z)
                {
                        printf("\nYOU LOST THE MATCH\n");
                        printf("\nCOMPUTER WON THE MATCH\n");
                        printf("\nBETTER LUCK NEXT TIME :)\n");
                        return 0;
                }
pussy:
                if(z>g)
                {
                        printf("\nCONGRATULATIONS!! YOU WON THE MATCH!!\n");
                        return 0;

                }
                }
                }
		else if(q==0)
		{
			printf("\nCOMPUTER CHOSE TO BALL FIRST\n");
                        printf("\nYOUR BATTING STARTS NOW. IT'S A TEST MATCH SO YOUR BATTING WILL BE OVER IF YOU ARE OUT\n");
                int h;
                for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SHOT\n");
                        scanf("%d", &h);
                        if(0<=h && h<=6)
                        {
                        srand(time(NULL));
                        int d= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", d);
                        if(h==d)
                        {
                                goto hi;
                        }
                        else
                        {
                                printf("\nYOUR SCORE\n %d", r=r+h);
                        }
                        }
                        if(h==d)
                        {
hi:
                                printf("\nYOU ARE OUT\n");
                                printf("\nYOUR END SCORE IS %d\n", ru=r);
                                goto bye;
                        }
                        }
bye:
         printf("\nCOMPUTER NEEDS %d RUNS TO WIN \n", ru+1);
         printf("\nNOW IT'S YOUR TURN TO BALL\n");
         printf("\nIF YOU CAN TAKE WICKET OF COMPUTER BEFORE IT CHASES YOUR SCORE, THEN YOU ARE THE WINNER\n");
         for(int i=1;i>=0;i++)
                {
                        printf("\nENTER YOUR SPELL\n");
                        scanf("%d", &b);
                        if(0<=b && b<=6)
                        {
                        srand(time(NULL));
                        int j= (rand() % 7);
                        printf("\nTHE COMPUTER PLAYED\n %d", j);
                        if(b==j)
                        {
                                goto leave;
                        }
                        else
                        {
                                printf("\nCOMPUTER'S SCORE\n %d", g=g+j);
                                if(g>ru)
                                {
                                        goto die;
                                }
                        }
                        if(b==j)
                        {
leave:
                                printf("\nCOMPUTER IS OUT\n");
                                printf("\nCOMPUTER'S END SCORE IS %d\n", rc=g);
                                if(ru>rc)
                                {
                                        printf("\nCONGRATULATIONS!! YOU WON THE MATCH!!\n");
                                        return 0;
                                }
                                else
                                {
die:
                                        printf("\nCOMPUTER CHASED YOUR SCORE!!\n");
                                        printf("\nCOMPUTER WON THE MATCH!!   ;)\n");
                                        printf("\nBETTER LUCK NEXT TIME :)\n");
                                        return 0;
                                }
                	}
		}
	}
}
}
}