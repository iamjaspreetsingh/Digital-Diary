#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>
int friends,i=0,lucky,nn,co=0,min,l=1,op,flagopt,rmon,rda,remdt,optio=0,remmo,more,tod=0,opti=0;                                                                                                                                                                                                             char pword[10]="iamjs2";
long int remyr;
int dat,mo;
long int yr;
char nam[40] ;
long char naam[40],remnam[40],password[20],na[40];

class datee
{int dd;
int mm;
int ryr,date,k,first,r;
long int yy;
long char name[40];
public:
void input()
{ //if account username is already created
if(optio==2)
{cprintf("\n\n Enter Details For FRIEND no. ");cout<<i+1+co<<" : \n\n";
 cprintf("\n Enter Name Of FRIEND : ");
 gets(name);
int chec=1;
while(chec==1)
{textcolor(YELLOW);
cprintf("\n Enter BIRTH Year : ");
cin>>yy;               struct dosdate_t q;
_dos_getdate(&q);
textcolor(CYAN);
  if((q.year-yy)<0)
 { cout<<"\n ";
 cprintf("Is Your FRIEND 'FUTURE' !     Please Write Again : "); cout<<"\n";  chec=0;}
else if((q.year-yy)>115)
{cout<<"\n ";cprintf("Is Your Friend SUPERHUMAN !    We Don't Believe ....");cout<<"\n"; chec=0;  }
chec++;
}
textcolor(YELLOW);
cprintf("\n Enter BIRTH Month : ");
cin>>mm;
while(mm>12||mm<=0)
{cout<<"\n Plz Write Again :";
cin>>mm;}

cprintf("\n Enter BIRTH Date : ");
cin>>dd;
while(dd>31||dd<=0||(mm==2&&dd==30)||dd==31&&(mm==2||mm==4||mm==6||mm==9||mm==11))
{cout<<"\n Plz Write Again :";
cin>>dd;}
cout<<"\n______________________________________________________\n";   }
else if(optio==1)
{dd=dat ;
mm=mo    ;
yy=yr     ;
strcpy(name,nam);
}
 }




  void chk()
  {
  struct dosdate_t q;
_dos_getdate(&q);
 int yr=(int)q.year-yy,da=(int)q.day-dd,mon=(int)q.month-mm;
 if((q.month-mm)<0) {yr=yr-1;mon=12-mm+q.month;}     if((q.day-dd)<0) { mon-=1;da=30-dd+q.day;}
if(l==1)
{rmon=mon;     rda=da;   remdt=dd;remmo=mm;remyr=yy;
strcpy(remnam,name);   }

 if(rmon<mon)
{strcpy(remnam,name);   remdt=dd;remmo=mm;remyr=yy;   }
 if(rmon==mon)
{if(rda<da)
  {strcpy(remnam,name);  remdt=dd;remmo=mm;remyr=yy;}  }
 if((q.month==mm)&&(q.day==dd)){tod=1;strcpy(remnam,name);}

      }


 int persbday()
 {  return((dd*100)+mm);}


 void nameee()
{
cout<<name;}

long int yyy()
{return yy;}

void namee()
{
cout<<setw(21)<<name;}
int d()
{strcpy(na,name);
return dd;}
int mmm()
{return mm;}



void output()
{  struct dosdate_t q;
_dos_getdate(&q);
int rmon,rda;			       int yr=(int)q.year-yy,da=(int)q.day-dd,mon=(int)q.month-mm;
char fort[20];             if((q.month-mm)<0) {yr=yr-1;mon=12-mm+q.month;}     if((q.day-dd)<0) { mon-=1;da=30-dd+q.day;}
if(l==1)
{rmon=mon;     rda=da;
strcpy(remnam,name);   }

else if(rmon<mon)
strcpy(remnam,name);
else if(rmon==mon)
{if(rda<da)
  strcpy(remnam,name);   }

if((mm==3&&dd>=20)||(mm==4&&dd<=18)) strcpy(fort,"ARIES");
if((mm==4&&dd>=19)||(mm==5&&dd<=19)) strcpy(fort,"TAURUS");if((mm==5&&dd>=20)||(mm==6&&dd<=20)) strcpy(fort,"GEMINI");if((mm==6&&dd>=21)||(mm==7&&dd<=21)) strcpy(fort,"CANCER");if((mm==7&&dd>=22)||(mm==8&&dd<=21)) strcpy(fort,"LEO");if((mm==8&&dd>=22)||(mm==9&&dd<=21)) strcpy(fort,"VIRGO");if((mm==9&&dd>=22)||(mm==10&&dd<=22)) strcpy(fort,"LIBRA");if((mm==10&&dd>=23)||(mm==11&&dd<=20)) strcpy(fort,"SCORPIO");if((mm==11&&dd>=21)||(mm==12&&dd<=20)) strcpy(fort,"SAGITTARIUS");if((mm==12&&dd>=21)||(mm==1&&dd<=19)) strcpy(fort,"CAPRICORN");if((mm==1&&dd>=20)||(mm==2&&dd<=18)) strcpy(fort,"AQUARIUS");if((mm==2&&dd>=19)||(mm==3&&dd<=19)) strcpy(fort,"PISCES");
if(mon<0) {mon+=12; yr-=1;}
cout<<setw(9)<<dd<<" / "<<mm<<" / "<<yy<<setw(9)<<yr<<" years "<<setw(11)<<fort<<"\n\t\t\t\t\t\t      "<<mon<<" months\n\t\t\t\t\t\t      "<<da<<" days";}

void calc()
{ int r1=(yy)%100 ;
 k=yy-r1;
int r2=(k/100);
int r3=((r1%12)+(r1/12)+(r1%12)/4)%7,c;
if(r2==21||r2==17||r2==13||r2==9||r2==5||r2==1||r2==25)
c=0;
else if(r2==20||r2==16||r2==12||r2==8||r2==4||r2==24)
c=2;
else if(r2==19||r2==15||r2==11||r2==7||r2==3||r2==23)
c=3;
else if(r2==18||r2==14||r2==10||r2==6||r2==2||r2==22)
c=5;
ryr=(r3+c)%7;


if(mm==1)
{if(yy%4==0)
date=4;
else date=3;}
else if(mm==2)
{if(yy%4==0)
date=1;
else date=7;}
else if(mm==3)
date=7;
else if(mm==4)   date=4;
else if(mm==5)   date=2 ;
else if(mm==6)   date=6 ;
else if(mm==7)   date=4 ;
else if(mm==8)   date=1 ;
else if(mm==9)   date=5 ;
else if(mm==10)  date=3 ;
else if(mm==11)  date=7  ;
else date=5 ;
 int z=0;
if(dd>date)
r=(ryr+(dd-date))%7;
else

{
r=(ryr-(date-dd))%7;
 if(r<0)
{ r=7+r;}
}


}


void calendar()
{

 first=(ryr-(date-1))%7;
 if(first<0)
{ first=7+first;}
}
void show()
{   int j=5;
k=16+(7*first);
{for(int i=1;i<=31;i++)
{
if(i==31)
{if(mm==3||mm==5||mm==9||mm==11)
break;}
if(i==29)
{if((mm==2)&&(yy%4==1||yy%4==2||yy%4==3))

break;}

if(i==30)
{if((mm==2)&&(yy%4==0))
break;}


 gotoxy(k,j);
if(i==dd)
{ textcolor(RED+128)  ;
cprintf("|") ;
cout<<i ;
textcolor(RED+128)  ;
cprintf("|");
}
else
{ cout<<i;

 }
   k=k+7;
if(k==65)
{cout<<endl;
j=j+3;k=16;} }
}
textcolor(5);
cout<<"\n\n\n  The BIRTHDAY ( "<< dd<<" / "<<mm<<" / "<<yy<<" ) Of "<<name<<"  Was  On   " ;
  textcolor(CYAN+128);
   if(r==0)
   cprintf("SUNDAY");
   else if(r==1)
   cprintf("MONDAY");
   else if(r==2)
   cprintf("TUESDAY");
   else if(r==3)
   cprintf("WEDNESDAY");
   else if(r==4)
   cprintf("THURSDAY");
   else if(r==5)
   cprintf("FRIDAY");
   else
   cprintf("SATURDAY");


 textcolor(CYAN);
   }




  void dateobt()
{         int r1=(yy)%100 ;
 k=yy-r1;
int r2=(k/100);
int r3=((r1%12)+(r1/12)+(r1%12)/4)%7,c;
if(r2==21||r2==17||r2==13||r2==9||r2==5||r2==1||r2==25)
c=0;
else if(r2==20||r2==16||r2==12||r2==8||r2==4||r2==24)
c=2;
else if(r2==19||r2==15||r2==11||r2==7||r2==3||r2==23)
c=3;
else if(r2==18||r2==14||r2==10||r2==6||r2==2||r2==22)
c=5;
ryr=(r3+c)%7;


if(mm==1)
{if(yy%4==0)
date=4;
else date=3;}
else if(mm==2)
{if(yy%4==0)
date=1;
else date=7;}
else if(mm==3)
date=7;
else if(mm==4)   date=4;
else if(mm==5)   date=2 ;
else if(mm==6)   date=6 ;
else if(mm==7)   date=4 ;
else if(mm==8)   date=1 ;
else if(mm==9)   date=5 ;
else if(mm==10)  date=3 ;
else if(mm==11)  date=7  ;
else date=5 ;
 int z=0;
if(dd>date)
r=(ryr+(dd-date))%7;
else

{
r=(ryr-(date-dd))%7;
 if(r<0)
{ r=7+r;}
}



 cout<<dd<<"/"<<mm<<"/"<<yy<<"      |    ";

  textcolor(CYAN);
   if(r==0)
   cprintf("SUNDAY");
   else if(r==1)
   cprintf("MONDAY");
   else if(r==2)
   cprintf("TUESDAY");
   else if(r==3)
   cprintf("WEDNESDAY");
   else if(r==4)
   cprintf("THURSDAY");
   else if(r==5)
   cprintf("FRIDAY");
   else
   cprintf("SATURDAY");



}











 };


 void user(char fname[])
 { char pass[80];
strcpy(pass,(strcat(password,".txt")));
 fstream fil;
  fil.open(fname,ios::binary|ios::out);

datee d;
 ifstream f(pass);
 while(!f.eof())
{ f>>dat>>mo>>yr>>nam;
	    d.input();


fil.write((char*)&d,sizeof(d));

}
	fil.close();
 f.close();





  }















 void savee(char fname[])
 {// for saving the user account
fstream fil;
datee d;    int dat,mo;
long int yr;   char nam[40],pass[80];
strcpy(pass,(strcat(password,".txt")));
fil.open(fname,ios::binary|ios::in);
 ofstream f(pass);
while(fil.read((char*)&d,sizeof(d)))
{  dat=d.d();
mo=d.mmm();
yr=d.yyy();
strcpy(nam,na);

 f<<" "<<dat<<" "<<mo<<" "<<yr<<" "<<nam;

}
 f.close();
 fil.close();

  }



void create(char fname[20])
{
fstream fil;
datee d;
fil.open(fname,ios::binary|ios::out);
for(i=0;i<friends;i++)
{d.input();
fil.write((char*)&d,sizeof(d));}
}

void createe(char fname[20])
{// creation of friend
	fstream fil;
datee d;
friends+=nn;
fil.open(fname,ios::binary|ios::out|ios::ate);
for(i=0;i<nn;i++)
{
d.input();
fil.write((char*)&d,sizeof(d));}
}




void display(char fname[])
{//display
fstream fil;
datee d;
fil.open(fname,ios::binary|ios::in);
fil.seekg((lucky-1)*sizeof(d),ios::beg);
  fil.read((char*)&d,sizeof(d));
  {
   d.namee();
     textcolor(YELLOW);
     cprintf("\n\n                CONGRAT'S "); d.namee();
   cout<<" \n\n\n\n";
    cprintf(" THE CALENDAR OF LUCKY PERSON : : ");
  getch();   clrscr();  textcolor(BLUE);
  cprintf("\n               S      M      T      W      T      F      S \n");
  d.calc();
d.calendar();
 textcolor(BLUE);
d.show();
  cout<<"\n\n Press  ENTER  Key For More Options & Any Other Key To Exit : " ;
  more=getch();

}
  fil.close();
}

void delet(char fname[],char tname[])
{//deletion of friend data
fstream fil1,fil2;
int c=1;
datee d;
fil1.open(fname,ios::binary|ios::in);
fil2.open(tname,ios::binary|ios::out);
while(fil1.read((char*)&d,sizeof(d)))
{if(!(c==nn))
fil2.write((char*)&d,sizeof(d));
c++;
}
fil1.close();
fil2.close();
}

void edit(char fname[])
{//editing friend's record
	fstream fil;
datee d;
co=nn-1-i;
fil.open(fname,ios::binary|ios::out|ios::ate);
fil.seekp((nn-1)*sizeof(d),ios::beg);
d.input();
fil.write((char*)&d,sizeof(d));
fil.close();
}
void che(char fname[])
 {fstream fil;
datee d;
fil.open(fname,ios::binary|ios::in);
while(fil.read((char*)&d,sizeof(d)))
{d.chk(); l++;
}
 fil.close();
 textcolor(RED);


  }

void dispall(char fname[])
{//display
	fstream fil;
datee d;  int sno=1;
textcolor(YELLOW);
fil.open(fname,ios::binary|ios::in);
while(fil.read((char*)&d,sizeof(d)))

{
cout<<"     "<<sno;
d.namee();
 if((sno%4)==0)
getch();

d.output();

cout<<"\n\n";
sno++;}fil.close();

}

void grp(char fname[])
{//grouping of friend's birthday by month or age
fstream fil;
datee d;
textcolor(YELLOW);

 cout<<"\n\n   Enter 1 To Group by MONTH \n   Enter 2 To Group by AGE :  ";
cin>>op;
clrscr();
cout<<"\n\n";
if(op==1)
{   int cnt=0;
 cout<<"         M O N T H S      |          N A M E S \n       ____________________________________________________________________\n\n" ;
 for(int i=1;i<=12;i++)
 {cout<<"         ";  if(i==1) cout<<"JANUARY"; else if(i==2) cout<<"FEBRUARY"; else if(i==3)cout<<"MARCH\t";  else if(i==4) cout<<"APRIL\t"; else if(i==5) cout<<"MAY\t"; else if(i==6) cout<<"JUNE\t"; else if(i==7) cout<<"JULY\t"; else if(i==8) cout<<"AUGUST\t"; else if(i==9) cout<<"SEPTEMBER" ;  else if(i==10) cout<<"OCTOBER"; else if(i==11) cout<<"NOVEMBER";else if(i==12) cout<<"DECEMBER";
  cout<<"\t | \t\t";
 fil.open(fname,ios::binary|ios::in);
 while(fil.read((char*)&d,sizeof(d)))
 {

 if(i==d.mmm())
   {

   d.nameee();
   cnt++;
   cout<<" ,";
   if(cnt%3==0)
   cout<<"\n\t\t\t  \t\t";
   }

  }cout<<"\n"; fil.close();}
}
 else if(op==2)
 { fstream fil;
datee d;
long int ag;
textcolor(YELLOW);
  cout<<"         A G E          |          N A M E S \n       ____________________________________________________________________\n\n" ;
 int temp=0;
  for(ag=1;ag<2016;ag++)
{temp=0;
fil.open(fname,ios::binary|ios::in);
while(fil.read((char*)&d,sizeof(d)))
 {
    if(ag==d.yyy())
    {temp++;}
    if(temp==1)
    {cout<<"\n          "<<2015-ag<<"\t\t|   ";temp=2; }
   if(ag==d.yyy())
   { d.namee();
    cout<<" ,";}

 }

fil.close();

}


 }


getch();





 }

void dateob(char fname[])
{clrscr();
 //date of birth 
fstream fil;
datee d;  int sno=1;
textcolor(YELLOW);
cout<<"\n\n\n  ";
cprintf("    Sno.      |          NAME          |       DATE      |      DAY");
cout<<"\n      ";
cprintf("____________________________________________________________________");
cout<<"\n\n";
textcolor(YELLOW);

fil.open(fname,ios::binary|ios::in);
while(fil.read((char*)&d,sizeof(d)))

{ cout<<"       "<<sno<<".\t|   ";
   cout<<setw(8);
d.nameee();
cout<<setw(15.5)<<"|";
cout<<"   ";
 d.dateobt();

cout<<"\n\n";
sno++;}fil.close();
getch();
}






class reminder
{//add reminder
public :
struct time t;
struct date d;
int m,h,set_0_1,set_0_2,da,mo ,ye,set_0_3,set_0_4,set_0_5;

void rerem()
{
ofstream p("E:\\hour.txt");
ofstream q("E:\\minute.txt");
ofstream r("E:\\remind.txt");
ofstream s("E:\\date.txt");
ofstream t("E:\\month.txt");
ofstream w("E:\\year.txt");
set_0_1=0,set_0_2=0,set_0_3=0,set_0_4=0,set_0_5=0;
p<<set_0_1;
q<<set_0_2;

s<<set_0_3;
t<<set_0_4;
w<<set_0_5;

p.close();
q.close();
r.close();
s.close();
t.close();
w.close();
}
void setrem()
{
ofstream p("E:\\hour.txt");
ofstream q("E:\\minute.txt");
ofstream r("E:\\remind.txt");
ofstream s("E:\\date.txt");
ofstream t("E:\\month.txt");
ofstream w("E:\\year.txt");
cout<<"\n\n\t\t\t\tEnter Hour For Reminder : ";
cin>>set_0_1;
cout<<"\n\n\t\t\t\tEnter Minute For Reminder : ";
cin>>set_0_2;

set_0_3=remdt;
set_0_4=remmo;
set_0_5=remyr;


p<<set_0_1;
q<<set_0_2;

s<<set_0_3;
t<<set_0_4;
w<<set_0_5;
p.close();
q.close();
r.close();
s.close();
t.close();
w.close();
}
void remmatch()
{ che("friends.dat");
ifstream i("E:\\hour.txt");
ifstream j("E:\\minute.txt");
ifstream k("E:\\remind.txt");
ifstream z("E:\\date.txt");
ifstream e("E:\\month.txt");
ifstream f("E:\\year.txt");
i>>set_0_1;
j>>set_0_2;

z>>set_0_3;
e>>set_0_4;
f>>set_0_5;
i.close();
j.close();
k.close();
z.close();
e.close();
f.close();
gettime(&t);
m=t.ti_min,h=t.ti_hour;
getdate(&d);
da=d.da_day,mo=d.da_mon,ye=d.da_year;


if((h==set_0_1)&&(m==set_0_2)&&(da==d.da_day)&&(mo==d.da_mon)&&(ye==d.da_year))
{

if(tod==1)
{
 clrscr();
cout<<"\n\n\n\n\t\t :::::::::::::: ";
textcolor(RED);
cprintf("A T T E N S I O N");
textcolor(YELLOW);
cout<<" :::::::::::::::::\n\n\n\n\t ";
textcolor(GREEN);
cprintf("T O D A Y   IS   Y O U R   F R I E N D 'S   B I R T H D A Y  !!  ");
 cout<<"\n\n\t\t     NAME Of FRIEND  ::     ";


  sound(523);
   delay(482);
  char rr1=toupper(remnam[0]);
  cout<<rr1;

   sound(585);
   delay(482);   cout<<remnam[1];

   sound(630);
   delay(440);   cout<<remnam[2];

   sound(523);
   delay(492);   cout<<remnam[3];

   sound(698);
   delay(486);   cout<<remnam[4];

   sound(659);
   delay(404);   cout<<remnam[5];

delay(500);

   sound(523);
   delay(482);   cout<<remnam[6];

   sound(585);
   delay(482);   cout<<remnam[7];

   sound(630);
   delay(440);   cout<<remnam[8];

   sound(523);
   delay(482);   cout<<remnam[9];

   sound(740);
   delay(370);   cout<<remnam[10];

   sound(698);
   delay(386);   cout<<remnam[11];

   delay(500);

   sound(523);
   delay(482);   cout<<remnam[12];

   sound(580);
   delay(482);   cout<<remnam[13];

   sound(523);
   delay(482);   cout<<remnam[14];

   sound(880);
   delay(328);   cout<<remnam[15];

   sound(698);
   delay(386);   cout<<remnam[16];

   sound(659);
  delay(404);    cout<<remnam[17];




    sound(587);
   delay(440);   cout<<remnam[18];

   sound(988);
   delay(320);

   sound(988);
   delay(320);

   sound(880);
   delay(328);

   sound(698);
   delay(386);

   sound(740);
   delay(370);




   sound(698);
   delay(386);
 nosound();

 }
}

 }

};

class TIME
{
public :
struct time t;
int s,m,h,p;
void showclock()
{
gettime(&t);
s=t.ti_sec,m=t.ti_min,h=t.ti_hour;

cout<<"\n\n\t\t\t";

textcolor(3);


cprintf(" %2d:%02d:%02d",h,m,s);
}
};
class DATE
{
public :
int newdate;
struct date d;
int p,m,y;
void showdate()
{
getdate(&d);
p=d.da_day;
m=d.da_mon;
y=d.da_year;
cout<<"\n\n\t\t\t\t"<<p<<"-"<<m<<"-"<<y;

newdate=(p + (2 * m)+((6*(m+1))/10)+y+(y/4)-(y/100)+(y/400)+1)%7;

switch (newdate)
{
case 0:
{
puts("\n\n\t\t\t\tThe Day is Sunday.");
break;
}
case 1:
{
puts("\n\n\t\t\t\tThe Day is Monday.");
break;
}
case 2:
{
puts("\n\n\t\t\t\tThe Day is Tuesday.");
break;
}
case 3:
{
puts("\n\n\t\t\t\tThe Day is Wednesday.");
break;
}
case 4:
{
puts("\n\n\t\t\t\tThe Day is Thursday.");
break;
}
case 5:
{
puts("\n\n\t\t\t\tThe Day is Friday.");
break;
}
case 6:
{
puts("\n\n\t\t\t\tThe Day is Saturday.");
break;
}
}
}
};

class STOP
{
int b;
public:
int newdate;
STOP(){}
STOP(int l){b=l;}
void display()
{
int j,m,h,s,ms,a;
ms=b%100;
a=b/100;
s=a%60;
j=a/60;
m=j%60;
h=a/3600;
cout<<"\n\n\t\t\t\t";
cout<<h<<":"<<m<<":"<<s<<":"<<ms;
}
};


class SET : public reminder
{
public :
void show()
{clrscr();
textcolor(YELLOW);
cout<<"\n\n\t     ";
cprintf("R E M I N D E R");
cout<<"   :\n\n";
textcolor(GREEN);
cprintf(" Press 1 To Set Reminders  of All Friends");
cout<<"\n\n";
cprintf(" Press 2 To Set Reminders  of Any Friend");
 cout<<"\n\n";
cprintf(" Press 3 To Reset Reminders ");    cout<<"\n\n";
cprintf(" Press 4 To Exit");   cout<<"\t : ";


}
};
























       union REGS in,out;
// adding the mouse functionality
       int callmouse()
       {
	      in.x.ax=1;
	      int86(51,&in,&out);
	      return 1;
       }
       void mouseposi(int &xpos,int &ypos,int &click)
       {
	      in.x.ax=3;
	      int86(51,&in,&out);
	      click=out.x.bx;
	      xpos=out.x.cx;
	      ypos=out.x.dx;
	}
       int mousehide()
       {
	      in.x.ax=2;
	      int86(51,&in,&out);
	      return 1;
       }
      void setposi(int &xpos,int &ypos)
      {
	     in.x.ax=4;
	     in.x.cx=xpos;
	     in.x.dx=ypos;
	     int86(51,&in,&out);
      }






















void main()
{
 textcolor(YELLOW);
 clrscr();   char cz[10];
 cout<<"\n\n\n\n\n\n\t\t Enter Password :: ";
 for(int i=0;i<5;i++)
 {cz[i]=getch();
 cout<<"*";}
  getch();
  clrscr();

  if(!(strcmp(cz,pword)==0))
  cout<<"\n\n\n\n\t\t\t  S O R R Y \n\n\t Its A WRONG PASSWORD -- ";
 else
 {
 int j=0,z=1,i;

for(z=1;z<26;z++)
{ gotoxy(34,z)  ;
cprintf(" |  | ");
 }
delay(500);
clrscr();
gotoxy(1,1);









gotoxy(1,1);

// front screen animation
for(i=13;i>1;i--)
{gotoxy(18-i,i+13);
cprintf(" | ");   }
for(i=13;i>1;i--)
{gotoxy(60+i,12+i);
cprintf(" | ");   }


gotoxy(1,1);

 for(i=0;i<13;i++)
{
gotoxy(i+5,i);
cprintf(" | ");   }

  for(i=13;i>1;i--)
{gotoxy(60+i,14-i);
cprintf(" | ");   }

  delay(500);
   clrscr();
   gotoxy(1,1);
   for(i=0;i<13;i++)
{gotoxy(i,i);
cprintf(" | ");   }
for( i=15;i<26;i++)
{  j=26-i;
gotoxy(j,i);
cprintf(" | ");   }

gotoxy(1,1);
for(i=13;i>1;i--)
{gotoxy(65+i,i+13);
cprintf(" | ");   }
for(i=1;i<13;i++)
{gotoxy(66+i,13-i);
cprintf(" | ");   }
gotoxy(22,5);
textcolor(4);
cout<<"     ";cprintf("D I G I T A L    D I A R Y  ");cout<<" \n\n\t\t\t     ";cprintf(" D E V E L O P E R S ") ;
textcolor(CYAN+128);
cout<<"\n\n\t\t     ";
cprintf("_____________________________________");
textcolor(GREEN);
cout<<"\n\n\t\t      ";
cprintf("Retrieves  Right Date At Right Time");
textcolor(CYAN+128);
cout<<"\n\t\t     ";
cprintf("_____________________________________");cout<<"\n\n\n\n\n\n \t\t\t    ";
textcolor(RED);
cprintf(" D E V E L O P E D   B Y  : ");cout<<"\n\n\t               ";   char pr[50]="-----______ Jaspreet Singh ______------";
for(i=0;i<50;i++)
{delay(90);
cout<<pr[i];
}
textcolor(RED);
cout<<"\n\n\n\n\t\t\t";
cprintf("L O A D I N G");

for(int x=1;x<10;x++)
{
cout<<" - ";
delay(850);
}







  textcolor(YELLOW);

     clrscr();

	       textcolor(GREEN);
	     cout<<"\n\n\t\t  ";
    cprintf("* * * *  W E L C O M E    T O   * * * * ");
    cout<<"\n\n\t\t     ";
cprintf("D I A R Y  O F  C A L E N D A R ");
cout<<"\n\t\t";
textcolor(RED+128);
cprintf("_____________________________________________");
textcolor(YELLOW);
cout<<"\n ";

 cout<<"\t\t";
  int x1,y1,cl1,a1,b1;
//asks for an existing or new member
	     cout<<"\n";                 textcolor(YELLOW);
	     cprintf("    ____________________________________________________________________   ");
	     cout<<"\n\n";
	     cprintf("  |        EXISTING    MEMBER     |        |      NEW    MEMBER     |   ");
	     cout<<"\n";
	     cprintf("    _____________________________________________________________________  ");
	     cout<<"\n\n     ";
	     cprintf("(Use Your Mouse : LEFT Click On Any Option To Select It ,                                         & LEFT Click Anywhere Else To Exit )\n");
	     cout<<"\n\n\n\n";

	     int g1=DETECT,m1;
	     initgraph(&g1,&m1,"c:\tc\bgi");
	     a1=100;
	     b1=400;
	     setposi(a1,b1);
	     callmouse();
	     do
	     {
		    mouseposi(x1,y1,cl1);
			gotoxy(10,9);



		     if((cl1==1)&&(x1>31)&&(x1<320)&&(y1<7200))
		   { optio=1; break;
		 }
		  else  if((cl1==1)&&(x1>380)&&(x1<601)&&(y1<7200))
		   { optio=2; break;
		 }

		   else if(cl1==1) {optio=3;break; }


	     }while(!kbhit());


















   if(optio==1)
   { clrscr();


   textcolor(YELLOW);
   cout<<"\n\n\n    ";
   cprintf(" Enter Your USERNAME To Access The Account : ");
   gets(password);
    user("friends.dat");
      more=13;

   }

  if(optio==3)
 clrscr();




if((optio==2)||(optio==1))

{


if(optio==2)
{textcolor(YELLOW);
clrscr();
cout<<"\n\n\n         ";
 datee d;
 textcolor(RED);
 cprintf("              T H E   D I A R Y   M A K E R");
 cout<<"\n        ";
 textcolor(GREEN+128);
 cprintf("            ___________________________________");
 cout<<"\n\n\n  ";
 textcolor(YELLOW);
cprintf("ENTER TOTAL NO. OF FRIENDS YOU HAVE ::  ");
cin>>friends;
create("friends.dat");


  clrscr();
randomize();
lucky= random(friends)+1;



cout<<"\n\n ";
textcolor(GREEN);
cprintf("______________________________________________________________________________");
cout<<"\n\n";
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE        ");
cprintf("______________________________________________________________________________");
cout<<"\n\n\n";
textcolor(YELLOW);
dispall("friends.dat");
textcolor(GREEN);
cprintf("______________________________________________________________________________");
getch();

cout<<"\n\n\n\n         ";
textcolor(YELLOW);
cprintf("TODAY THE LUCKIEST PERSON AMONGST YOU IS ::");
//using random function
display("friends.dat");
}
{
if(more==13)
do{
// the functionalities
    int x,y,cl,a,b;
	     clrscr();
	     cout<<"\n";                 textcolor(YELLOW);
	     cprintf("________________________________________________________________________________");
	     cout<<"\n";
	     cprintf(" | ADD |  | EDIT |  | DELETE |  | GROUP |  | DAY |  | REMINDER |  | SPECIALITY |");
	     cprintf("________________________________________________________________________________");
	     cout<<"\n\n     ";
	     cprintf("(Use Your Mouse : LEFT Click On Any Option To Select It ,                                         RIGHT Click To Know More About Options ..                                       & LEFT Click Anywhere Else To Exit )\n");
	     cout<<"\n\n\n\n";

	     int g=DETECT,m;
	     initgraph(&g,&m,"c:\tc\bgi");
	     a=100;
	     b=400;
	     setposi(a,b);
	     callmouse();
	     do
	     {
		    mouseposi(x,y,cl);
		    gotoxy(10,9);

		     if((cl==1)&&(x>17)&&(x<52)&&(y<25000))
		   { opti=1; break;
		 }
		  else  if((cl==1)&&(x>85)&&(x<140)&&(y<2500))
		   { opti=2; break;
		 }

	       else  if((cl==1)&&(x>170)&&(x<231)&&(y<2500))
		   { opti=3; break;
		 }
  else  if((cl==1)&&(x>270)&&(x<304)&&(y<2500))
		   { opti=4; break;
		 }
  else  if((cl==1)&&(x>338)&&(x<393)&&(y<2500))
		   { opti=5; break;
		 }
  else  if((cl==1)&&(x>425)&&(x<500)&&(y<2500))
		   { opti=6; break;
		 }
  else  if((cl==1)&&(x>540)&&(x<631)&&(y<2500))
		   { opti=7; break;
		 }
   else if(cl==2) {opti=8;break;}
   else  if(cl==1) {opti=9;break;}			      } while(!kbhit());
   cout<<"\n\n";
   if(optio==1)
   optio++;
if(opti==1)
{
cout<<"\n How Many More Friends You Want To Enter : " ;
cin>>nn; co=friends;

createe("friends.dat");      }
else if(opti==2)
{int fry;
cout<<"\n\n\n How Many FRIEND Records You Want To Edit : ";
cin>>fry;
for(int j=1;j<=fry;j++)
{cout<<"\n Which Friend No. You Want To Edit : ";
cout<<"\n (If You Don't Remember Friend No. Enter 'B'\ 'b' To go back )    :   ";
cin>>(char)nn;
if((nn=='b'||nn=='B'))

{clrscr();
textcolor(BLUE);
textcolor(BLUE);
cout<<"\n\n    S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE    \n\n\n";

dispall("friends.dat");
cout<<"\n\n\n Now Enter Which Friend no. you want to Edit :  ";
cin>>nn;}
else nn-=48;
 i=nn-1;
edit("friends.dat");  } }
else if(opti==3)
{
int fry;
cout<<"\n\n\n How Many FRIEND Records You Want To Delete : ";
cin>>fry;
for(int j=1;j<=fry;j++)
{
cout<<"\n Which Friend no. you want to delete :  ";
cout<<"\n (If You Don't Remember Friend No. Enter ' B '/ 'b' To go back )    :   ";

cin>>(char)nn;
if((nn=='b'||nn=='B'))
{clrscr();

textcolor(BLUE);
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE  ");
cout<<"\n\n\n";
dispall("friends.dat");
cout<<"\n\n\n Now Enter Which Friend no. you want to delete :  ";
cin>>nn;}
else nn-=48;
delet("friends.dat","temp.dat");
remove("friends.dat");
rename("temp.dat","friends.dat");     }
friends-=fry;
}


else if(opti==4)
{

grp("friends.dat");
}
else if(opti==5)
{
dateob("friends.dat");
}
else if(opti==6)
{


 int i,x,y;
TIME A;
DATE B;
SET C;

reminder e;

start:
clrscr();


while(!kbhit())
{   delay(1000);
    clrscr();

textcolor(YELLOW);
cout<<"\n\n\t\t";
cprintf("_________________________________________________")   ;
A.showclock();
B.showdate();
textcolor(YELLOW);
cout<<"\n\n\t\t";
cprintf("_________________________________________________")  ;

cout<<"\n\n\n\n\t\t\t\tPress Any Key To Set REMINDER Or To Exit \n";


e.remmatch();


cout<<"\n\n\t\t";

} getch();

cout<<"\n\n";
setting:
C.show();
cin>>y;
clrscr();
 if(y==1)
{e.setrem();goto start;   }

else if(y==2)
{ clrscr();
textcolor(YELLOW);
 cout<<"\n\n";
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE  ");
cout<<endl;
textcolor(GREEN);
cprintf("_______________________________________________________________________________");cout<<"\n\n\n";
dispall("friends.dat");
 textcolor(GREEN);
cprintf("_______________________________________________________________________________");

cout<<"\n\n ENTER FRIEND NO. : ";
int f;
cin>>f;
while(f>friends)
{ cout<<"\n\t TRY AGAIN : \n\n\tENTER FRIEND NO. :  ";
cin>>f; }
e.setrem();goto start;}
else if(y==3)
{e.rerem();goto start;}
else
{ goto end; }
i=0;
start1:
while(!kbhit())
{
delay(10);
clrscr();
if(x==2)
{  clrscr();
i=i+1;
STOP S(i);
S.display();
}

}

getch();
goto setting;

end:
}

else if(opti==7)
{int opt;
cout<<"\n\n  Enter 1 To SEE Which Famous PERSONALITY Your Friend Share His / Her B'day    \n\n  Enter 2 To SEE Which World Occasion Is On Your Friend's B'day \n\n  Enter 3 To See The INVENTIONS And DISCOVERIES That Took Place  : : ";
cin>>opt;
if(opt==1)
{
int choi;
 textcolor(YELLOW);
 cout<<"\n\n\n\t";
 cprintf("Press 1 To See For All Friends");
 cout<<"\n\t";
  cprintf("Press 2 To See For Any Particular Friend  ::  ");
    cin>>choi;

 clrscr();
if(choi==1)
{
   clrscr();
 char n[70];
int d,dd;
fstream fil;
datee s;
textcolor(CYAN);
fil.open("friends.dat",ios::binary|ios::in);
cout<<"\n\n\t    ";cprintf("Personality's Name        |       Friend's  Name  ");cout<<"\n\t  ";
while(fil.read((char*)&s,sizeof(s)))

{
dd=s.persbday();
int g=0;

ifstream f1("person.txt");

while(!f1.eof())
{
f1.getline(n,70,'.');
f1>>d;
if(d==dd)
{ delay(500);
cout<<n<<"\n";g++; } }
f1.close();
if(g==0)
{cout<<"(  Not Found in The Database  )\t"; s.namee();}
else
{cout<<setw(35)<<"      ";
s.namee();         }
cout<<"\n\n\n\n";
}
fil.close();}
else if(choi==2)
{ textcolor(CYAN);
 cout<<"\n\n";
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE  ");
cout<<endl;
textcolor(GREEN);
cprintf("_______________________________________________________________________________");cout<<"\n\n\n";
dispall("friends.dat");
 textcolor(GREEN);
cprintf("_______________________________________________________________________________");
int fno;
cout<<"\n\n ENTER FRIEND NO. : ";
cin>>fno;
while(fno>friends)
{cout<<"\n TRY AGAIN \n ENTER FRIEND NO. : ";
cin>>fno; }

   clrscr();
 char n[70];
int d,dd,sn=1;
fstream fil;
datee s;
textcolor(YELLOW);
fil.open("friends.dat",ios::binary|ios::in);
while(fil.read((char*)&s,sizeof(s)))

{
 if(sn==fno)
{dd=s.persbday();
 cout<<"\n\n\t    ";cprintf(" Personality's Name         |       Friend's  Name   ");
 cout<<"\n\n\t";

ifstream f1("person.txt");
while(!f1.eof())
{
f1.getline(n,70,'.');
f1>>d;
if(d==dd)
{
cout<<n;}
}
f1.close(); }
cout<<setw(32);
if(sn==fno)
s.namee();
cout<<"\n\n\n\n";

sn++;
}

  fil.close();
}
else cout<<"\n  ____ Wrong Input____ ";

}











else if(opt==2)
{   int choi;
 textcolor(YELLOW);
 cout<<"\n\n\n\t";
 cprintf("Press 1 To See For All Friends");
 cout<<"\n\t";
  cprintf("Press 2 To See For Any Particular Friend  ::  ");
    cin>>choi;

 clrscr();
if(choi==1)
{ clrscr();
  char n[150];
int d,dd;
fstream fil;
datee s;
textcolor(CYAN);
fil.open("friends.dat",ios::binary|ios::in);
cout<<"\n\n\t    ";cprintf("    World  Occasion     |       Friend's  Name  ");cout<<"\n\t  ";
while(fil.read((char*)&s,sizeof(s)))

{
dd=s.persbday();
 int g=0;

ifstream f1("oc.txt");

while(!f1.eof())
{  f1>>d;
f1.getline(n,150,'.');

if(d==dd)
{ delay(500);
cout<<n<<"\n";g++; } }
f1.close();
if(g==0)
{cout<<" (  Not Found in The Database  )\t"; s.namee();}
else
cout<<setw(35)<<"    ";
s.namee();
cout<<"\n\n\n\n";
}
fil.close();}
else if(choi==2)
{ textcolor(CYAN);
 cout<<"\n\n";
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE  ");
cout<<endl;
textcolor(GREEN);
cprintf("_______________________________________________________________________________");cout<<"\n\n\n";
dispall("friends.dat");
 textcolor(GREEN);
cprintf("_______________________________________________________________________________");
int fno;
cout<<"\n\n ENTER FRIEND NO. : ";
cin>>fno;
while(fno>friends)
{cout<<"\n TRY AGAIN \n ENTER FRIEND NO. : ";
cin>>fno; }

   clrscr();
 char n[150];
int d,dd,sn=1;
fstream fil;
datee s;
textcolor(YELLOW);
fil.open("friends.dat",ios::binary|ios::in);
while(fil.read((char*)&s,sizeof(s)))

{
 if(sn==fno)
{dd=s.persbday();
 cout<<"\n\n\t     ";cprintf(" World  Occasion         |       Friend's  Name   ");
 cout<<"\n\n\t";

ifstream f1("oc.txt");
while(!f1.eof())
{
 f1>>d;
f1.getline(n,150,'.');

if(d==dd)
{
cout<<n;}
}
f1.close(); }
cout<<setw(32)<<"   ";
if(sn==fno)
s.namee();
cout<<"\n\n\n\n";

sn++;
}

  fil.close();
}
else cout<<"\n  ____ Wrong Input____ ";

  }

    else if(opt==3)
{   int choi;
 textcolor(YELLOW);
 cout<<"\n\n\n\t";
 cprintf("Press 1 To See For All Friends");
 cout<<"\n\t";
  cprintf("Press 2 To See For Any Particular Friend  ::  ");
    cin>>choi;

 clrscr();
if(choi==1)
{ clrscr();
  char n[250];
int d,dd;
fstream fil;
datee s;
textcolor(CYAN);
fil.open("friends.dat",ios::binary|ios::in);

while(fil.read((char*)&s,sizeof(s)))

{
dd=s.yyy();
cout<<"\n\n\t ";cprintf(" Friend's  Name  :: ");cout<<"  ";

s.namee();
cout<<"\n\n\n\t ";
cprintf(" Invention On His B'day  :: ");cout<<"\n\n\t  ";
ifstream f1("inv.txt");

while(!f1.eof())
{  f1>>d;
f1.getline(n,250,'.');

if(d==dd)
{ delay(500);
cout<<n<<"\n\t"; } }
f1.close();


cout<<"\n\n\n\n";
}
fil.close();}
else if(choi==2)
{ textcolor(CYAN);
 cout<<"\n\n";
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE  ");
cout<<endl;
textcolor(GREEN);
cprintf("_______________________________________________________________________________");cout<<"\n\n\n";
dispall("friends.dat");
 textcolor(GREEN);
cprintf("_______________________________________________________________________________");
int fno;
cout<<"\n\n ENTER FRIEND NO. : ";
cin>>fno;
while(fno>friends)
{cout<<"\n TRY AGAIN \n ENTER FRIEND NO. : ";
cin>>fno; }

   clrscr();
 char n[250];
int d,dd,sn=1;
fstream fil;
datee s;
textcolor(YELLOW);
fil.open("friends.dat",ios::binary|ios::in);

while(fil.read((char*)&s,sizeof(s)))

{
 if(sn==fno)
{dd=s.yyy();
cout<<"\n\n\t ";cprintf(" Friend's  Name  :: ");cout<<"  ";

s.namee();
cout<<"\n\n\n\t ";
cprintf(" Invention On His B'day  :: ");cout<<"\n\n\t  ";
ifstream f1("inv.txt");


while(!f1.eof())
{
 f1>>d;
f1.getline(n,250,'.');

if(d==dd)
{
cout<<n;}
}
f1.close(); }


sn++;
}

  fil.close();
}
else cout<<"\n  ____ Wrong Input____ ";

  }


 }

















else if(opti==8)
{clrscr();
cout<<"\n\n\n\t- ADD lets You to Add Any No. of Friend Records\n\n\t- EDIT lets You Edit Any No. of Friend Records\n\n\t- DELETE lets You Delete Any No. of Friend Records\n\n\t- DAY lets You to See the Day Of Birth Of Your Friend\n\n\t- GROUP lets You Group Your Friend Records Either By AGE or By MONTH\n\n\t- REMINDER lets You Set Reminder of Birthday of Your Friends\n\n\t- SPECIALITY lets You Know The Speciality of That Day : \n\t\t\t * Famous PERSONALITIES Born\n\t\t\t * World OCCASIONS Celebrated\n\t\t\t * INVENTIONS & DISCOVERIES Made";
	    }





if(opti==9)
break;








cout<<"\n\n\t\t  PRESS '<---' Arrow Key To Go Back To OPTIONS & \n\t\t  Any Other Key To EXIT :  ";
flagopt=getch();
flagopt=getch(); }

while(flagopt==75);


clrscr();
textcolor(RED);
cout<<"\n\n\n                             ";char tr[25]="YOUR    TRUE     FRIENDS ";      for( z=0;z<25;z++) {delay(65);cout<<tr[z];}
cout<<" \n";
cout<<"\n\n";
textcolor(GREEN);
cprintf("______________________________________________________________________________");
cout<<"\n\n";
textcolor(YELLOW);
cprintf(" S.no. ::        NAME         ::      BIRTH      ::   AGE  ::    FORTUNE  ");
cout<<endl;
textcolor(GREEN);
cprintf("_______________________________________________________________________________");cout<<"\n\n\n";
dispall("friends.dat");
 textcolor(GREEN);
cprintf("_______________________________________________________________________________");
     cout<<"\n\n\n   ";cprintf("NOTE : Don't Forget To Wish : ");
     che("friends.dat");
     cout<<remnam<<endl;
     textcolor(CYAN);
     if(tod==1)
     cprintf("Oh! Oh! HAPPY BIRTHDAY");
     else
     cprintf(" ( As His/Her B'day Is Nearest Among Your All FRIENDS )");

       getch();
clrscr();







gotoxy(1,1);


       textcolor(YELLOW);
 cprintf("------------------------------------------------------------------------------");
 for(i=0;i<24;i++)
  {cout<<"\n";cprintf("|");}
   cprintf("------------------------------------------------------------------------------");
 }
	    for(i=1;i<25;i++)
	    {gotoxy(80,i);
	    cprintf("|");}
	       int save;
	    gotoxy(3,5);
	     cprintf("::: Do You Want To Save Your Friend File :::");

	     cout<<"\n   ";
	    cprintf("Enter 1 For  Y E S ");
	     cout<<"\n   ";
	    cprintf("Enter 2 For  N O  :  ");
	     cin>>save;
	     if(save==1)
		    { cout<<"\n   Enter USERNAME :  ";
	     gets(password);
		     //save your account by username
		     // a text file of username is created in bin
	      if((optio==1)||(optio==2))
	    savee("friends.dat");    }
	      gotoxy(10,5);

      cout<<"\n\n\n\n\n\n\t\t\t ";
      char k[20]="T H A N K  Y O U ";

   for(int q=0;q<20;q++)
  { cout<<k[q];  delay(100);}
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
    textcolor(YELLOW);
    cprintf("Rate and review it");

} }
getch();
}


