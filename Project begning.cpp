#include<stdio.h>
#include<conio.h>
#include<string.h>
void mark_sheet(int);
int search(void); 
struct student_info
{
	char name[30];
	int roll_no;
	int sem;
	char dprt[50];
}student[2];
struct marks_info
{
	int BE, PF, ICT, ISL, ENG, MATH;
}mark[2];
main()
{
	int i, j, s_t=0;
	char selection;
	for(i=0;i<2;i++)
	{
		printf("Enter name: ");
		scanf("%s",&student[i].name);
		printf("Enter Roll No.: ");
		scanf("%d",&student[i].roll_no);
		printf("Enter semester: ");
		scanf("%d",&student[i].sem);
		printf("Enter department: ");
		scanf("%s",&student[i].dprt);
		printf("\n");
//		printf("Enter name: ");
//		gets(student[i].name);
//		printf("Enter Roll No.: ");
//		scanf("%d",&student[i].roll_no);
//		printf("Enter semester: ");
//		scanf("%d",&student[i].sem);
//		printf("Enter department: ");
//		gets(student[i].dprt);
//		for(j=0;j<50;j++)
//		{
//			student[i].dprt[j]=getche();
//			if(student[i].dprt[j]=='\r')
//			{
//				break;
//			}
//		}
		//printf("\n");
	}
	printf("\n\nMarks adding chart\n\n\n");
	
	for(i=0;i<2;i++)
	{
		printf("Enter marks\n");
		printf("Name: %s\n",student[i].name);
		printf("Department: %s\n",student[i].dprt);
		printf("Roll No.: %d\n",student[i].roll_no);
		printf("Semester: %d\n\n",student[i].sem);
		printf("Basic Electronics: ");
		scanf("%d",&mark[i].BE);
		printf("Programming Fundamental: ");
		scanf("%d",&mark[i].PF);
		printf("ICT: ");
		scanf("%d",&mark[i].ICT);
		printf("English: ");
		scanf("%d",&mark[i].ENG);
		printf("Islamiat: ");
		scanf("%d",&mark[i].ISL);
		printf("Mathematics: ");
		scanf("%d",&mark[i].MATH);
        printf("Total marks= %d\n\n",mark[i].BE+mark[i].PF+mark[i].ICT+mark[i].ENG+mark[i].ISL+mark[i].MATH);
	}
	for(i=0;i<2;i++)
	{
		mark_sheet(i);
	}
	printf("Do you want to search any mark sheet if yes press 'y' or 'Y' if no press 'n' or 'N': ");
	selection=getche();
	if(selection=='y'||selection=='Y')
	{
		s_t=search();
		if(s_t==0)
		{
			printf("\nYour entered data does not exist in our records\n");
			printf("Do you again want to search any Marks sheet if yes press 'y' or 'Y' if no press 'n' or 'N'");
			selection=getche();
			if(selection=='y'||selection=='Y')
			{
				s_t=search();
				if(s_t==0)
				{
					printf("\nYour entered data does not exist in our records ThankYou\n");
				}
			}
			else
			printf("\nYou don't want to search any data");	
		}
	}
	else
	{
		printf("\nYou don't want to search any data ThankYou");
	}
	
}
void mark_sheet(int i)
{
	int TMO[2];
	float P_BE, P_PF, P_ICT, P_ENG, P_ISL, P_MATH, per[2];
	P_BE=(mark[i].BE*100)/100;
	P_PF=(mark[i].PF*100)/100;
	P_ICT=(mark[i].ICT*100)/100;
	P_ENG=(mark[i].ENG*100)/100;
	P_ISL=(mark[i].ISL*100)/100;
	P_MATH= (mark[i].MATH*100)/100;
	TMO[i]=mark[i].BE+mark[i].PF+mark[i].ICT+mark[i].ENG+mark[i].ISL+mark[i].MATH;
	per[i]=(TMO[i]*100)/600;
	
	printf("Name: %s\n",student[i].name);
	printf("Roll No.: %d\n",student[i].roll_no);
	printf("Department: %s\n",student[i].dprt);
	printf("semester: %d\n",student[i].sem);
	printf("Institute: Usman Institute Of Technology Affilated with NED University Of Engineering\n\n");
	printf("Subject                     Total Marks     Marks Obtain     Percentage");
	printf("\nBasic Electronics              100             %d           %.2f%%",mark[i].BE,P_BE );
	printf("\nProgeamming Fundamental        100             %d           %.2f%%",mark[i].PF, P_PF);
	printf("\nICT                            100             %d           %.2f%%",mark[i].ICT, P_ICT);
	printf("\nEnglish                        100             %d           %.2f%%",mark[i].ENG, P_ENG);
	printf("\nIslamiat                       100             %d           %.2f%%",mark[i].ISL, P_ISL);
	printf("\nMathematics                    100             %d           %.2f%%",mark[i].MATH,P_MATH);
    printf("\nTOTAL MARKS                    600             %d          %.2f%%\n",TMO[i],per[i]);	
    (per[i]>=94)?printf("\nGRADE= A+"):(per[i]>=85&&per[i]<94)?printf("\nGRADE= A"):(per[i]>=80&&per[i]<85)?printf("\nGRADE= A-"):(per[i]>=75&&per[i]<80)?printf("\nGRADE= B+"):(per[i]>=70&&per[i]<75)?printf("\nGRADE= B"):(per[i]>=67&&per[i]<70)?printf("\nGRADE= B-"):(per[i]>=64&&per[i]<67)?printf("\nGRADE= C+"):(per[i]>=60&&per[i]<64)?printf("\nGRADE= C"):(per[i]>=57&&per[i]<60)?printf("\nGRADE= C-"):(per[i]>=54&&per[i]<57)?printf("\nGRADE= D+"):(per[i]>=50&&per[i]<54)?printf("\nGRADE= D"):printf("\nGRADE= F");
    if(per[i]>=85)
    printf("\nGPA= 4.0");
    else if(per[i]>=80&&per[i]<85)
    printf("\nGPA= 3.7");
    else if(per[i]>=75&&per[i]<80)
    printf("\nGPA= 3.4");
    else if(per[i]>=70&&per[i]<75)
    printf("\nGPA= 3.0");
    else if(per[i]>=67&&per[i]<70)
    printf("\nGPA= 2.7");
	else if(per[i]>=64&&per[i]<67)
    printf("\nGPA= 2.4");
    else if(per[i]>=60&&per[i]<64)
    printf("\nGPA= 2.0");
    else if(per[i]>=57&&per[i]<60)
    printf("\nGPA= 1.7");
    else if(per[i]>=54&&per[i]<57)
    printf("\nGPA= 1.4");
    else if(per[i]>=50&&per[i]<54)
    printf("\nGPA= 1.0");
    else
    printf("\nGPA= 0.0");    
    
	printf("\n\n");
}
int search(void)
{
	int i, s_rn, s_sem, n, d, s_t=0;
	char s_name[30], s_dprt[50];
	printf("\nEnter Name: ");
	scanf("%s",&s_name);
	printf("Enter Roll No.: ");
	scanf("%d",&s_rn);
	printf("Enter department: ");
	scanf("%s",&s_dprt);
	printf("Enter Semester: ");
	scanf("%d",&s_sem);
	for(i=0;i<2;i++)
	{
		n=strcmp(student[i].name,s_name);
		d=strcmp(student[i].dprt,s_dprt);
		if(n==0&&student[i].roll_no==s_rn&&d==0&&student[i].sem==s_sem)
		{
			printf("\n\n");
			mark_sheet(i);
	        s_t=1;
		}
	}
	return s_t;
}
