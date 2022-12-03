#include <bits/stdc++.h>
using namespace std;
int main()
{ 
	srand( time(NULL));
    int player;
    int c1 = rand()%6 + 1;
    int c2 = rand()%6 + 1;
    int c3 = rand()%6 + 1;
    int cuoc; 
    int moneyAcc = 100000;
    do{    
       
        //moneyAcc = 100000;

        cout<<"\n\n\n";
        cout<<"========================================CHAO MUNG BAN DEN VOI GAME < BUA CUA TOM CA>================================================"<<endl;
        
        cout<<"BAN CO: "<<moneyAcc<<"(VND)"<<endl;
        cout<<"1.BAU"<<endl;
        cout<<"2.CUA"<<endl;
        cout<<"3.TOM"<<endl;
        cout<<"4.CA"<<endl;
        cout<<"5.GA"<<endl;
        cout<<"6.NAI"<<endl;
      

        do{
            cout<<" ===>>Ban muon dat cuoc bao nhieu ? (cuoc <= moneyAcc): ";
            cin>> cuoc;
        }while(cuoc > moneyAcc);


        if (moneyAcc == 0)
        {
            cout<< "ban k du tien"<<endl;
            
        }
        else 
        {
            cout <<" ===>>BAN CHON CON GI?: ";
            cin >> player;
        }
        switch (player)
        {
        case 1:
            if(player == c1 && player == c2 && player == c3)
            {
                moneyAcc += cuoc*3;

                cout<< "Vui Xuan !!!" << endl;
                cout<<" tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if(player == c1 && player == c2 || player == c1 && player == c3 || player == c2 && player == c3) 
            {
                moneyAcc += cuoc*2;
                cout<< "==>Co 2 bau " <<endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if( player == c1 || player == c2 || player == c3) 
            {
                moneyAcc += cuoc;
                cout<< "==>Co 1 bau" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else 
            {
                moneyAcc -= cuoc;
                cout << "==>Khong co bau" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
                break;
        case 2:
         if(player == c1 && player == c2 && player == c3)
            {
                moneyAcc += cuoc*3;

                cout<< "Vui Xuan !!!, co 3 con cua" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if(player == c1 && player == c2 || player == c1 && player == c3 || player == c2 && player == c3) 
            {
                moneyAcc += cuoc*2;
                cout<< " có 2 con cua"<<endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if( player == c1 || player == c2 || player == c3) 
            {
                moneyAcc += cuoc;
                cout<< "==>Co 1 cua" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else 
            {
                moneyAcc -= cuoc;
                cout << "==>Khong co cua" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
                break;
        case 3:
         if(player == c1 && player == c2 && player == c3)
            {
                moneyAcc += cuoc*3;

                cout<< "==>Vui Xuan !!!, co 3 con tom" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if(player == c1 && player == c2 || player == c1 && player == c3 || player == c2 && player == c3) 
            {
                moneyAcc += cuoc*2;
                cout<< "==>Co 2 tom " <<endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if( player == c1 || player == c2 || player == c3) 
            {
                moneyAcc += cuoc;
                cout<< "==>Co 1 tom" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else 
            {
                moneyAcc -= cuoc;
                cout << "==>Khong co tom" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
                break;
        case 4:
         if(player == c1 && player == c2 && player == c3)
            {
                moneyAcc += cuoc*3;

                cout<< "==>Vui Xuan !!!, co 3 con ca" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if(player == c1 && player == c2 || player == c1 && player == c3 || player == c2 && player == c3) 
            {
                moneyAcc += cuoc*2;
                cout<< "==>Co 2 ca" <<endl;
                cout<< "==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if( player == c1 || player == c2 || player == c3) 
            {
                moneyAcc += cuoc;
                cout<< "==>Co 1 ca" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else 
            {
                moneyAcc -= cuoc;
                cout << "==>Khong co con ca" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
                break;
        case 5:
        if(player == c1 && player == c2 && player == c3)
            {
                moneyAcc += cuoc*3;

                cout<< "Vui Xuan !!!, co 3 con ga" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if(player == c1 && player == c2 || player == c1 && player == c3 || player == c2 && player == c3) 
            {
                moneyAcc += cuoc*2;
                cout<< "==>Co 2 ga" <<endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if( player == c1 || player == c2 || player == c3) 
            {
                moneyAcc += cuoc;
                cout<< "==>Co 1 ga" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else 
            {
                moneyAcc -= cuoc;
                cout <<" ==>Khong co con ga" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
                break;
        case 6:
        if(player == c1 && player == c2 && player == c3)
            {
                

                cout<< "Vui Xuan !!!, co 3 con nai" << endl;
                moneyAcc += cuoc*3;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if(player == c1 && player == c2 || player == c1 && player == c3 || player == c2 && player == c3) 
            {
                moneyAcc += cuoc*2;
                cout<< "==>Co 2 nai" <<endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else if( player == c1 || player == c2 || player == c3) 
            {
                moneyAcc += cuoc;
                cout<< "==>Co 1 nai" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
            else 
            {
                moneyAcc -= cuoc;
                cout << "==>Khong co con nai" << endl;
                cout<<" ==>tien cua ban: "<< moneyAcc<<"(vnd)"<<endl;
            }
                break;        
        default:
        cout << "loi!";
            break;
        }   
    }while(moneyAcc >= 0);
   
   
   
 return 0;

        
}



