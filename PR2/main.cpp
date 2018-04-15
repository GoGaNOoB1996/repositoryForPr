#include <QCoreApplication>
#include <simc.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool t=false;
    pfacility f,f2;
    pqueue q,q2;
       initlist(300);
       newqueue(q,"Очередь1");
       newqueue(q2,"Очередь2");
       newfac(f,"Колонка1");
       newfac(f2,"Колонка2");
       while (systime <= 480) {
           plan();
           switch (sysevent) {
           case 1:
               create(10);
               break;
           case 2:
               inqueue(q);
               break;
           case 3:
               seize(f);
               break;
           case 4:
               outqueue(q);
               break;
           case 5:
               delayt(20);
               break;
           case 6:
               if (t) wait(14);
               break;
           case 7:
               outfac(f);
               break;
           case 8:
               destroy();
               break;
           case 9:
               create(15);
               break;
           case 10:
               inqueue(q2);
               break;
           case 11:
               seize(f2);t=true;
               break;
           case 12:
               outqueue(q2);
               break;
           case 13:
               delayt(20);
               break;
           case 14:
               outfac(f2);t=false;
               break;
           case 15:
               destroy();
               break;
           case 16:
               create(16);
               break;
           case 17:
               inqueue(q2);
               break;
           case 18:
               seize(f2);
               break;
           case 19:
               outqueue(q2);
               break;
           case 20:
               delayt(20);
               break;
           case 21:
               outfac(f2);
               break;
           case 22:
               destroy();
               break;
           }

       }
       printall();
    return a.exec();
}
