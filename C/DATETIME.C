// Enter one Number & display in words -
// 1. input - 1234 , output - one two three four only.
// 2. input - 1234 , output - one thousand two hundred thirty four only.
// we can design with sprintf() function
// we want to store date & time in a variable for store in a file / record.
// again we need to sprintf() function.
#include<dos.h>
void main()
{
   struct date d;
   struct time t;
   char doj[15],toj[15];
   clrscr();
   getdate(&d);
   gettime(&t);
   sprintf(doj,"%02d / %02d / %04d",d.da_day,d.da_mon,d.da_year);
   printf("\n\nvalue of doj var is - %s",doj);
   sprintf(toj,"%02d : %02d : %02d",t.ti_hour,t.ti_min,t.ti_sec);
   printf("\n\nvalue of doj var is - %s",toj);
   getch();
}
