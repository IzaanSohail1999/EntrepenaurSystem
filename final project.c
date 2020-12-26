#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void startup();
void password();
void create();
void delstatus();
void productinfo();
void resetpassword();
void insert();
void guide();
void showrecords();
void paid();
void searchrecords();
void totalsales();
void update();
void graph();
void deltdatabase();
void deltproduct();
void enteringcustomerdetails();
void showpd();
int menu();
FILE *pp;
FILE *fp;
FILE *info;
void (*ptr[20]) (void);
 struct item
{
	int p_id;
	unsigned long long contact;
	char name[50];
	char del;
	char paid;
    char date[15];
    int lineno;
};
 struct productsinfo
{
	int p_id;
	char p_name[50];
	float  p_price;
    float grams;
    int lineno;
};
struct productsinfo data; 
struct item pro;
int main()
{	
ptr[0]=&startup;
ptr[1]=&password;
ptr[2]=&productinfo;
ptr[3]=&insert;
ptr[4]=&create;
ptr[5]=&showrecords;
ptr[6]=&delstatus;
ptr[7]=&update;
ptr[8]=&searchrecords;
ptr[9]=&graph;
ptr[10]=&totalsales;
ptr[11]=&paid;
ptr[12]=&deltdatabase;
ptr[13]=&deltproduct;
ptr[14]=&resetpassword;
ptr[15]=&guide;
ptr[16]=&showpd;
ptr[0]();
ptr[1]();
int choice;
while(1)
{
menu();
printf("\n\t\t\t\t\tEnter your choice : ");
scanf("%d",&choice);
system("cls");
switch(choice)
{
	case 1:
	ptr[2]();
	break;
	case 2:
	ptr[16]();
	break;
	case 3 :
	ptr[4]();
	break;
	case 4:
	ptr[3]();
	break;
	case 5:
	ptr[5]();
	break;
	case 6:
	ptr[6]();
	break;
	case 7:
	ptr[7]();
	break;
	case 8 :
	ptr[8]();
	break;
	case 9 :
	ptr[9]();
	break;
	case 10:
	ptr[10]();
	break;
	case 11:
	ptr[11]();
	break;
	case 12:
	ptr[12]();
	break;
	case 13:
	ptr[13]();
	break;
	case 14:
	ptr[14]();
	break;
	case 15:
	ptr[15]();
	break;
	case 16 :
	printf("\n\n\n\n\n\t\t\t\t\tTHANKYOU :)");
	system("pause");
	exit(1);
	break;
	default : 
	printf("INVALID CHOICE \n");
	system("pause");
	system("cls");
}
}
}
void startup()
{
	system("COLOR F5");
	int i,j;
for(i=1;i<=43;i++)
{
 if(i==1 || i==2 || i==42 || i==43)
	{
		for(j=1;j<=168;j++)
		{
			if(j==1 || j==2 || j==167 || j==168)
				printf(" ");
			else
			printf("*");
		}
	}
	else if(i>=3 && i<=21 || i>=23 && i<=36|| i>=39 && i<=41)
	{
		
			for(j=1;j<=166;j++)
			{
				 if(j==3 || j==4 || j==165 || j==166 )
					printf("*");
				else 
					printf(" ");
			}
			printf("\n");
	}
else if(i==22)
	{
		
			for(j=1;j<=166;j++)
			{
				 if(j==3 || j==4 || j==165 || j==166 )
					printf("*");
				else if(j==40)
					printf("PROJECT : ENTREPRENEUR DATA MANAGEMENT SYSTEM");
					else if(j==1 || j==2 || j>=5 && j<=39 || j>=85 && j<=164)
					printf(" ");
			}
			printf("\n");
	}
	else if(i==37)
	{
		
			for(j=1;j<=166;j++)
			{
				 if(j==3 || j==4 || j==165 || j==166 )
					printf("*");
				else if(j==120)
					printf("DESIGNED BY : IZAAN SOHAIL K18-0162");
					else if(j==1 || j==2 || j>=5 && j<=119 || j>=155 && j<=164)
					printf(" ");
			}
			printf("\n");
	}
	else if(i==38)
	{
		
			for(j=1;j<=166;j++)
			{
				 if(j==3 || j==4 || j==165 || j==166 )
					printf("*");
				else if(j==120)
					printf("DESIGNED BY : MARIA ALIASGHAR K18-0161");
					else if(j==1 || j==2 || j>=5 && j<=119 || j>=158 && j<=164)
					printf(" ");
			}
			printf("\n");
	}
}
printf("Press any key to continue... ");
getch();
system("cls");
}

void password()
{
	system("COLOR F4");
	int c=0,i=0,j=0,k;
	char password[10]="password",enter[10],check[10],ch;
		password[8]='\0';password[9]='\0';
pp=	fopen("secret.dat","a+");
	if(pp==NULL)
	{
		printf("FILE NOT FOUND");
	}
	while(1)
	{
		check[i]=fgetc(pp);
		i++;
		if(feof(pp))
		{
			break;
		}
		c++;
	}
	fclose(pp);
	check[8]='\0';check[9]='\0';
	if(c==0)
	{
		for(i=1;i<=3;i++)
		{
			printf("\n\n\n\n\n\n\n\t\t\t\t\tEnter password : ");
			fflush(stdin);
			for(j=0;j<=7;j++)
			{
				ch=getch();
				enter[j]=ch;
				ch='*';
				printf("%c",ch);
			}
			getch();
			enter[8]='\0';enter[9]='\0';
			if(strcmp(enter,password)==0)
			{
				printf("\n\n\t\t\t\t\tACCESS GRANTED\n");
				system("pause");
				system("cls");
				break;
			}
			else
			{
				printf("\n\n\t\t\t\t\tACCESS DENIED\n");
				system("pause");
				system("cls");
			}
			if(i==3)
			{
				printf("\n\n\n\n\n\t\t\t3 attempts failed,log-in after 24 hours now.SYSTEM LOCKED");
				exit(1);
			}
		}
	}
	else
	{
		for(i=1;i<=3;i++)
		{
			printf("\n\n\n\n\n\n\n\t\t\t\t\tEnter password : ");
			for(j=0;j<=7;j++)
			{
				ch=getch();
				enter[j]=ch;
				ch='*';
				printf("%c",ch);
			}
			getch();
			enter[8]='\0';enter[9]='\0';
			if(strcmp(enter,check)==0)
			{
				printf("\n\n\t\t\t\t\tACCESS GRANTED\n");
				system("pause");
				system("cls");
				break;
			}
			else
			{
				printf("\n\n\t\t\t\t\tACCESS DENIED\n");
				system("pause");
				system("cls");
			}
			if(i==3)
			{
				printf("3 attempts failed,log-in after 24 hours now.SYSTEM LOCKED");
				exit(1);
			}
	}
}
system("COLOR F1");
for(i=1;i<=15;i++)
{
	printf("\n");
}
printf("\t\t\t\t*         *      **********      *          **********      **********      *      *      **********\n" );
printf("\t\t\t\t*         *      *               *          *               *        *      **    **      *\n");
printf("\t\t\t\t*         *      *               *          *               *        *      * *  * *      *\n");
printf("\t\t\t\t*         *      *               *          *               *        *      *  **  *      *\n");
printf("\t\t\t\t*         *      **********      *          *               *        *      *      *      **********\n");
printf("\t\t\t\t*         *      *               *          *               *        *      *      *      *\n");
printf("\t\t\t\t*    *    *      *               *          *               *        *      *      *      *\n");
printf("\t\t\t\t*  *   *  *      *               *          *               *        *      *      *      *\n");
printf("\t\t\t\t*         *      **********      ********** **********      **********      *      *      **********\n");
printf("\t\t\t-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^\n");
system("pause");
system("cls");
}

void resetpassword()
{
	system("COLOR F0");
	char enter[10],password[10]="password",check[10],ch,newp[10],newp1[10];
	int i,j=0,c=0;
	password[8]='\0';password[9]='\0';
	fp=fopen("secret.dat","r");
	if(pp==NULL)
	{
		printf("FILE NOT FOUND");
	}
	while(1)
	{
		check[j]=fgetc(pp);
		j++;
		if(feof(pp))
		{
			break;
		}
		c++;
	}
	fclose(pp);
	check[8]='\0';check[9]='\0';
	if(c==0)
	{
		for(i=1;i<=3;i++)
		{
			printf("\n\n\n\n\n\t\t\t\t\tEnter the old password : ");
			for(j=0;j<=7;j++)
			{
				ch=getch();
				enter[j]=ch;
				ch='*';
				printf("%c",ch);
			}
			getch();
			enter[8]='\0';enter[9]='\0';
			if(strcmp(enter,password)==0)
			{
				printf("\n\n\t\t\t\t\tACCESS GRANTED\n");
				system("pause");
				system("cls");
				break;
			}
			else
			{
				printf("\n\n\t\t\t\t\tACCESS DENIED\n");
				system("pause");
				system("cls");
			}
				if(i==3)
			{
				printf("3 attempts failed,log-in after 24 hours now.SYSTEM LOCKED");
				exit(1);
			}
		
		}
	}
	else
	{
		for(i=1;i<=3;i++)
		{
			printf("\n\n\n\n\n\t\t\t\t\tEnter the old password : ");
			for(j=0;j<=7;j++)
			{
				ch=getch();
				enter[j]=ch;
				ch='*';
				printf("%c",ch);
			}
			getch();
			enter[8]='\0';enter[9]='\0';
			if(strcmp(enter,check)==0)
			{
				printf("\n\n\t\t\t\t\tACCESS GRANTED\n");
				system("pause");
				system("cls");
				break;
			}
			else
			{
				printf("\n\n\t\t\t\t\tACCESS DENIED\n");
				system("pause");
				system("cls");
			}
			if(i==3)
			{
				printf("\n\n\n\n\t\t\t\t\t3 attempts failed,log-in after 24 hours now.SYSTEM LOCKED");
				exit(1);
			}
	}
	
}
while(1)
{
printf("\n\n\n\n\n\t\t\t\t\tEnter the new password(8 characters long): ");
	for(j=0;j<=7;j++)
			{
				ch=getch();
				newp[j]=ch;
				ch='*';
				printf("%c",ch);
			}
			getch();
			printf("\n\n\t\t\t\t\tRe-enter the new password : ");
				for(j=0;j<=7;j++)
			{
				ch=getch();
				newp1[j]=ch;
				ch='*';
				printf("%c",ch);
			}
			getch();
	newp[8]='\0';newp[9]='\0';
newp1[8]='\0';newp1[9]='\0';
			if(strcmp(newp,newp1)==0)
			{
				pp=fopen("secret.dat","w");
                  if(pp==NULL)
                     {
	                     printf("FILE NOT FOUND");
                    }
                    fputs(newp,pp);
                    fclose(pp);
				printf("\n\n\n\t\t\t\t\tPassword changed successfully\n");
				system("pause");
				system("cls");
				exit(1);
			}
			else
			{
				printf("\n\t\t\t\t\t\tpassword didnot match please re-enter password\n");
			}
}
}

int menu()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t   MAIN   MENU\n");
	printf("\t\t\t\t^-^-^-^-^-^-^-^-^-^\n");
	printf("\t\t\t\t  # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #\n");
	printf("\t\t\t\t$       1)Product info                                           $\n");
	printf("\t\t\t\t$       2)Show product Details                                   $\n");
	printf("\t\t\t\t$       3)Create database                                        $\n");
	printf("\t\t\t\t$       4)Insert a record                                        $\n");
	printf("\t\t\t\t$       5)Show all records                                       $\n");
	printf("\t\t\t\t$       6)Check delivery status                                  $\n");
	printf("\t\t\t\t$       7)Update a record                                        $\n");
	printf("\t\t\t\t$       8)Search record                                          $\n");
	printf("\t\t\t\t$       9)Graphical representation                               $\n");
	printf("\t\t\t\t$       10)Total sale                                            $\n");
	printf("\t\t\t\t$      11)List of customers who didnot pay purchase amount yet   $\n");
	printf("\t\t\t\t$      12)Delete Database                                        $\n");
	printf("\t\t\t\t$      13)Delete Product Details                                 $\n");
	printf("\t\t\t\t$      14)Reset password                                         $\n");
	printf("\t\t\t\t$      15)Help                                                   $\n");
	printf("\t\t\t\t$      16)Exit                                                   $\n");
	printf("\t\t\t\t$ # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #  $\n");
}
	
 void create()
{
	system("COLOR F2");
	int choice,delt;
	fp=fopen("product.DAT","rb");
		if(fp!=NULL)
		{
			fclose(fp);
			printf("Do you want to delete all records created ? Enter 1 to delete all records.\n");
			scanf("%d",&choice);
			if(choice==1)
			{
				delt=remove("product.dat");
				if (remove("product.dat") == 0) 
                printf("FILE IS EMPTY NOW"); 
                else
                printf("FILE IS EMPTY NOW\n\n"); 
			}
		}
	
	long int recsize;
	int i=0;
	recsize=sizeof(pro);
	printf("\n\n\n\t\t\t\t\tCREATE YOUR DATABASE\n");
	printf("\n\t\t\t\t=================================\n\n");
	fp = fopen("product.DAT","wb");
	int j,size,y,x;
	printf("How many records do u want to enter: ");
	scanf("%d",&size);
	if(fp == NULL)
	{
		printf("File does not exist");
	}
	    leap:
		printf("Enter todays date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",&pro.date);
		x = strlen(pro.date);
		if(x != 10)
		{
			printf("Invalid date format\n");
			goto leap;
		}
	for(i=0;i<size;i++)
	{
		printf("Enter full name of customer: ");
		fflush(stdin);
		gets(pro.name);
		jump:
		printf("Enter customer contact number: ");
		fflush(stdin);
		scanf("%llu",&pro.contact);
		y = countdigit(pro.contact);
		if(y != 10)
		{
			printf("Invalid number format\n");
			goto jump;
		}
		printf("enter product ID: ");
		fflush(stdin);
		scanf("%4d",&pro.p_id);
		printf("Enter delivery status(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.del);
		printf("Enter if the transaction has been made(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.paid);
		pro.lineno=i+1;
		fwrite(&pro,recsize,1,fp);
		printf("\n");
	}
	fclose(fp);
	system("pause");
	system("cls");

}
int countdigit(unsigned long long contact)
{
	int count = 0;
	while(contact  != 0)
	{
		contact = contact / 10;
		count++;
	}
	return count;
}
void productinfo()
{
	system("COLOR FC");
	printf("\n\n\t\t\t\t\t\tPRODUCT INFORMATION\n");
	printf("\t\t\t\t\t=====================================\n\n");
	int j;
	info=fopen("productinfo.dat","rb+");
	{
		if(info==NULL)
		{
			j=0;
		}
		else
		{
			rewind(info);
			printf("\nSERIAL NO\tPRODUCT NAME\t\t\t\t\t\tPRODUCT ID\tPRICE\t   GRAMS PER BOX\n");
			while(fread(&data,sizeof(data),1,info)==1)
	{
		printf("%d\t\t%-40s\t\t%d\t\t%.2f\t	%.2f\n",data.lineno,data.p_name,data.p_id,data.p_price,data.grams);
		j=data.lineno;
	}
		}
		fclose(info);
	}
	info=fopen("productinfo.DAT","ab+");
    if(info==NULL)
    {
    	printf("File not found");
	}
	int i,size;
	rewind(info);
	printf("Enter the number of products you sell : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	printf("Enter Product name : ");
	fflush(stdin);
	gets(data.p_name);
	printf("Enter Product ID : ");
	scanf("%d",&data.p_id);
	printf("Enter the price for this product : ");
	scanf("%f",&data.p_price);
	printf("Enter the grams per box package : ");
	scanf("%f",&data.grams);
	data.lineno=j+1;
	j++;
	fwrite(&data,sizeof(data),1,info);
    }
    fclose(info);
    printf("\n\n\t\t\t\t\t\t\tTHANK YOU :)\n");
    system("pause");
    system("cls");
}
void delstatus()
{
	system("COLOR F2");
	char ch;
	int t=0;
	int countlines=0,i;
	fp=fopen("product.DAT","rb");
	if(fp==NULL)
	{
		printf("\n\n\t\t\t\tPlease create database first\n");
	}
	else
	{
	
	printf("\n\n\t\t                                      DELIVERY STATUS : \n");
	printf("\n\t\t\t\t\t    =========================================\n");
	while(fread(&pro,sizeof(pro),1,fp)==1)
	{
		countlines=pro.lineno;
	}
	
rewind(fp);
struct item products[countlines];
i=0;
fread(products,sizeof(struct item),countlines,fp);
printf("\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
printf("\n\n");
for(i=0;i<countlines;i++)
{ 
if(products[i].del=='N'||products[i].del=='n')
{
	t++;
	printf("%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",products[i].lineno,products[i].date,products[i].name,products[i].contact,products[i].p_id,products[i].del,products[i].paid);
}
}
if(t==0)
{
	printf("\n\n\t\t\tALL PRODUCTS DELIVERED\n");
}
printf("\n\n\t\t\t");
system("pause");
system("cls");
}
}
 void insert()
{
	system("COLOR F5");
	int j;
	fp=fopen("product.DAT","rb");
		if(fp==NULL)
		{
			printf("\n\n\n\t\t\tPlease Create your data base first\n ");
			system("pause");
			system("cls");
		}
	else
{
	printf("\n\n\t\t\t\t\t       INSERT RECORDS\n");
	printf("\n\t\t\t==================================================================================\n");
	while(fread(&pro,sizeof(pro),1,fp)==1)
	{
		j=pro.lineno;
	}
	int i,size,y,x;
	printf("How many records do u want to add: ");
	scanf("%d",&size);
	fp = fopen("product.DAT","ab");
	if(fp == NULL)
	{
		fp = fopen("product.DAT","wb");
	}
	    leap:
		printf("Enter todays date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",&pro.date);
		x = strlen(pro.date);
		if(x != 10)
		{
			printf("Invalid date format\n");
			goto leap;
		}
	for(i=0;i<size;i++)
	{
		printf("Enter full name of customer: ");
		fflush(stdin);
		gets(pro.name);
		jump:
		printf("Enter customer contact number: ");
		fflush(stdin);
		scanf("%llu",&pro.contact);
		y = countdigit(pro.contact);
		if(y != 10)
		{
			printf("Invalid number format\n");
			goto jump;
		}
		printf("enter product ID: ");
		fflush(stdin);
		scanf("%4d",&pro.p_id);
		printf("Enter delivery status(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.del);
		printf("Enter if the transaction has been made(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.paid);
		pro.lineno=j+1;
		j++;
	    fwrite(&pro,sizeof(pro),1,fp);
	    printf("\n");
	}
	fclose(fp);
	system("pause");
	system("cls");
}
}
void guide()
{
	system("COLOR F6");
	char c;
	FILE *help=fopen("guide.txt","r");
	if (help==NULL)
	{
		printf("File not found");
	}
do
{
		c=fgetc(help);
		printf("%c",c);
}
	while(c!=EOF);
	fclose(help);
	system("pause");
	system("cls");
}
void showrecords()
{
	system("COLOR F4");
	int choice,y=0,x=0,count=0,found=0;
	int start=0,end=0,t=0;
	char date1[12],date2[12];
	fp=fopen("product.dat","rb");
	if(fp==NULL)
	{
		printf("\n\n\n\t\t\tCreate data base first\n");
		system("pause");
		system("cls");
	}
	else
	{
	printf("\n\n\t\t\t\tSHOW RECORDS");
	printf("\n\t\t========================================================\n");
	printf("1) Show all records\n");
	printf("2) Show records between entered dates\n");
	printf("Enter 1 or 2\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\n\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			printf("%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
		}
		fclose(fp);
		break;
		case 2:
		leap:
		printf("Enter starting date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",date1);
		printf("Enter ending date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",date2);
		x = strlen(date1);
		y=strlen(date2);
		if(x != 10|| y!=10)
		{
			printf("Invalid date format\n");
			goto leap;
		}
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(strcmp(pro.date,date1)==0)
			{
				start=pro.lineno;
				t=1;
				break;
			}
		}
		if(t!=1)
		{
			printf("\n\t\tSTART DATE DOES NOT EXIST\n");
		}
		else
		{
			t=0;
		rewind(fp);
			while(fread(&pro,sizeof(pro),1,fp)==1)
			{
			if (strcmp(pro.date,date2)==0)
			{
				end=pro.lineno;
				t=1;
			}
		}
		if(t!=1)
		{
			printf("END DATE DOES NOT EXIST\n");
		}
		else
		{
		rewind(fp);
		printf("\n\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(pro.lineno>=start && pro.lineno<=end)
			{
				printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);	
			}
		}
		fclose(fp);
		break;
	}
}
}
}
system("pause");
system("cls");
}
void paid()
{
	system("COLOR F5");
	char ch;
	int countlines=0,i,t=0;
	fp=fopen("product.DAT","rb");
	if(fp==NULL)
	{
		printf("\n\n\t\t\t\tPlease create database first\n");
	}
	else
	{
	printf("\n\n\t\t\t\tLIST OF CUSTOMERS WHO HAVE NOT PAID PURCHASE AMOUNT : \n");
	printf("\n\t\t\t==================================================================\n");
	while(fread(&pro,sizeof(pro),1,fp)==1)
	{
		countlines=pro.lineno;
	}
rewind(fp);
struct item products[countlines];
i=0;
fread(products,sizeof(struct item),countlines,fp);
	printf("\n\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
for(i=0;i<countlines;i++)
{ 
if(products[i].paid=='N'||products[i].paid=='n')
{
	printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",products[i].lineno,products[i].date,products[i].name,products[i].contact,products[i].p_id,products[i].del,products[i].paid);
	t=1;
}
}
if(t!=1)
{
	printf("\n\t\tEVERYONE HAS PAID THE PURCHASE AMOUNT\n");
}
}
system("pause");
system("cls");
}
void searchrecords()
{
	system("COLOR F3");
	int choice,id,t=0,y=0;
	unsigned long long contact;
	fp=fopen("product.DAT","rb");
	if(fp==NULL)
	{
		printf("\n\n\n\n\n\t\t\t\t\treate database first");
		system("pause");
		system("cls");
	}
	else
	{
		printf("\n\n\t\t\t\tSEARCH RECORDS");
		printf("\n\t\t\t===============================\n");
		printf("\t\t1) Search record by name\n");
		printf("\t\t2) Search record by product ID\n");
		printf("\t\t3) Search record by Contact number\n");
		printf("\t\tENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			rewind(fp);
			char name[40];
			case 1:
			printf("\t\t\nEnter the name : ");
			fflush(stdin);
			gets(name);
				printf("\n\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
			while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(strcmp(pro.name,name)==0)
				{
					t++;
			printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
				}
			}
			fclose(fp);
			if(t==0)
			{
				printf("NO SUCH NAME EXITS IN DATABASE : NOT FOUND\n\n");
			}
			break;
			
			case 2 :
			rewind(fp);
			printf("\t\t\nEnter the product ID : ");
			scanf("%d",&id);
			printf("\n\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
				while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(pro.p_id==id)
				{
					t++;
			printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
				}
			}
			fclose(fp);
			if(t==0)
			{
				printf("NO SUCH NAME ID IN DATABASE : NOT FOUND\n\n");
			}
			break;
			case 3 : 
			rewind(fp);
		jump:
		printf("Enter customer contact number: ");
		fflush(stdin);
		scanf("%llu",&contact);
		y = countdigit(pro.contact);
		if(y != 10)
		{
			printf("Invalid number format\n");
			goto jump;
		}
			printf("\n\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n\n");
				while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(pro.contact==contact)
				{
					t++;
			printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
				}
			}
			fclose(fp);
			if(t==0)
			{
				printf("NO SUCH CONTACT NUMBER EXITS IN DATABASE : NOT FOUND\n\n");
			}
			break;
			default : 
			printf("ERROR : NOT A VALID CHOICE");
		}
	}
	system("pause");
	system("cls");
}
void totalsales()
{
	system("COLOR FA");
	info=fopen("productinfo.DAT","rb");
	if(info==NULL)
	{
		printf("\n\n\n\t\t\tPLEASE ENTER PRODUCTS INFORMATION FIRST\n");
		system("pause");
		system("cls");
	}
	else
	{
		int choice,countlines,start,end,i,j=0,count,t=0,f=0;
		fp=fopen("product.DAT","rb");
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			count=pro.lineno;
		}
		rewind(fp);
		char startdate[20];
		char enddate[20];
		char name[40];
		rewind(info);
		while(fread(&data,sizeof(data),1,info)==1)
		{
			countlines=data.lineno;
		}
		rewind(info);
		int *salescount=(int*)calloc(countlines,sizeof(int));
		float *salesamount=(float*)calloc(countlines,sizeof(float));
		for(i=0;i<countlines;i++)
		{
			salescount[i]=0;
		}
		for(i=0;i<countlines;i++)
		{
			salesamount[i]=0.00;
		}
		rewind(info);
		printf("\n\t\t1) Total sales of each product during 2 given dates\n");
		printf("\n\t\t2) Total sales of each product on a givem date\n");
		printf("\n\t\t3)Total Amount of given customer name on a given date\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
		printf("\n\t\tEnter start date : ");
		fflush(stdin);
		gets(startdate);
		printf("\n\t\tEnter end date : ");
		fflush(stdin);
		gets(enddate);
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(strcmp(pro.date,startdate)==0)
		{
			t=1;
			start=pro.lineno;
			break;
		}
		}
		if(t!=1)
		{
			printf("\n\t\tNO SUCH DATE FOUND\n");
		}
		else
		{
			t=0;
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(strcmp(pro.date,enddate)==0)
		{
			t=1;
			end=pro.lineno;
		}
		}
		if(t!=1)
		{
				printf("\n\t\tNO SUCH DATE FOUND\n");
			}	
			else
			{
				i=0;
				rewind(info);
				rewind(fp);
		while(fread(&data,sizeof(data),1,info)==1)
		{
			while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(pro.lineno>=start&&pro.lineno<=end)
				{
					if(data.p_id==pro.p_id)
					{
						salescount[i]=salescount[i]+1;
						salesamount[i]=salesamount[i]+data.p_price;
					}
				}
			}
			rewind(fp);
			i++;
		}
		printf("TOTAL SALES COUNT AND TOTAL AMOUNT OF EACH PRODUCT BETWEEN %s AND %s IS AS FOLLOWS : \n\n",startdate,enddate);
		printf("\tPRODUCT ID\t\tPRODUCT NAME \t\t\t\t\t    TOTAL SALE \t TOTAL AMOUNT RECIEVED \n");
		i=0;
		rewind(info);
		while(fread(&data,sizeof(data),1,info)==1)
		{
			printf("\t  %d\t\t\t%-40s\t\t%d\t\t\t%.2f\n",data.p_id,data.p_name,salescount[i],salesamount[i]);
			i++;
		}
	}
}
		fclose(fp);
		fclose(info);
		break;
		case 2 :
		printf("\n\t\tEnter the date : ");
		fflush(stdin);
		gets(startdate);
		salescount=(int*)realloc(salescount,count);
		salesamount=(int*)realloc(salesamount,count);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(t==0)
			{
			if(strcmp(pro.date,startdate)==0)
		  {
			start=pro.lineno;
			t=1;
		  }
		    }
		if(strcmp(pro.date,startdate)==0)
		{
			end=pro.lineno;
		}
	}
	if(start==0||end==0)
	{
		printf("ERROR DATE NOT FOUND");
	}
	else
	{
			printf("\nTOTAL SALES COUNT AND TOTAL AMOUNT OF EACH PRODUCT for %s IS AS FOLLOWS : \n\n",startdate);
			printf("\tPRODUCT ID\t\tPRODUCT NAME \t\t\t\t\t    TOTAL SALE \t TOTAL AMOUNT RECIEVED \n");
	             i=0;
				rewind(info);
				rewind(fp);
		while(fread(&data,sizeof(data),1,info)==1)
		{
			while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(pro.lineno>=start&&pro.lineno<=end)
				{
					if(data.p_id==pro.p_id)
					{
						salescount[i]=salescount[i]+1;
						salesamount[i]=salesamount[i]+data.p_price;
					}
				}
			}
			rewind(fp);
			i++;
		}
	i=0;
		rewind(info);
		while(fread(&data,sizeof(data),1,info)==1)
		{
			printf("\t  %d\t\t\t%-40s\t\t%d\t\t\t%.2f\n",data.p_id,data.p_name,salescount[i],salesamount[i]);
			i++;
		}
	}
		fclose(fp);fclose(info);
		break;
		case 3 :
			printf("\n\t\tEnter the name : ");
			fflush(stdin);
			gets(name);
			printf("\n\t\tEnter the date : ");
			gets(startdate);
			int *findid = (int*)calloc(count,sizeof(int));
			t=0;
			rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(strcmp(name,pro.name) == 0 && strcmp(startdate,pro.date)==0)
				{
					findid[t] = pro.p_id;
					t++;
					f++;
				}
			}
			if(f==0)
			{
				printf("\n\t\t\tNAME OR DATE NOT FOUND\n");
			}
			else
			{
				rewind(info);
				i=0;
			while(fread(&data,sizeof(data),1,info)==1)
			{
				for(j=0;j<t;j++)
				{
				if(findid[j]==data.p_id)
				{
					salesamount[i] = salesamount[i] + data.p_price;
					salescount[i] = salescount[i] +1; 																									 
				}
			    }
			    i++;
			}
			printf("\t%s BOUGHT THESE MANY PRODUCTS ON %s : \n\n",name,startdate);
				printf("\tPRODUCT ID\t\tPRODUCT NAME \t\t\t\t\t    TOTAL SALE \t TOTAL AMOUNT RECIEVED \n\n");
				i=0;
				rewind(info);
		while(fread(&data,sizeof(data),1,info)==1)
		{
			if(salescount[i]!=0)
			{
				printf("\t  %d\t\t\t%-40s\t\t%d\t\t\t%.2f\n",data.p_id,data.p_name,salescount[i],salesamount[i]);
			}
			i++;
		}
	
			    fclose(info);
			    fclose(fp);
			    break;
			    default :
			    	printf("INVALID CHOICE\n\n ");
	}
}
}
system("pause");
system("cls");
}

void deltdatabase()
{
	system("COLOR F0");
	fp=fopen("product.DAT","rb");
	if(fp==NULL)
	{
		fclose(fp);
		printf("\n\n\t\t\tNO FILE EXISTS\n\n");
	}
	else
	{
		fclose(fp);
	char c;
	printf("\n\n\n\t\t\t\tARE YOU SURE TO DELETE THIS FILE? (Y/N) : ");
	fflush(stdin);
	scanf("%c",&c);
if(c=='Y' || c=='y')
	{
	if (remove("product.dat") == 0) 
    printf("\n\n\n\n\t\t\t\tSUCCESSFULLY DELETED\n\n"); 
   else
      printf("\n\n\n\n\t\t\t\tUnable to delete the file\n\n"); 
	}
}
system("pause");
system("cls");
}
void deltproduct()
{
	system("COLOR F0");
	info=fopen("productinfo.DAT","rb");
	if(info==NULL)
	{
		fclose(info);
		printf("\n\n\t\t\tNO FILE EXISTS\n\n");
	}
	else
	{
		fclose(info);
	char c;
	printf("\n\n\n\t\t\t\tARE YOU SURE TO DELETE THIS FILE? (Y/N) : ");
	fflush(stdin);
	scanf("%c",&c);
if(c=='Y' || c=='y')
	{
	if (remove("productinfo.dat") == 0) 
    printf("\n\n\n\n\t\t\t\tSUCCESSFULLY DELETED\n\n"); 
   else
      printf("\n\n\n\n\t\t\t\tUnable to delete the file\n"); 
	}
}
system("pause");
system("cls");
}
void update()
{
	system("COLOR F1");
	printf("\n\n\t\t\t\tUPDATE RECORD");
	printf("\n\t\t================================================\n\n");
	info=fopen("productinfo.DAT","rb+");
	if(info==NULL)
	{
		printf("\n\n\n\t\t\tPlease enter product details from menu first and then create data base. \n\n");
	}
	else
	{
		char name[50];
		int line,t=0,opt,no,x,y;
		fp=fopen("product.DAT","rb+");
		int choice;
		printf("\n\tPress 1 to edit product details\n");
		printf("\n\tPress 2 to edit customer details\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("\nSERIAL NO\tPRODUCT NAME\t\t\t\t\t\tPRODUCT ID\tPRICE\t   GRAMS PER BOX\n\n");
			while(fread(&data,sizeof(data),1,info)==1)
			{
				printf("%d\t\t%-40s\t\t%d\t\t%.2f\t	%.2f\n",data.lineno,data.p_name,data.p_id,data.p_price,data.grams);
			}
			printf("\n\n\t\tEnter the product name to edit record: ");
			fflush(stdin);
			gets(name);
			rewind(info);
			while(fread(&data,sizeof(data),1,info)==1)
			{
					if(strcmp(data.p_name,name)==0)
					{
						line=data.lineno;
						t=1;
					}
			}
			if(t==0)
			{
				printf("\t\t\tNo such record found\n");
			}
			else
			{
		rewind(info);
			 fseek(info,sizeof(struct productsinfo)*(line-1),SEEK_SET);
			 fread(&data,sizeof(struct productsinfo),1,info);
	printf("Enter Product name : ");
	fflush(stdin);
	gets(data.p_name);
	printf("Enter Product ID : ");
	scanf("%d",&data.p_id);
	printf("Enter the price for this product : ");
	scanf("%f",&data.p_price);
	printf("Enter the grams per box package : ");
	scanf("%f",&data.grams);
	fseek(info,sizeof(struct productsinfo)*(line-1),SEEK_SET);
    fwrite(&data,sizeof(data),1,info);
    fclose(fp);
    rewind(info);
    printf("\n\n\t\t\tSUCCESSFULLY UPDATED :)\n\n");
    printf("\nSERIAL NO\tPRODUCT NAME\t\t\t\t\t\tPRODUCT ID\tPRICE\t   GRAMS PER BOX\n");
    while(fread(&data,sizeof(data),1,info)==1)
			{
				printf("%d\t\t%-40s\t\t%d\t\t%.2f\t	%.2f\n",data.lineno,data.p_name,data.p_id,data.p_price,data.grams);
			}
    fclose(info);
    break;	
		}
		case 2 :
			rewind(fp);
			printf("\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
			while(fread(&pro,sizeof(pro),1,fp))
			{
			printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
			}
			printf("\n\n\t\t");
		printf("\n\t\tPress 1 to edit a record by entering customer name \n");
		printf("\t\tPress 2 to edit a record by entering serial no \n");
		scanf("%d",&opt);
		if(opt==1)
		{
			printf("\n\t\tEnter the customer name : ");
			fflush(stdin);
			gets(name);
			rewind(fp);
			while(fread(&pro,sizeof(pro),1,fp))
			{
				if(strcmp(pro.name,name)==0)
				{
				line=pro.lineno;
				t=1;
			    }
			}
			if(t!=1)
			{
				printf("NO SUCH RECORD");
			}
			else
			{
					rewind(fp);
			 fseek(fp,sizeof(struct item)*(line-1),SEEK_SET);
			 fread(&pro,sizeof(struct item),1,fp);
				 leap:
		printf("Enter todays date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",&pro.date);
		x = strlen(pro.date);
		if(x != 10)
		{
			printf("Invalid date format\n");
			goto leap;
		}
		printf("Enter full name of customer: ");
		fflush(stdin);
		gets(pro.name);
		jump:
		printf("Enter customer contact number: ");
		fflush(stdin);
		scanf("%llu",&pro.contact);
		y = countdigit(pro.contact);
		if(y != 10)
		{
			printf("Invalid number format\n");
			goto jump;
		}
		printf("enter product ID: ");
		fflush(stdin);
		scanf("%4d",&pro.p_id);
		printf("Enter delivery status(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.del);
		printf("Enter if the transaction has been made(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.paid);
		system("cls");
		fseek(fp,sizeof(struct item)*(line-1),SEEK_SET);
    fwrite(&pro,sizeof(pro),1,fp);
    fclose(info);
    rewind(fp);
    printf("\n\n\t\t\t\t\tSUCCESSFULLY UPDATED :)\n");
    printf("\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
    while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
			}
    fclose(fp);
    break;
			}
		}
		else if(opt==2)
		{
				printf("\n\t\tEnter the serial no : ");
			scanf("%d",&no);
			rewind(fp);
			while(fread(&pro,sizeof(pro),1,fp))
			{
				if(no==pro.lineno)
				{
				line=pro.lineno;
				t=1;
			    }
			}
			if(t!=1)
			{
				printf("NO SUCH RECORD\n");
			}
			else
			{
					rewind(fp);
			 fseek(fp,sizeof(struct item)*(line-1),SEEK_SET);
			 fread(&pro,sizeof(struct item),1,fp);
				 me:
		printf("Enter todays date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",&pro.date);
		x = strlen(pro.date);
		if(x != 10)
		{
			printf("Invalid date format\n");
			goto me;
		}
		printf("Enter full name of customer: ");
		fflush(stdin);
		gets(pro.name);
		project:
		printf("Enter customer contact number: ");
		fflush(stdin);
		scanf("%llu",&pro.contact);
		y = countdigit(pro.contact);
		if(y != 10)
		{
			printf("Invalid number format\n");
			goto project;
		}
		printf("enter product ID: ");
		fflush(stdin);
		scanf("%4d",&pro.p_id);
		printf("Enter delivery status(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.del);
		printf("Enter if the transaction has been made(enter 'Y' if delivered and 'N' if pending): ");
		fflush(stdin);
		scanf("%c",&pro.paid);
		system("cls");
		fseek(fp,sizeof(struct item)*(line-1),SEEK_SET);
    fwrite(&pro,sizeof(data),1,fp);
    fclose(info);
    rewind(fp);
    printf("\n\n\t\t\t\t\tSUCCESSFULLY UPDATED :)\n");
    printf("\nSR-NO\tDATE\t\tNAME\t\t\t\t\t        CONTACT NO\tPRODUCT ID\t   DELIVERY STATUS\tPAYMENT STATUS\n");
    while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				printf("\n%d\t%s\t%-40s\t0%llu\t  %d\t\t		%c\t\t%c\n",pro.lineno,pro.date,pro.name,pro.contact,pro.p_id,pro.del,pro.paid);
			}
    fclose(fp);
    break;
		}
	}
	else
	printf("n\t\tINVALID CHOICE");
break;
	default : 
	printf("\n\t\tINVALID CHOICE");
	break;	
	}
}
system("pause");
system("cls");
}
void graph()
{
	system("COLOR F5");
	int x;
	info=fopen("productinfo.DAT","rb");
	if(info==NULL)
	{
		printf("\n\n\n\t\tPLEASE ENTER THE PRODUCT DETAILS FIRST\n");
	}
	else
	{
		char startdate[15],enddate[15];
		int start,end,count,countlines,i,j,t=0;
	printf("\n\n\t\t\tGRAPH TO COMPARE SALES OF DIFFERENT PRODUCTS\n");
	printf("\n\t\t=======================================================\n");
	leap:
		printf("Enter start date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",startdate);
		x = strlen(startdate);
		if(x != 10)
		{
			printf("Invalid date format\n");
			goto leap;
		}
izaan:
		printf("Enter todays date in format(month/date/year)=sample(01/01/1999): ");
		scanf("%s",enddate);
		x = strlen(enddate);
		if(x != 10)
		{
			printf("Invalid date format\n");
			goto izaan;
		}
	fp=fopen("product.DAT","rb");
	if(fp==NULL)
	{
		printf("\n\t\t\tENTER CUSTOMER DETAILS FIRST\n");
	}
	else
	{
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
			count=pro.lineno;
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(strcmp(pro.date,startdate)==0)
		{
			start=pro.lineno;
			t=1;
			break;
		}
		}
		if(t!=1)
		{
			printf("START DATE DOES NOT EXIST\n");
		}
		else
		{
			t=0;
		rewind(fp);
		while(fread(&pro,sizeof(pro),1,fp)==1)
		{
			if(strcmp(pro.date,enddate)==0)
		{
			end=pro.lineno;
			t=1;
		}
		}
	}
		if(t!=1)
		{
			printf("NO SUCH END DATE EXISTS\n");
	    }
	    else
	    {
	    	rewind(info);
		while(fread(&data,sizeof(data),1,info)==1)
			countlines=data.lineno;
		int *freq=(int*)calloc(countlines,sizeof(int));
        for(i=0;i<countlines;i++)
        freq[i]=0;
        i=0;
        rewind(info);rewind(fp);
		while(fread(&data,sizeof(data),1,info)==1)
		
		{
			while(fread(&pro,sizeof(pro),1,fp)==1)
			{
				if(pro.lineno>=start&&pro.lineno<=end)
				{
				if(data.p_id==pro.p_id)
				{
					freq[i]=freq[i]+1;
				}
			}
			}
			rewind(fp);
			i++;
		}
		rewind(info);
		i=0;
		printf("\n\n");
while(fread(&data,sizeof(data),1,info)==1)
	{
		for(j=0;j<freq[i];j++)
		{
			if(freq[i]==0)
			{
				break;
			}
			else
			{
			printf("*");
		}
		if(j==freq[i]-1)
		{
			printf("\t%d\t%d",freq[i],data.p_id);
		}
		}
		i++;
		if(j!=0)
		printf("\n\n");
	}
	fclose(fp);fclose(info);
        }       
        }
}
system("pause");
		system("cls"); 
}
void showpd()
{
	system("COLOR F5");
	printf("\n\n\t\t\t\t\t\tPRODUCT INFORMATION\n");
	printf("\t\t\t\t\t=====================================\n\n");
	info=fopen("productinfo.dat","rb");
		if(info==NULL)
		{
			printf("\n\n\n\t\t\tError : FILE EMPTY  : Enter product details first\n\n");
		}
		else
		{
			rewind(info);
			printf("\nSERIAL NO\tPRODUCT NAME\t\t\t\t\t\tPRODUCT ID\tPRICE\t   GRAMS PER BOX\n");
			while(fread(&data,sizeof(data),1,info)==1)
	{
		printf("%d\t\t%-40s\t\t%d\t\t%.2f\t	%.2f\n",data.lineno,data.p_name,data.p_id,data.p_price,data.grams);
	}
		}
		fclose(info);
	system("pause");
	system("cls");
}
