#include<stdio.h>
#include<string.h>
int main()
{
	printf ("\n\n\n\n\n\n\n");
	printf ("\t\tHHHH     HHHH            AA            NNNNNN        NNNN     GGGGGGGG    MMMMM        MMMMM            AA            NNNNNN        NNNN\n");
	printf ("\t\tHHHH     HHHH          AA  AA          NNNNNN        NNNN     GGGGGGGG    MMMM MM    MM MMMM          AA  AA          NNNNNN        NNNN\n");
	printf ("\t\tHHHH     HHHH         AA    AA         NNNN NN       NNNN     GGG         MMMM  MM  MM  MMMM         AA    AA         NNNN NN       NNNN\n");
	printf ("\t\tHHHH     HHHH        AA      AA        NNNN  NN      NNNN     GGG         MMMM   MM MM  MMMM        AA      AA        NNNN  NN      NNNN\n");
	printf ("\t\tHHHHHHHHHHHHH       AA        AA       NNNN   NN     NNNN     GGG         MMMM   MMMMM  MMMM       AA        AA       NNNN   NN     NNNN\n");
	printf ("\t\tHHHHHHHHHHHHH      AAAAAAAAAAAAAA      NNNN    NN    NNNN     GGGGGGGG    MMMM          MMMM      AAAAAAAAAAAAAA      NNNN    NN    NNNN\n");
	printf ("\t\tHHHH     HHHH     AAAAAAAAAAAAAAAA     NNNN     NN   NNNN     GGGGGGGG    MMMM          MMMM     AAAAAAAAAAAAAAAA     NNNN     NN   NNNN\n");
	printf ("\t\tHHHH     HHHH    AA              AA    NNNN      NN  NNNN          GGG    MMMM          MMMM    AA              AA    NNNN      NN  NNNN\n");
	printf ("\t\tHHHH     HHHH   AA                AA   NNNN       NN NNNN          GGG    MMMM          MMMM   AA                AA   NNNN       NN NNNN\n");
	printf ("\t\tHHHH     HHHH  AA                  AA  NNNN        NNNNNN          GGG    MMMM          MMMM  AA                  AA  NNNN        NNNNNN\n");
	printf ("\n\n");
	printf ("\t\t\t\t\t\tGGGGGGGG            AA            MMMMM        MMMMM     EEEEEEEEEEEEE\n");
	printf ("\t\t\t\t\t\tGGGGGGGG          AA  AA          MMMM MM    MM MMMM     EEEEEEEEEEEEE\n");
	printf ("\t\t\t\t\t\tGGG              AA    AA         MMMM  MM  MM  MMMM     EEE\n");
	printf ("\t\t\t\t\t\tGGG             AA      AA        MMMM   MM MM  MMMM     EEE\n");
	printf ("\t\t\t\t\t\tGGG            AA        AA       MMMM   MMMMM  MMMM     EEEEEEEEEE\n");
	printf ("\t\t\t\t\t\tGGGGGGGG      AAAAAAAAAAAAAA      MMMM          MMMM     EEEEEEEEEE\n");
	printf ("\t\t\t\t\t\tGGGGGGGG     AAAAAAAAAAAAAAAA     MMMM          MMMM     EEE\n");
	printf ("\t\t\t\t\t\t     GGG    AA              AA    MMMM          MMMM     EEE\n");
	printf ("\t\t\t\t\t\t     GGG   AA                AA   MMMM          MMMM     EEEEEEEEEEEEEEE\n");
	printf ("\t\t\t\t\t\t     GGG  AA                  AA  MMMM          MMMM     EEEEEEEEEEEEEEE\n");
	char z;
	printf ("\n\nWANT TO PLAY THE GAME????");
	printf ("\nENTER Y FOR YES AND N FOR EXIT (IN CAPITALS)\n");
	scanf ("%c", &z);	
	char movie[50],a,c,test[50];
	int len,i=0,j=0,life=3,d,run=1,b,correct=0,n;
	FILE *fp;
	if (z=='Y')
	{
	printf ("[1]. EASY\n");
	printf ("[2]. MEDIUM\n");
	printf ("[3]. HARD\n\n\n");
	printf ("\t\t\t\t\t\tENTER YOUR CHOICE\n");
	scanf ("%d", &n);
	if (n>=1 && n<=3)
	{
		switch (n)
		{
			case 1:
				fp = fopen("abhi1.txt", "r");
				while(1)
	            {
	        		c=fgetc(fp);
	   				if(c==EOF)
	   				break;
	   				else
	   				{
	   					movie[i]=c;
	   					test[i]=c;
	   					i++;
    			    }
    			}
    			len=strlen(movie);
    			for(i=0;i<len;i++)
    			{
    				if(movie[i]=='A'||movie[i]=='E'||movie[i]=='I'||movie[i]=='O'||movie[i]=='U')
    				{
    	    			if(movie[i]=='A')
    	    			test[i]='A';
    	    			else if(movie[i]=='E')
    	    			test[i]='E';
    	    			else if(movie[i]=='I')
    	    			test[i]='I';
    	    			else if(movie[i]=='O')
    	    			test[i]='O';
    	    			else
    	    			test[i]='U';
    	    			printf("%c",test[i]);
    				}
    				else if(movie[i]==' ')
    				{
    					test[i]=' ';
    	    			printf("  ");
    				}		
    				else
					{
		    			test[i]='_'; 
    	    			printf("_");
        			}
				}
				for(i=1;i<=life;i=i)
				{
					run=0;
					printf("\n\nENTER ANY ALPHABET IN CAPITAL LETTER\n");
					fflush(stdin);
					scanf("%c",&a);
					for(j=0;j<len;j++)
					{
						if(a==movie[j])
						{
							test[j]=a;
							run=10;
							correct+=100;
		    			}
					}
					if(run==10)
					puts(test);
					else
					{
						life--;
						printf("\n\nLIFE LEFT = %d",life);
					}
					d=strcmp(test,movie);
					if(d==0)
					{
                    printf("\n\n\t\tCONGRATULATIONS!!!!!!!");
                    printf ("\n\n\t\tYOU WON THE GAME");
                    printf("\n\n\t The Word was %s ", movie);
                    break;
					}
					
					
					if (life==0)
					printf ("\n\nGAME OVER");
    			}
				fclose(fp);
				break;
			case 2:
				fp = fopen("abhi2.txt", "r");
				while(1)
	            {
	        		c=fgetc(fp);
	   				if(c==EOF)
	   				break;
	   				else
	   				{
	   					movie[i]=c;
	   					test[i]=c;
	   					i++;
    			    }
    			}
    			len=strlen(movie);
    			for(i=0;i<len;i++)
    			{
    				if(movie[i]=='A'||movie[i]=='E'||movie[i]=='I'||movie[i]=='O'||movie[i]=='U')
    				{
    	    			if(movie[i]=='A')
    	    			test[i]='A';
    	    			else if(movie[i]=='E')
    	    			test[i]='E';
    	    			else if(movie[i]=='I')
    	    			test[i]='I';
    	    			else if(movie[i]=='O')
    	    			test[i]='O';
    	    			else
    	    			test[i]='U';
    	    			printf("%c",test[i]);
    				}
    				else if(movie[i]==' ')
    				{
    					test[i]=' ';
    	    			printf("  ");
    				}		
    				else
					{
		    			test[i]='_'; 
    	    			printf("_");
        			}
				}
				for(i=1;i<=life;i=i)
				{
					run=0;
					printf("\n\nENTER ANY ALPHABET IN CAPITAL LETTER\n");
					fflush(stdin);
					scanf("%c",&a);
					for(j=0;j<len;j++)
					{
						if(a==movie[j])
						{
							test[j]=a;
							run=10;
							correct+=100;
		    			}
					}
					if(run==10)
					puts(test);
					else
					{
						life--;
						printf("\n\nLIFE LEFT = %d",life);
					}
					d=strcmp(test,movie);
					if(d==0)
					{
                    printf("\n\n\t\tCONGRATULATIONS!!!!!!!");
                    printf ("\n\n\t\tYOU WON THE GAME");
                    printf("\n\n\t The Word was %s ", movie);
                    break;
					}
					
					
					if (life==0)
					printf ("\n\nGAME OVER");
    			}
				fclose(fp);
				break;
			case 3:
				fp = fopen("abhi3.txt", "r");
				while(1)
	            {
	        		c=fgetc(fp);
	   				if(c==EOF)
	   				break;
	   				else
	   				{
	   					movie[i]=c;
	   					test[i]=c;
	   					i++;
    			    }
    			}
    			len=strlen(movie);
    			for(i=0;i<len;i++)
    			{
    				if(movie[i]=='A'||movie[i]=='E'||movie[i]=='I'||movie[i]=='O'||movie[i]=='U')
    				{
    	    			if(movie[i]=='A')
    	    			test[i]='A';
    	    			else if(movie[i]=='E')
    	    			test[i]='E';
    	    			else if(movie[i]=='I')
    	    			test[i]='I';
    	    			else if(movie[i]=='O')
    	    			test[i]='O';
    	    			else
    	    			test[i]='U';
    	    			printf("%c",test[i]);
    				}
    				else if(movie[i]==' ')
    				{
    					test[i]=' ';
    	    			printf("  ");
    				}		
    				else
					{
		    			test[i]='_'; 
    	    			printf("_");
        			}
				}
				for(i=1;i<=life;i=i)
				{
					run=0;
					printf("\n\nENTER ANY ALPHABET IN CAPITAL LETTER\n");
					fflush(stdin);
					scanf("%c",&a);
					for(j=0;j<len;j++)
					{
						if(a==movie[j])
						{
							test[j]=a;
							run=10;
							correct+=100;
		    			}
					}
					if(run==10)
					puts(test);
					else
					{
						life--;
						printf("\n\nLIFE LEFT = %d",life);
					}
					d=strcmp(test,movie);
					if(d==0)
					{
                    printf("\n\n\t\tCONGRATULATIONS!!!!!!!");
                    printf ("\n\n\t\tYOU WON THE GAME");
                    printf("\n\n\t The Word was %s ", movie);
                    break;
					}
					if (life==0)
					printf ("\n\nGAME OVER");
    			}
				fclose(fp);
				break;
				default:
				printf ("\n\nWRONG INPUT");	
		}
	}
	
	printf(" \n\n\n\t\t\t\tYOUR TOTAL SCORE IS %d",correct);
	getch();
	}
	
}
