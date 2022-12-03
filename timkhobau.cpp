#include <bits/stdc++.h>
using namespace std;
int main(){
	int d,c;
    int chon;
    int dem = 0;
	srand(time(NULL));      //rand() % (max – min + 1) + min
	cout <<"NHAP SO DONG: ";
	cin>>d;
	cout<<"NHAP SO COT: ";
	cin>>c;
	int M[d][c];
do
{
    for(int i=0;i<d;i++)
	{
		for (int j=0;j<c;j++)
		{
			M[i][j]=rand()%(99-10+1)+10;
		}


	}
	// for(int i=0;i<d;i++)
	//     {
	// 	for (int j=0;j<c;j++)
	// 	{
	// 		cout<<M[i][j]<<"\t";
	// 	}
	// 	cout<<endl;
    //     }
    cout<< "================================WELLCOME GAME <TIM KHO BAU>>=============================="<<endl;
    cout<< " NHAP KHO BAU BAN CAN CHON: ";
    cin>> chon;
    for(int i=0;i<d;i++)
	{
		for (int j=0;j<c;j++)
		{
			if( chon == M[i][j])
            {
                dem++;
            }
		}
    }
    if(dem >=2)
    {
        cout<< " ==> XIN CHUC MUNG!, BAN DA TIM THAY KHO BAU"<<endl;
    }
    else
    {
        cout<<" ==>BAN TIM CHUA RA KHO BAU, CO LEN!"<<endl;

    }	
    cout<<endl;
    for(int i=0;i<d;i++)
	    {
		for (int j=0;j<c;j++)
		{
			cout<<M[i][j]<<"\t";
		}
		cout<<endl;
        }

        
} while ( dem < 2);
    

}