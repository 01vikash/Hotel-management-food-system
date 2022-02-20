#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	int quant,choice;//for quantity and choice
	int Qtabels=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;//these are the quqntity we have
	int stabels=0,spasta=0,sburger=0,snoodles=0,sshake=0,schicken=0;//these are the quqntity we sold
	int total_tabels=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;//these are the quqntity price
	
	
	cout<<"\n\t       quantity of items we have"<<endl;
	cout<<"Tabels available"<<endl;
	cin>>Qtabels;
    cout<<"Quantity of pasta"<<endl;
	cin>>Qpasta;
	 cout<<"Quantity of burger"<<endl;
	cin>>Qburger;
	 cout<<"Quantity of noodles"<<endl;
	cin>>Qnoodles;
	 cout<<"Quantity of shake"<<endl;
	cin>>Qshake;
	 cout<<"Quantity of chicken_roll"<<endl;
	cin>>Qchicken;


    cout<<"\n\t\t\t plz select from the menu options"<<endl;
    cout<<"\n\n1) tabels";
    cout<<"\n2) pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) noodles";
    cout<<"\n5) shake";
    cout<<"\n6) chicken";
    cout<<"\n7) information ragarding sales and collection";
    cout<<"\n8) Exit";
    
    
    cout<<"\n\n plz enter your choice ";
    cin>>choice;
    
    m:
    
    switch(choice){
    	case 1:
    		cout<<"\n\n enter the no of tabels you wants";
    		cin>>quant;
    		if(Qtabels-stabels>=quant)
    		{
    			stabels=stabels+quant;
    			total_tabels=total_tabels+quant*1200;
    			cout<<"\n\n\t  "<<quant<<"tabel/ tabels have been alloted to you";
			}
    	else
    	cout<<"\n\n only"<<Qtabels-stabels<<"remaining rtabels";
    	
    		case 2:
    		cout<<"\n\n enter the no of pasta you wants";
    		cin>>quant;
    		if(Qpasta-spasta>=quant)
    		{
    			spasta=spasta+quant;
    			total_pasta=total_pasta+quant*250;
    			cout<<"\n\n\t  "<<quant<<"pasta is the orderd";
			}
    	else
    	cout<<"\n\n only"<<Qpasta-spasta<<"remaining pasta";
    	
    		case 3:
    		cout<<"\n\n enter the no of burger you wants";
    		cin>>quant;
    		if(Qburger-sburger>=quant)
    		{
    			sburger=sburger+quant;
    			total_burger=total_burger+quant*100;
    			cout<<"\n\n\t  "<<quant<<" burger is the orderd";
			}
    	else
    	cout<<"\n\n only"<<Qburger-sburger<<"remaining burger";
    		case 4:
    		cout<<"\n\n enter the no of burger you wants";
    		cin>>quant;
    		if(Qnoodles-snoodles>=quant)
    		{
    			snoodles=snoodles+quant;
    			total_noodles=total_noodles+quant*150;
    			cout<<"\n\n\t  "<<quant<<"noodles is the orderd";
			}
    	else
    	cout<<"\n\n only"<<Qnoodles-snoodles<<"remaining noodles";
    		case 5:
    		cout<<"\n\n enter the no of shake you wants";
    		cin>>quant;
    		if(Qshake-sshake>=quant)
    		{
    			sshake=sshake+quant;
    			total_shake=total_shake+quant*300;
    			cout<<"\n\n\t  "<<quant<<"shake is the orderd";
			}
    	else
    	cout<<"\n\n only"<<Qshake-sshake<<"remaining shake";
    		case 6:
    		cout<<"\n\n enter the no ofshake you wants";
    		cin>>quant;
    		if(Qchicken-schicken>=quant)
    		{
    			schicken=schicken+quant;
    			total_chicken=total_chicken+quant*40;
    			cout<<"\n\n\t  "<<quant<<"chicken is the orderd";
			}
    	else
    	cout<<"\n\n only"<<Qchicken-schicken<<"remaining chicken";
    	
    	
    	
    	case 7:
    		cout<<"\n\t Detais of the sales and collection";
    		cout<<"\n\n number of tabels we had"<<Qtabels;
    		cout<<"\n\n no of tabels we gave for rent"<<stabels;
    		cout<<"\n\t Remaining rtabels"<<Qtabels-stabels;
    		cout<<"\n\n total collection of the day"<<total_tabels;
    	
    		cout<<"\n\t Detais of the sales and collection";
    		cout<<"\n\n number of pasta we had"<<Qpasta;
    		cout<<"\n\n no of pasta we gave "<<spasta;
    		cout<<"\n\t Remaining  pasta"<<Qpasta-spasta;
    		cout<<"\n\n total collection of the day"<<total_pasta;
    		
    			cout<<"\n\t Detais of the sales and collection";
    		cout<<"\n\n number of burger we had"<<Qburger;
    		cout<<"\n\n no ofburger we gave "<<sburger;
    		cout<<"\n\t Remainingburger"<<Qburger-sburger;
    		cout<<"\n\n total collection of the day"<<total_burger;
    		
    			cout<<"\n\t Detais of the sales and collection";
    		cout<<"\n\n number of noodles we had"<<Qnoodles;
    		cout<<"\n\n no of noodles we gave "<<snoodles;
    		cout<<"\n\t Remaining noodles"<<Qnoodles-snoodles;
    		cout<<"\n\n total collection of the day"<<total_noodles;
    		
    			cout<<"\n\t Detais of the sales and collection";
    		cout<<"\n\n number of shake we had"<<Qshake;
    		cout<<"\n\n no of shake we gave "<<sshake;
    		cout<<"\n\t Remaining shake"<<Qshake-sshake;
    		cout<<"\n\n total collection of the day"<<total_shake;
    		
    			cout<<"\n\t Detais of the sales and collection";
    		cout<<"\n\n number of chicken we had"<<Qchicken;
    		cout<<"\n\n no ofchicken we gave "<<schicken;
    		cout<<"\n\t Remaining chicken"<<Qchicken-schicken;
    		cout<<"\n\n total collection of the day"<<total_chicken;
    		
    		cout<<"\n\n\n total collection for the day"<<total_tabels<<endl<<total_pasta<<endl<<total_burger<<endl<<total_noodles<<endl r<<total_shake<<endl<<total_chicken<<endl;
    		break;
    		case 8:
    			exit(0);
    			default:
    				cout<<"\n please select the number mentioned above";
    				
    		
    		
	}
	
         goto m;  





	
}
