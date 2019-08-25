#include<stdio.h>
#include<stdlib.h>
#define max 15
int z[max],i,n,flag=0,ele,pos=max+1,ch,pos_d;


void display()
{
   if(flag==0)
    {  printf("\n empty array detected ...... ");  }
   else
    { if(pos>n && pos!=max+1)
        {n=pos;}
      for(i=0;i<n;i++)
      {  printf("\n %d->%d",i+1,z[i]);  }
    }
}

void arraydel()
{ if(flag==0)
   {printf("\n empty array detected ....");} 

  else

       { printf("\n array before is : ");
         display();
        printf("\n enter position of element to be deleted : "); 
      scanf("%d",&pos_d);
     if(pos_d>n)
       {printf("\n error.....enter valid position ");}
     else
     {
       for(i=pos_d-1;i<n;i++)
          {z[i]=z[i+1];}
       n--; 

      printf("\n array after deletion is : ");
      display();
     }
}
}
void arayinput()
{ printf("\n input number of elements to be inserted : ");
  scanf("%d",&n);
  if(n>max)
  {  printf("\n error ");
     exit(0);
  }
  else
  { for (i=0;i<n;i++)
    { printf("\n enter element %d : ",i+1);
    scanf("%d",&z[i]);flag=1;
     }
  } 
  display();
}


void arrayins()
{ if(flag==0)
      {  printf("\n empty array detected ...... ");  }

else
{
  printf("\n enter the position to insert the element : ");
  scanf("%d",&pos);
  if(pos>max||n==max)
    {printf("\n \t\t array full ...\n\n");}
  else
    
    
{
     printf("\n current array is : ");
     display();
     printf("\n enter the element to be inserted : ");
     scanf("%d",&ele);//
     for(i=n+1;i>=pos-1;i--)
     { z[i]=z[i-1];}
     z[pos-1]=ele; //
     n++;
     printf("\n after element insertion : ");
     display();
    }
}
}

void main()
{             while(1)
               {   printf("\n \n\n..............MENUE........... \n\t 1.read \n\t 2.display \n\t 3.insert \n\t 4.deletion \n\n\t5.exit\n\n\n enter your choice : ");
                   scanf("%d",&ch);
                   switch(ch)
                  {     case 1:arayinput();
                               break;
                        case 2:display();
                               break;
                        case 3:arrayins();
                               break;
                        case 4:arraydel();
                               break;
                        case 5:exit(0);
                        default:printf ("\n enter valid choice ");
                               break;
                   }
                }
}  
