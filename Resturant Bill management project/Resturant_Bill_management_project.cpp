#include<bits/stdc++.h>
using namespace std;
void head(){
    cout<<"\t*****************************************\n";
    cout<<"\t\t    Warisha FOOD ZONE";
    cout<<"\n\t*****************************************";
}
void burger(){
    cout<<"\t***Welcome to burger zone***\n";
    cout<<"\t1.Chirspy Chiken Burger. Price : BDT 220 Only\n.";
    cout<<"\t2.Grilled Chiken Burger. Price : BDT 280 Only\n";
    cout<<"\t3.Chiken Chesse Burger. Price : BDT 300 Only\n";

    cout<<"\tWhich item your want?\n";
    cout<<"\tplease select you item : ";
    int n;
    cin>>n;

    if(n == 1){
        cout<<"\tYou chose Item 1.\n";
        cout<<"\tHow many item you want?\n";
        cout<<"\tplease enter : ";
        int c;
        cin>>c; 
        int bill = c * 220;
        cout<<"\tYour curent bill is : "<<bill;
    }else if(n == 2){
        cout<<"\tYou chose Item 2.\n";
        cout<<"\tHow many item you want?\n";
        cout<<"\tplease enter : ";
        int c;
        cin>>c; 
        int bill = c * 280;
        cout<<"\tYour curent bill is : "<<bill;
    }else if(n == 3){
        cout<<"\tYou chose Item 3.\n";
        cout<<"\tHow many item you want?\n";
        cout<<"\tplease enter : ";
        int c;
        cin>>c; 
        int bill = c * 300;
        cout<<"\tYour curent bill is : "<<bill;
    }

}
void sandwich(){
    cout<<"\n\t***Welcome to sandwich zone***\n";
    cout<<"\t1.Chiken with egg sandwich. Price : BDT 140 Only\n.";
    cout<<"\t2.Chiken Sandwich. Price : BDT 180 Only\n";
    cout<<"\t3.Club sandwich. Price : BDT 200 Only\n";
}
void biriyani(){
    cout<<"\n\t***Welcome to Biriyani Zone***\n";
    cout<<"\n\t1.Chiken Biriyani. Price : BDT 280 Only\n.";
    cout<<"\n\t2.Mutton Biriyani. Price : BDT 350 Only\n";
    cout<<"\n\t3.Mutton Special Biriyani. Price : BDT 450 Only\n";
}
void menu(){
    cout<<"\n\t***Wellcome Warisha food menu***\n";
    cout<<"\t1.Burger Zone\n";
    cout<<"\t2.Sandwich Zone\n";
    cout<<"\t3.Biriyani Zone\n";
    cout<<"\n\tPlease Select your food item : ";
    int n;
    cin>>n;

    if(n == 1){
        burger();
    }else if(n == 2){
        sandwich();
    }else if(n == 3){
        biriyani();
    }else{
        cout<<"\n\tPlease select correct option.";
        return;
    }
}
int main(){
    head();
    cout<<"\n\n\tEnter which item you what?\n";
    int item,sandbill = 0,burgerbill = 0,biriyanibill = 0;

    cout<<"\n\t1.Food menu.\n";
    cout<<"\t2.Return.\n";
    cout<<"\n\tPlease enter input : ";
    cin>>item;
    if(item == 1){
        cout<<"\n\t***Wellcome Warisha food menu***\n";
        cout<<"\t1.Biriyani Zone\n";
        cout<<"\t2.Sandwich Zone\n";
        cout<<"\t3.Burger Zone\n";
        cout<<"\n\tPlease Select your food item : ";
        int n;
        cin>>n;
        if(n == 1){
            cout<<"\n\t***Welcome to Biriyani Zone***\n";
            cout<<"\n\t1.Chiken Biriyani. Price : BDT 280 Only\n.";
            cout<<"\n\t2.Mutton Biriyani. Price : BDT 350 Only\n";
            cout<<"\n\t3.Mutton Special Biriyani. Price : BDT 450 Only\n";
            cout<<"\n\tPlease Select your food item : ";
            int n;
            cin>>n;
            if(n == 1){
                cout<<"\tplease select how many item you want  : ";
                int c;
                cin>>c;
                cout<<"\tYour chiken biriyani bill is : "<<c*280;
            }
           

        }else if(n == 2){
            cout<<"\n\t***Welcome to sandwich zone***\n";
            cout<<"\t1.Chiken with egg sandwich. Price : BDT 140 Only\n.";
            cout<<"\t2.Chiken Sandwich. Price : BDT 180 Only\n";
            cout<<"\t3.Club sandwich. Price : BDT 200 Only\n";
        }else if(n == 3){
            cout<<"\n\t***Welcome to Biriyani Zone***\n";
            cout<<"\n\t1.Chiken Biriyani. Price : BDT 280 Only\n.";
            cout<<"\n\t2.Mutton Biriyani. Price : BDT 350 Only\n";
            cout<<"\n\t3.Mutton Special Biriyani. Price : BDT 450 Only\n";
        }
    }
  return 0;
}
