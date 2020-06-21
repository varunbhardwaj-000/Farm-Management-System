#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


//Global variables.....
int user;
int cr=97,cp=56,ct=67,cw=45,cb=74;

//Function prototypes....
void intro();
void sandy_soil();
void silt_soil();
void clay_soil();
void loamy_soil();
void peat_soil();
void chalk_soil();
void sell_crops();
void management();
void farmer();
void customer();
void funds();
void support();
int login_man();
void add_items();
int login();
void end();
void buy();

//structure definition....
struct list
{
	char crop[20];
	int we;
	int qpr;
}items;


//Function definitions....
void intro()
{
    printf("\n\t\t\t\t\t     WELCOME");
    printf("\n\t\t\t\t\t        TO  ");
    printf("\n\t\t\t\t  FARM MANAGEMENT SYSTEM");
    printf("\n\n\n\n\tAgriculture Guidance System is a platform is to help farmers by providing \n\tall kinds of agriculture related information. ");
    printf("It assists the farmers to give\n\tbest practice of farming process for improving their productivity and \n\tprofitability.");
    printf("This system allows you to sell and buy crops,support from govt,knowledge on farming.");
    printf("\n\n\n\n\n\n\n\n\n\tTo continue press enter......");
    getch();
    system("cls");
}

void users()
{
    label:
    printf("\n\nWhat type of user are you:");
    printf("\n\t\n\n    1.Farmer");
    printf("\t\n    2.Customer");
    printf("\t\n    3.management");
    printf("\t\n    4.Exit\n\n");
    printf("Enter your option:");
    scanf("%d",&user);
    system("cls");
    if(user==1)
    {
       farmer();
    }
    else if(user==2)
    {
        customer();
    }
    else if(user==3)
    {
        management();
    }
    else if(user==4)
    {
        end();
    }
    else
    {
        printf("Invalid , Kindly type again:");
        system("cls");
        goto label;
    }
}

void sandy_soil()
{
    printf("\nSandy Soil is light, warm, dry and tend to be acidic and low in nutrients.Sandy soils are often known as light\nsoils due to their");
    printf("high proportion of sand and little clay (clay weighs more than sand).These soils have\nquick water drainage and are easy to work");
    printf("with.They are quicker to warm up in spring than clay soils but tend to dry out in summer and suffer\nfrom low nutrients that are");
    printf("washed away by rain.");
    printf("\n\n\nTYPES OF CROPS GROWN IN THIS SOIL: carrots,radishes,potatoes,Lettuce,Collard green");
    printf("Tomatoes,Zucchini\nCorn,Asparagus,Watermelon,Beans,Cucumber,Thyme,Ro\n");
    printf("\n\n\nFERTILIZERS AND NUTRIENTS USED: vermicompost,Jeevamrut,Coco peat,Biogrow,Nutribeam");
    printf("\n\n\nIRRIGATION TECHNIQUE: Sprinkler irrigation,Drip irrigation,Rain water harvesting");
    getch();
    system("cls");
    users();
}

void silt_soil()
{
    printf("\nSilt Soil is a light and moisture retentive soil type with a high fertility rating.As silt soils compromise of\nmedium");
    printf("sized particles they are well drained and hold moisture well.As the particles are fine ,they\ncan be easily compacted and");
    printf(" are prone to washing away with rain.By adding organic matter, the silt particles\ncan be bound into more stable clumps.");
    printf("\n\n\nTYPES OF CROPS GROWN IN THIS SOIL: Japanese iris,Yellow iris,Weeping willow,Red twig");
    printf("Dog wood,River birch,Red chokeberry and American elder.\n");
    printf("\n\n\nFERTILIZERS AND NUTRIENTS USED: vermicompost,Jeevamrut,Coco peat,Biogrow,Nutribeam");
    printf("\n\n\nIRRIGATION TECHNIQUE: Sprinkler irrigation,Drip irrigation,Rain water harvesting");
    getch();
    system("cls");
    users();
}

void clay_soil()
{
    printf("Clay Soil is a heavy soil type that benefits from high nutrients. Clay soils remain wet and cold in winter and dry out\nin summer.");
    printf("These soils are made of over 25 percent clay, and because of the spaces found between clay\nparticles, clay soils hold a high");
    printf("amount of water.");
    printf("\n\n\nTYPES OF CROPS GROWN IN THIS SOIL: Lettuce,Chard,snap beans");
    printf("Broccoli,Brussels sprouts,and cabbage\n");
    printf("\n\n\nFERTILIZERS AND NUTRIENTS USED: Neemcake organic,Shehri,Mgbn Epsom,Plant O boost");
    printf("\n\n\nIRRIGATION TECHNIQUE: Drip irrigation,Broadcasting,Rain water harvesting");
    getch();
    system("cls");
    users();
}

void loamy_soil()
{
    printf("Loam soil is a mixture of sand, silt and clay that are combined to avoid the negative effects of each type.");
    printf("\nThese soils are fertile, easy to work with and provide good drainage. Depending on their predominant \ncomposition they");
    printf("can be either sandy or clay loam.");
    printf("\n\n\nTYPES OF CROPS GROWN IN THIS SOIL: Wheat,sugarcane,oil seeds,pulses");
    printf("\n\n\nFERTILIZERS AND NUTRIENTS USED: Muriate of potash and potassium sulphate");
    printf("\n\n\nIRRIGATION TECHNIQUE: Drilling and Broadcasting,Rain water harvesting");
    getch();
    system("cls");
    users();
}

void peat_soil()
{
    printf("Peat soil is high in organic matter and retains a large amount of moisture.");
    printf("This type of soil is very rarely found\nin a garden and often imported into a garden to provide an optimum soil base for");
    printf("planting.");
    printf("\n\n\nTYPES OF CROPS GROWN IN THIS SOIL: Bajra,Pulses,Guar,Fodder and");
    printf("less water requirement corps\n");
    printf("\n\n\nFERTILIZERS AND NUTRIENTS USED: Lime and Cement,Peat Moss");
    printf("\n\n\nIRRIGATION TECHNIQUE: Center pivot irrigation,Transplanting,Rain water harvesting");
    getch();
    system("cls");
    users();
}

void chalk_soil()
{
    printf("Chalk soil can be either light or heavy but always highly alkaline due to the calcium carbonate or lime\nwithin its structure.");
    printf("As these soils are alkaline they will not support the growth of ericaceous plants\nthat require acidic soils to grow.");
    printf("If a chalky soil shows signs of visible white lumps then they can’t be acidified\nand gardeners should be resigned to only choose");
    printf("plants that prefer an alkaline soil.");
    printf("\n\n\nTYPES OF CROPS GROWN IN THIS SOIL: Cabbage family plants,Wild flowers,");
    printf("\n\n\nFERTILIZERS AND NUTRIENTS USED: Sea weed liquid and vermicompost");
    printf("\n\n\nIRRIGATION TECHNIQUE: Lateral move irrigation,Rain water havesting");
    getch();
    system("cls");
    users();
}

void farmer()
{
    char id[10],pass[10];
    int ch;
    int op;
    int type;
    char yes;
    int confirm=login();
    if(confirm==10)
    {
        system("cls");
        front:
        printf("\n1.Farming guidance\n2.help and support\n3.Sell crops\n\n\n");
        printf("Enter option:");
        scanf("%d",&op);
        system("cls");
        label:
        system("cls");
        if(op==1)
        {
            printf("What type of soil do you have in your land:\n1.Sandy soil\n2.Silt soil\n3.Clay soil\n4.Loamy soil\n5.Peat soil\n6.Loamy soil\n\n");
            printf("Enter your option:");
            scanf("%d",&type);
            system("cls");
            switch(type)
            {
            case 1:
                sandy_soil();
                break;
            case 2:
                silt_soil();
                break;
            case 3:
                clay_soil();
                break;
            case 4:
                loamy_soil();
                break;
            case 5:
                peat_soil();
                break;
            case 6:
                chalk_soil();
                break;
            case 7:
                goto front;
            default:
                printf("\n\nInvalid");
                goto label;
            }
        }
        else if(op==2)
        {
            support();
        }

        else if(op==3)
        {
            add_items();
        }
        else
        {
            printf("Invalid");
            system("cls");
            goto front;
        }
    }

}

void customer()
{
    buy();
}



void add_items()
{
    char crop[20];
    int we;
    int wpq;
    FILE *fptr;
    fptr=fopen("input.txt","a");
    printf("Enter the crop name:");
    scanf("%s",crop);
    printf("\nEnter the weight in quintals:");
    scanf("%d",&we);
    printf("\nEnter rate per quintal:");
    scanf("%d",&wpq);
    fprintf(fptr,"%s %d %d",crop,we,wpq);
    fclose(fptr);
    printf("PRESS ENTER TO GO BACK.........");
    getch();
    system("cls");
    users();
}

void buy()
{
    int we,wet;
    int qpr,qprs;
    system("cls");
    char name[20],crops[20];
	int found=0;
    FILE *ft;
	ft=fopen("input.txt","r+");
	printf("\n Enter name of the crop to buy: ");
	getchar();
	gets(name);
	while(fscanf(ft,"%s %d %d\n",crops,&wet,&qprs)!=EOF)
    {
        if (strcmp(crops,name)!=0)
        {
            found=0;
        }
        else
        {
            found=1;
        }
    }
    fclose(ft);
    if(found==0)
    {
        printf("\nItem Not Available for purchase");
        printf("\n\nPRESS ENTER TO GO BACK.....");
        getch();
        system("cls");
        users();
    }
    else
    {
        printf("\nItem available for purchase..");
         printf("\n'%d' quintals of '%s' are available at '%d' per quintals",wet,crops,qprs);
        printf("\n\nPRESS ENTER TO GO BACK.....");
        getch();
        system("cls");
		users();
    }

}

void support()
{
    char ch[200];
    FILE *help;
    help=fopen("available.txt","w+");
    printf("enter your problems\n");
    getchar();                 /*Since gets() or fgets() is getting skipped due to an already present '\n'
                                 from previous inputs in stdin, calling getchar() would lead to itself getting
				 skipped instead of gets() or fgets() or any other similar function*/
    gets(ch);
    fprintf(help,"%s",ch);
    fclose(help);
    printf("\n Press enter to go back.....");
    getch();
    system("cls");
    users();
}
void end()
{
   printf("\t\t\t\t\t\t  FARM MANGEMENT SYSTEM");
   printf("\n************************************************************************************************************************");
   printf("\n\n\n\t\t\t\t\t\t    THANK YOU.......");
   exit(0);
}
void management()
{                               //function for management departs who seeks help from farmers and provide funds
 int confirm=login_man();
 if(confirm==10)
 {

   int num;
   char str[200];
   system("cls");
   up:
   printf("\n1. support\n2. funds\n");

   scanf("%d",&num);
   if(num==1)
   {
       char str[200];
       FILE *helpp;
       helpp=fopen("available.txt","r");
      if(helpp==NULL)
       {
           printf("\n no new notifications");

       }
        do
        {
            char c=fgetc(helpp);
            if(feof(helpp))
                break;
            printf("%c",c);
        }while(1);
       fclose(helpp);
   }
   else if(num==2)
   {

       funds();
   }

 }
 printf("\n Press enter to go back......");
 getch();
 system("cls");
 users();
}

int login()
{
    system("cls");
    printf("\t\t\t                    FARMER LOGIN\n");
    printf("******************************************************************************************************");
    int att=0	;
    int confirm=0;
    char user[15];
    char pass[15];
    char original_user[25]="admin";  //user name
    char original_pass[15]="admin";  //password
    do
    {
        printf("\n\nEnter you USER NAME:");
        scanf("%s",user);
        printf("Enter your PASSWORD:");
        scanf("%s",pass);
        if (strcmp(user,original_user)==0 && strcmp(pass,original_pass)==0)
        {
           printf("\n\nUSER VERIFIED\n\n\npress ENTER to continue.........");
           confirm=confirm+10;
           getch();
           return confirm;
           break;
        }
        else
        {
            printf("\nPassword in incorrect,Try Again ");
            att++;
            getch();
        }
    }while(att<=2);
    if(att>2)
    {
    printf("\nYou have tried too many time,..ACCESS DENIED");
    getch();
    end();
    }
}

int login_man()
{
 system("cls");
    printf("\t\t\t                    AGRICULTURAL MANAGEMENT LOGIN\n");
    printf("******************************************************************************************************");
    int att=0	;
    int confirm=0;
    char user[15];
    char pass[15];
    char original_user[25]="admin";
    char original_pass[15]="admin";
    do
    {
        printf("\n\nEnter you USER NAME:");
        scanf("%s",user);
        printf("Enter your PASSWORD:");
        scanf("%s",pass);
        if (strcmp(user,original_user)==0 && strcmp(pass,original_pass)==0)
        {
           printf("\n\nUSER VERIFIED\n\n\npress ENTER to continue.........");
           confirm=confirm+10;
           getch();
           return confirm;
           break;
        }
        else
        {
            printf("\nPassword in incorrect,Try Again ");
            att++;
            getch();
        }
    }while(att<=2);
    if(att>2)
    {
    printf("\nYou have tried too many time,..ACCESS DENIED");
    getch();
    end();
    }

}




//Main function.....
int main()
{
    intro();
    printf("\n\t\t\t\t  FARM MANAGEMENT SYSTEM");
    users();
    return 0;
}
