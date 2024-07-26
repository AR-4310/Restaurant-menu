#include <iostream>


using namespace std;

void show (double &total_price)

{
    char num;

    cout<<".......Food Menu........"<<endl;
    cout<<"Item"<<"\t\t\t"<<"Price"<<endl;
    cout<<"1.Burger"<<"\t\t"<<"$2.49"<<endl;
    cout<<"2.Hot Dog"<<"\t\t"<<"$2.99"<<endl;
    cout<<"3.Pizza"<<"\t\t\t"<<"$3.49"<<endl;
    cout<<"\n\n";
    cout<<"Press '4' to exit";
    cout<<"\n\n";
    cout<<"Select : ";
    cin>>num;

        switch(num){
        case '1':

        total_price+=2.49;
        cout<<"Burger has been added to your cart"<<endl;
        cout<<"Total :"<<total_price<<endl;
        break;

        case '2':

        total_price+=2.99;
        cout<<"Hot Dog has been added to your cart"<<endl;
        cout<<"Total :"<<total_price<<endl;
        break;

        case '3':

        total_price+=3.49;
        cout<<"Pizza has been added to your cart"<<endl;
        cout<<"Total :"<<total_price<<endl;
        break;

        case '4':

        cout<<"Exiting....."<<endl;
        return;

        default:

        cout<<"Invalid selection!Please try again"<<endl;
        break;
        }


    show (total_price);


}


int main()

{
    double total_price=0.0;
    show(total_price);

    cout<<"Total price : $"<<total_price;

    return 0;


}
