#include<stdio.h>
int main()
{
    int d,m,y,d1,m1,y1;
    scanf("%d%d%d",&d,&m,&y);

    if((m==4)||(m==6)||(m==9)||(m==11))
    {
        if(d==30)
        {
            d1=1;
            m1=m+1;
            printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m1,y);

        }
        else
            {
                d1=d+1;
                printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m,y);
            }
    }
     if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))
    {
        if(d==31)
        {
            d1=1;
            m1=m+1;
            printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m1,y);
        }
        else
            {
                d1=d+1;
                printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m,y);
            }
    }
    if(m==12)
    {
        if(d==31)
        {
            d1=1;
            m1=1;
            y1=y+1;
            printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m1,y1);

        }
        else
            {
                d1=d+1;
                printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m,y);
            }
    }
    if(m==2)
    {
        if((y%4==0)||((y%100==0)&&(y%400==0)))
         {
          if(d==29)
           {
            d1=1;
            m1=m+1;
           printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m1,y);
           }
          else
          {
            d1=d+1;
            printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m,y);
          }
         }
         else
         {
          if(d==28)
          {
            d1=1;
            m1=m+1;
           printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m1,y);
           }
          else
            {
            d1=d+1;
            printf("The following date %d : %d :%d is %d : %d : %d",d,m,y,d1,m,y);
            }
         }
    }
}
