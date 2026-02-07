
// **** C++ Objects Memory Allocation & using Arrays in Classes ****

#include <iostream>
using namespace std;

class shop
{
    int Item_Id[100];
    int Price_Id[100];
    int counter;

    public:
    void intcounter(void) {counter = 0;}
    void set_price(void);
    void display_price(void);
};

void shop ::set_price(void)
{
    cout << "Enter the ID of your item no " << counter + 1 << endl;
    cin >> Item_Id[counter];
    cout << "Enter the price of your item " << endl;
    cin >> Price_Id[counter];
    counter++;
}
void shop::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of of item with ID " << Item_Id[i] << " is " << Price_Id[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.intcounter();
    dukaan.set_price(); 
    dukaan.set_price();
    dukaan.display_price();  
    return 0;
}
