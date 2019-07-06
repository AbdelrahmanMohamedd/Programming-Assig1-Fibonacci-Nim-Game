#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int again,coins=20+rand()%81,t=1,y=0,x=0,np;
    cout<<"Select Number Of Players"<<endl;
    cout<<"choose 1 for One Player (against Computer)"<<endl;
    cout<<"choose 2 for Two Player"<<endl;
    cin>>np;
    while(np!=1&&np!=2)
    {
        cout<<"enter 1 or 2 only"<<endl;
        cin>>np;
    }
    cout<<coins<<endl;
    while(coins>0)
    {
        if(t%2==1)
        {
            cout<<"player 1 : ";
            cin>>x;
            while((x>=coins && coins>1)||x<1||x>coins||(x>2*y && t>1))
            {
                cout<<"try again ";
                cin>>x;
            }
            coins-=x;
        }
        else
        {
            if(np==2)
            {
                cout<<"player 2 : ";
                cin>>y;
            }
            else
            {
                cout<<"computer : ";
                y=1+rand()%(2*x);
            }
            while((y>=coins && coins>1)||y<1||y>coins||y>2*x)
            {
                if(np==2)
                {
                    cout<<"try again ";
                    cin>>y;
                }
                else
                    y=1+rand()%(2*x);
            }
            if (np==1)
                cout<<y<<endl;
            coins-=y;
        }
        cout<<"reminder = "<<coins<<endl<<endl;
        if (coins>0)
            t++;
    }
    if (t%2==1)
        cout<<"player 1 wins"<<endl;
    else if (t%2==0 && np==1)
        cout<<"computer wins"<<endl;
    else
        cout<<"player 2 wins"<<endl;
    cout<<"play again ?! \nenter 1 for yes or enything to quit ";
    cin>>again;
    if(again==1)
    {
        cout<<"\n ***New Game*** \n";
        main();
    }
    else
        return 0;
}

