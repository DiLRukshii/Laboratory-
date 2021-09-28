#include<stdio.h>
#include<string.h>
int total_bill=0;
char name[60];
int age;
int num;
void patientsdetails()
{
    printf("Enter your Name\t: ");
    scanf("%s",&name);
    printf("Enter your Age\t: ");
    scanf("%d",&age);
    printf("Enter your Contact Number\t: ");
    scanf("%d",&num);

}
void lab()
{
    int x=0;
    while(x!=4)
    {
        printf("\n=====Welcome to lab test=====\n\n");
        printf("1.Blood Test\n2.Urine Test\n3.Stool test\n4.Exit\n\nselect 1 or 2 or 3 : ");
        scanf("%d",&x);

        if(x==1)
        {
            printf("\n#####Blood test#####\n1.Blood group\n2.Dengue Antibody\n3.Glucose\n4.TSH\n5.Full blood count\n6.Cholesterol\n\nselect one : ");
            scanf("%d",&x);
            if(x==1)
            {
                total_bill=total_bill+490;
                x=0;
            }
            else if(x==2)
            {
                total_bill=total_bill+2900;
                x=0;
            }
            else if(x==3)
            {
                total_bill=total_bill+1300;
                x=0;
            }
            else if(x==4)
            {
                total_bill=total_bill+530;
                x=0;
            }
            else if(x==5)
            {
                total_bill=total_bill+350;
                x=0;
            }
            else if(x==6)
            {
                total_bill=total_bill+350;
                x=0;
            }
            else
            {
                printf("\nwrong entry\n");
                x=0;
            }
        }
        else if(x==2)
        {
            printf("\n#####Urine Test#####\n1.Urine Culture\n2.Urine Full\n\nselect one : ");
            scanf("%d",&x);
            if(x==1)
            {
                total_bill=total_bill+890;
                x=0;
            }
            else if(x==2)
            {
                total_bill=total_bill+340;
                x=0;
            }
            else
            {
                printf("\nwrong entry\n");
                x=0;
            }

        }
        else if(x==3)
        {
            printf("\n#####Stool Test#####\n1.Stool culture\2.Stool full\n\nselect one : ");
            scanf("%d",&x);
            if(x==1)
            {
                total_bill=total_bill+1360;
                x=0;
            }
            else if(x==2)
            {
                total_bill=total_bill+350;
                x=0;
            }
            else
            {
                printf("\nwrong entry\n");
                x=0;
            }

        }
        else if(x==4)
        {
            break;
        }
    }
    printf("\nyour total bill is %d\ndo you need to continue \n1.YES\n2.NO\n\nSelect 1 or 2 : ",total_bill);
    scanf("%d",&x);
    if (x==1)
    {
        patientsdetails();
    }

}
void main()
{
    lab();
    printf("your details submited succesfully \nplease go to room 1 to blood test\nroom 2 for urine test\nroom 3 for stool test");

}
