#include <bits/stdc++.h>
using namespace std;


int main(){
    //rand() % (max – min + 1) + min
    int g8 = rand()%(99-1+1) + 1;
    int g7 = rand()%(999-100+1) + 100;
    int g6 = rand()%(9999-1000+1) + 1000;
    int g5 = rand()%(9999-1000+1) + 1000;
    int g4 = rand()%(99999-10000+1) + 10000;
    int g3 = rand()%(99999-10000+1) + 10000;
    int g2 = rand()%(99999-10000+1) + 10000;
    int g1 = rand()%(99999-10000+1) + 10000;
    int gdb = rand()%(999999-100000+1) + 100000;
 
    int chon;
    
   do
   {
    cout<< "\n\n\n";
    cout<< "=================================================SO SO KIEN THIET================================================= "<<endl;
    do{
        cout<< "DU DOAN GIAI 8 ( 2 SO)"<<endl;
        cout<< "moi ban nhap so: ";
        cin>>chon;

    }while( chon <= 0 || chon >= 100 );
    if( g8 == chon)
    {
        cout<< "BAN DA TRUNG GIAI 8\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< " DU DOAN GIAI 7 ( 3 SO )"<<endl;
    do{
        cout<< "moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 1000  || chon < 100 );
    if( g7 == chon)
    {
        cout<< "BAN DA TRUNG GIAI 7\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< " DU DOAN GIAI 6 ( 4 SO)"<<endl;
    do{
        cout<< "Moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 10000  || chon < 1000 );
    if( g6 == chon)
    {
        cout<< "BAN DA TRUNG GIAI 6\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< " DU DOAN GIAI 5 ( 4 SO )"<<endl;
    do{
        cout<< "Moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 10000  || chon < 1000 );
    if( g5 == chon)
    {
        cout<< "BAN DA TRUNG GIAI 5\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< " DU DOAN GIAI 4 (5 SO)"<<endl;
    do{
        cout<< "Moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 100000  || chon < 10000 );
    if( g4 == chon)
    {
        cout<< "BAN DA TRUNG GIAI 4\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< "DU DOAN GIAI 3 ( 5 SO)"<<endl;
    do{
        cout<< "Moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 100000  || chon < 10000 );
    if( g3 == chon)
    {
        cout<< "BAN DA TRUNG GIAI 3\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< " DU DOAN GIAI NHI ( 5 SO)"<<endl;
    do{
        cout<< "Moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 100000  || chon < 10000 );
    if( g2 == chon)
    {
        cout<< "BAN DA TRUNG GIAI NHI\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }
    cout<< " DU DOAN GIAI DAC BIET ( 6 SO)"<<endl;
    do{
        cout<< "moi ban nhap so: ";
        cin>>chon;

    }while( chon >= 1000000  || chon < 100000 );
    if( g7 == chon)
    {
        cout<< "BAN DA TRUNG GIAI DAC BIET\n"<<endl;
    }
    else 
    {
        cout<<"===>CHUC BAN MAY MAN LAN SAU<===\n"<<endl;
    }



   } while (chon > 0);
   return 0;

}
