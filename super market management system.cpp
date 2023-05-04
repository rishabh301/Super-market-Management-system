/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string>
#include <vector>
using namespace std;

class EDIBLE
{
    friend class menu;
public:
    void medicine(void)
    {
        cout << "1. PARACETAMOL" << endl;        
        cout << "2. DOLO-650" << endl;
        cout << "3. Cymbalta" << endl;
        cout << "4. Busulfan" << endl;
        cout << "5. Etoposide" << endl;
    }

    void dairy(void)
    {
        cout << "1. MILK" << endl;
        cout << "2. CURD" << endl;
        cout << "3. BUTTERMILK" << endl;
        cout << "4. CHEESE" << endl;
        cout << "5. WHEY POWDER" << endl;
    }

    void groceries(void)
    {
        cout << "1. BROCCOLI" << endl;
        cout << "2. PEAS" << endl;
        cout << "3. TOMATO" << endl;
        cout << "4. POTATO" << endl;
        cout << "5. ONION" << endl;
    }

    void show(void)
    {
        cout << "MEDICINES" << endl;
        medicine();
        cout<<endl;
        cout << "DAIRY_PRODUCTS" << endl;
        dairy();
        cout<<endl;
        cout << "GROCERIES" << endl;
        groceries();
        cout<<endl;
    }
};



class GENERAL
{
    friend class menu;

public:
    
    void clothing(void)
    {
        cout << "1. RED-TSHIRT" << endl;
        cout << "2. BLACK_JEANS" << endl;
        cout << "3. BLACK_BOOTS" << endl;
        cout << "4. TUXEDO" << endl;
        cout << "5. PAJAMAS" << endl;
    }

    void toys(void)
    {
        cout << "1. RC_CAR" << endl;
        cout << "2. RC_BOAT" << endl;
        cout << "3. SOFT_TOYS" << endl;
        cout << "4. SCIENCEKIT" << endl;
        cout << "5. RC_DRONE" << endl;
    }

    void sports(void)
    {
        cout << "1. BASKETBALL" << endl;
        cout << "2. VOLLEYBALL" << endl;
        cout << "3. FOOTBALL" << endl;
        cout << "4. CRICKET BAT" << endl;
        cout << "5. CRICKET BALL" << endl;
    }

    void grooming(void)
    {
        cout << "1. HAIR WAX" << endl;
        cout << "2. HAIR GEL" << endl;
        cout << "3. FACIAL CREAM" << endl;
        cout << "4. LIPSTICK" << endl;
        cout << "5. MASCARA" << endl;
    }
  
    void show(void)
    {
        cout << "CLOTHES" << endl;
        clothing();
        cout<<endl;
        cout << "TOYS" << endl;
        toys();
        cout<<endl;
        cout << "SPORTS" << endl;
        sports();
        cout<<endl;
        cout << "GROOMING PRODUCTS" << endl;
        grooming();
        cout<<endl;
        
    }
};



class HOUSE_HOLD
{
    friend class menu;

public:
    
    void kitchen(void)
    {
        cout << "1. BUTCHER KNIVES" << endl;
        cout << "2. GRATER" << endl;
        cout << "3. STRAINER" << endl;
        cout << "4. PLATES CERAMIC" << endl;
        cout << "5. SPOON SET" << endl;
    }

    void daily(void)
    {
        cout << "1. BREAD" << endl;
        cout << "2. JUICE" << endl;
        cout << "3. NEWSPAPER" << endl;
        cout << "4. MINERAL WATER" << endl;
        cout << "5. CORNFLAKES" << endl;   
    }

    void show(void)
    {
        cout << "KITCHEN ITEMS" << endl;
        kitchen();
        cout<<endl;
        cout << "DAILY USE" << endl;
        daily();
        cout<<endl;
    }

};


class menu
{
public:
    void display(void)
    {
        EDIBLE a;
        GENERAL b;
        HOUSE_HOLD c;
        cout << "Edible section" << endl;
        a.show();
        cout<<endl;
        cout << "General section" << endl;
        b.show();
        cout<<endl;
        cout << "Household section " << endl;
        c.show();
        cout<<endl;
    }
};


class delivery
{
    public:
    int option, total_cost = 0;

    void options()
    {
        cout<<"SELECT MODE OF DELIVERY"<<endl;
        cout<<"1 --> EXPRESS DELIVERY "<<endl;
        cout<<"2 --> GENERAL DELIVERY "<<endl;
        
    }

    int cart(int option)
    {
        if(option==1)
        {
            cout<<"Express delivery request accepted "<<endl;
            cout<<"you will recive your product within 2 days"<<endl;
            cout<<"Cost for express Delivery : ₹100 "<<endl;
            int delivery_costs = 100;
            return delivery_costs; 
        }
        else if(option==2)
        {
            cout<<"General delivery request accepted "<<endl;
            cout<<"You will recieve your product within 5 days"<<endl;
            cout<<"Cost for General Delivery : ₹30 "<<endl;
            int delivery_costs = 25;
            return delivery_costs;         
        }
        else
        {
            cout<<" ERROR TRY AGAIN ";
        }
    }    
};






class billing
{
    private:
    string consumer_name, consumer_address;

    protected:
    int Total_Payable_Amount;
    int item_Rates(string item_name)
    {
        if (item_name == "PARACETAMOL")
            return 90;
        else if (item_name == "DOLO-650")
            return 25;
        else if (item_name == "CYMBALTA")
            return 740;
        else if (item_name == "BUSULFAN")
            return 6100;
        else if (item_name == "ETOPOSID")
            return 600;
        else if (item_name == "MILK")
            return 50;
        else if (item_name == "CURD")
            return 60;
        else if (item_name == "BUTTERMILK")
            return 20;
        else if (item_name == "CHEESE")
            return 40;
        else if (item_name == "WHEYPOWDER")
            return 1400;
        else if (item_name == "BROCCOLI")
            return 340;
        else if (item_name == "PEAS")
            return 60;
        else if (item_name == "TOMATO")
            return 42;
        else if (item_name == "POTATO")
            return 30;
        else if (item_name == "ONION")
            return 29;
        else if (item_name == "RED-Tshirt")
            return 400;
        else if (item_name == "BLACK_JEANS")
            return 850;
        else if (item_name == "BLACK_BOOTS")
            return 2500;
        else if (item_name == "TUXEDO")
            return 4100;
        else if (item_name == "PAJAMAS")
            return 500;
        else if (item_name == "RCCAR")
            return 350;
        else if (item_name == "RCBOAT")
            return 500;
        else if (item_name == "SOFTTOYS")
            return 220;
        else if (item_name == "SCIENCE KIT")
            return 760;
        else if (item_name == "RCDRONE")
            return 18400;
        else if (item_name == "BASKETBALL")
            return 290;
        else if (item_name == "VOLLEYBALL")
            return 260;
        else if (item_name == "FOOTBALL")
            return 350;
        else if (item_name == "CRICKET BAT")
            return 860;
        else if (item_name == "CRICKET BALL")
            return 190;
        if (item_name == "HAIR WAX")
            return 100;
        else if (item_name == "HAIR GEL")
            return 50;
        else if (item_name == "FACIAL CREAM")
            return 400;
        else if (item_name == "LIPSTICK")
            return 800;
        else if (item_name == "MASCARA")
            return 500;
        else if (item_name == "BUTCHER_KNIVES")
            return 1000;
        else if (item_name == "GRATER")
            return 150;
        else if (item_name == "STRAINER")
            return 150;
        else if (item_name == "CERAMIC_PLATES")
            return 1000;
        else if (item_name == "SPOON_SET")
            return 600;
        else if (item_name == "BREAD")
            return 40;
        else if (item_name == "JUICE")
            return 100;
        else if (item_name == "NEWSPAPER")
            return 3;
        else if (item_name == "MINERAL_WATER")
            return 20;
        else if (item_name == "CORNFLAKES")
            return 310;
        else if (item_name == "umbrella")
            return 300;
        else if (item_name == "curtains")
            return 410;
        else if(item_name == "laptop")
            return 96588;
        else if(item_name == "universal charger")
            return 450;
        else if(item_name == "glasses")
            return 1100;
        
    }
    

    public:
    int i, num_of_items, item_Rate, item_Value, total_value; // edit required
    long int consumer_phno;
    vector<string> item_Name; vector<int> item_Qty;
    billing()
    {
        cout<<"Enter Your Name : ";
        getline(cin,consumer_name);
        cout<<"Enter Your Address : ";
        getline(cin,consumer_address);
        cout<<"Enter your Phone No. : ";
        cin>>consumer_phno;
    }

    void vec()
    {
        cout<<"Enter Products that you want to buy and the quantity with a space : "<< endl; // CHECK
        string x;
        int y;
        while(cin>>x>>y && x != "0")
        {
            item_Name.push_back(x);
            item_Qty.push_back(y);
        }
        
        for (int i = 0; i < item_Name.size(); i++) 
        {
            num_of_items = i+1;
        }
    } 
    
    void invoice(int cost)
    {
        cout << "           XYZ SUPERMARKET             "<<endl;
        cout <<"\nName :         "<< consumer_name << endl;
        cout << "Address :      "<< consumer_address << endl;
        cout << "Invoice Date : 24 april 2022 "<< endl;
        cout << "Sr.no. \tItem \tQyt \tRate \tValue"<<endl;
        for(int k=0;k<num_of_items;k++)
        {
            cout<< k+1 <<"\t"<<item_Name.at(k)<<"\t"<<item_Qty.at(k)<< "\t"<<item_Rates(item_Name.at(k))<<"\t"<<item_Qty.at(k)*item_Rates(item_Name.at(k))<<endl;
            total_value+=item_Qty.at(k)*item_Rates(item_Name.at(k));
        }
        cout << "\n";
        cout<<"Total Value : " << total_value <<endl;
        int delivery_cost = cost ;
        cout<<"Delivery Cost : "<< delivery_cost <<endl;
        Total_Payable_Amount = total_value + delivery_cost;
        cout<<"Total Payable Amount : "<< Total_Payable_Amount<<endl;
        cout<<"\n";
    }

    ~billing()
    {
        cout<<"                                              "<<endl;
        cout<<"\n       THANK YOU FOR SHOPING WITH XYZ       "<<endl;
    }
};
class payment
{
    private:
    float total_amount;
    public:
    void category(int x)
    {
        if(x==1)
        {
            char a;
            a='@';
            string upi_id;
            string security_pin;
            cout<<"enter UPI ID : ";
            cin>>upi_id;
            cout<<"enter security pin : ";
            cin>>security_pin;
            if( security_pin.length() != 4 && upi_id.find(a)==std::string::npos)
            {
                cout<<"                   "<<endl; 
                cout<<"invalid credentials"<<endl;
                cout<<"try it again"<<endl;
                
            }
            else
            {
                cout<<"                   "<<endl;    
                cout<<"valid credentials"<<endl;
                cout<<"PAYMENT SUCESSFUL ";
            }
        } 
        else
        {
            if(x==2)
            {
                string pswd;
                string bank_name,acc_num;
                cout<<"enter bank name : ";
                cin>>bank_name;
                getline(cin,bank_name);
                cout<<"enter account number : ";
                cin>>acc_num;
                cout<<"enter password : ";
                cin>>pswd;
                if ( acc_num.length()!=16 && pswd.length()!=4 )
                {
                    cout<<"                   "<<endl;
                    cout<<"invalid credentials"<<endl;
                }
                else
                {
                    cout<<"                   "<<endl;
                    cout<<"valid credentials"<<endl;
                    cout<<"PAYMENT SUCESSFUL ";
                }
            }
            else
            {
                if(x==3)
                {
                    int D_O_E,date,month,year;
                    string card_holder;
                    string cvv_num;
                    cout<<"enter card holder name : ";
                    cin>>card_holder;
                    getline(cin,card_holder);
                    cout<<"enter date of expiry : "<<endl;
                    cout<<"DATE: ";
                    cin>>date;
                    cout<<"MONTH: ";
                    cin>>month;
                    cout<<"YEAR: ";
                    cin>>year;
                    cout<<"enter cvv number : ";
                    cin>>cvv_num;
                    if( date>31 && month>12 && year<2022 && cvv_num.length()!=3 )
                    {
                        cout<<"                   "<<endl;
                        cout<<"invalid credentials"<<endl;
                          
                    }
                    else
                    {
                        cout<<"                   "<<endl;
                        cout<<"valid credentials"<<endl;
                        cout<<"PAYMENT SUCESSFUL ";
                                  
                    }
                    if(x==4)
                    {
                        double phone_no,Age;
                        string card_holder_name;
                        cout<<"enter phone_no ";
                        cin>>phone_no;
                        cout<<"enter age of holder";
                        cin>>Age;
                        cin>>card_holder_name;
                        getline(cin,card_holder_name);
                        if(phone_no!=9 && Age>18)
                        {
                            cout<<"invalid credentials"<<endl;
                            cout<<"                   "<<endl;
                            cout<<"please try it again"<<endl;
                        }
                        else
                        {
                            cout<<"valid credentials"<<endl;
                            cout<<"                 "<<endl;
                            cout<<"PAYMENT SUCESSFUL"<<endl;
                            cout<<"Thanks For shopping"<<endl;
                        }
                    }
                    
                }
                else
                {
                    cout<<" Error :- invalid entry ";
                    cout<<" INVALID credentials ";
                }
            }
        }
        
    }
};
int main()
{
    int option;
    menu m1;
    m1.display();
    billing obj;
    obj.vec();
    delivery del1;
    del1.options();
    cout<<"Select either 1 or 2 : ";
    cin >> option;
    int cost = del1.cart(option);
    obj.invoice(cost);
    int num;
    payment wallet;
    cout<<"SELECT PAYMENT OPTIONS"<<endl;
    cout<<"                   "<<endl;
    cout<<"1 --> UPI"<<endl;
    cout<<"2 --> NET BANKING"<<endl;
    cout<<"3 --> DEBIT/CREDIT CARD"<<endl;
    cout<<"4 --> wallet"<<endl;
    cout<<"                   "<<endl;
    cout<<"enter either 1 , 2 , 3 & 4  : ";
    cin>>num;
    wallet.category(num);
    
    return 0;
}
