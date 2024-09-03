#include <iostream>
#include <vector>
using namespace std;
class reception {
protected:
    int nn1;
    int nn2;

public:
    // Default constructor
   reception() {
        cout << "Welcome to our Cafeteria" << endl;
    }

    // Parameterized constructor
    reception(int n, int n2) {
        nn1 = n;
        nn2 = n2;
    }

    // Copy constructor
    reception(const reception& obj) {
        nn1 = obj.nn1;
        nn2 = obj.nn2;
    }

    // Destructor
    ~reception() {
        cout << "enjoy <3" << endl;
    }

    // Method to display options
    void display() {
        cout << "~" << endl;
        cout << "Do you want to continue?" << endl;
        cout << " 1: YES \n 2: NO\n";
        cin >> nn1;

        if (nn1 == 2) {
            cout << "THANK YOU" << endl;
            return;
        }
        else if (nn1 == 1) {
            cout << "We have 4 options here" << endl << "Do you want to know them?" << endl;
            cout << " 1: YES \n 2: NO\n";
            cin >> nn2;

            if (nn2 == 2) {
                cout << "THANK YOU" << endl;
                return;
            }
            else if (nn2 == 1) {
                cout << "1- Drinks: it consists of a lot of interesting things!!" << endl
                    << "2- Snack: it has various snacks!!" << endl
                    << "3- Sandwiches: its amazing!!!" << endl
                    << "4- Desserts: special and delicious desserts you need to try it" << endl;
                cout << "~" << endl;
                cout << "They will appear in the order, enjoy" << endl;
            }
        }
    }
};



class Cashier :public reception {
private:
    int num;
    int price;
    int discount = 30;
    int size;
    int extra;
    int user;
    char rating;

public:

    void setValue(int n, int p, int d, int s, int e) {
        num = n;
        price = p;
        discount = d;
        size = s;
        extra = e;
    }


    void SelectDrink() {
        cout << "Enter any number from 1 to 5 TO CHOOSE YOUR  WELCOME DRINK: "<<endl;
        cout << " 1: SOFT DRINK (300)\n"
           " 2: LEMONADE (578)\n"
            " 3: ORANGE JUICE (748)\n"
           " 4: JUICE (367)\n"
            " 5: TEA   (200)\n";
        cin >> num;
        switch (num) {
        case 1:
            cout << "Soft drink = 300" << endl;
            price = 300;
            break;
        case 2:
            cout << "Lemonade = 578" << endl;
            price = 578;
            break;
        case 3:
            cout << "Orange juice = 748" << endl;
            price = 748;
            break;
        case 4:
            cout << "Juice = 367" << endl;
            price = 367;
            break;
        case 5:
            cout << "Tea = 200" << endl;
            price = 200;
            break;
        default:
            cout << "Invalid choice" << endl;
            return;
        }

        // Calculate the price after applying discount
        int discountAmount = (price * discount) / 100;
        int result = price - discountAmount;
        cout << "Price after " << discount << " % discount is: " << result << endl;
    }

    // Method to choose drink size
    void ChooseSize() {
        cout << "Enter any number from (0 to 1) TO CHOOSE YOUR SIZE: ";
        cin >> size;
        if (size == 0) {
            cout << "Your choice is a medium-sized drink" << endl;
        }
        else if (size == 1) {
            cout << "Your choice is a large-sized drink" << endl;
        }
        else {
            cout << "NOT AVAILABLE" << endl;
        }
    }

    // Parameterized Constructor
    Cashier(int u, char r) {
        user = u;
        rating = r;
    }

    // Copy Constructor
    Cashier(const Cashier& obj1) {
        user = obj1.user;
        rating = obj1.rating;
    }

    // Default Constructor
    Cashier() {
        cout << "THANK YOU FOR DEALING WITH US :" << endl;
    }

    // Destructor
    ~Cashier() {
        cout << "We wish you a happy drink " << endl;
    }

    // Method to display user's choice
    void DisplayChoice() {
        if (user == 1) {
            cout << "Extra For Free" << endl;
        }
        else if (user == 2) {
            cout << "PLEASE KNOW: Extra With Money" << endl;
        }
        else {
            cout << "THANK YOU FOR DEALING WITH US" << endl;
        }
    }

    // Method to rate the drink
    void RateDrink() {
        cout << "PLEASE RATE YOUR DRINK (G/P): ";
        cin >> rating;
        switch (rating) {
        case 'P':
            cout << "PRODUCT IS POOR" << endl;
            break;
        case 'G':
            cout << "PRODUCT IS GOOD" << endl;
            break;
        default:
            cout << "THANK YOU FOR DEALING WITH US" << endl;
            break;
        }
    }
};

//Class for allowing users to choose the drinks
//gives the user the option to choose a drink
// this is our class, this function talks about determining the type of your desire that you want in our cafe
// this part identifies you 10 drinks that are available in the cafe with the price of each drink
//Allow the user to add extras
//Class by Malak Yousri and Rana Ayman
//id:42310089
//id: 42310432

class drinks :public reception {
protected:
    int choice, drinkChoice, extrasChoice, secondextraChoice;
    double price1;

public:
    drinks() {
        cout << "Welcome to our drinks!" << endl;
    }

    drinks(int n1, int n2, int n3, int n4) {
        choice = n1;
        drinkChoice = n2;
        extrasChoice = n3;
        secondextraChoice = n4;
    }

    drinks(drinks& obj) {
        choice = obj.choice;
        drinkChoice = obj.drinkChoice;
        extrasChoice = obj.extrasChoice;
        secondextraChoice = obj.secondextraChoice;
        price1 = obj.price1;
    }

    ~drinks() {
        cout << "THANK YOU " << endl;
    }

    void displaydrinks() {
        cout << "~" << endl;
        cout << "Do you want to continue?" << endl;
        cout << " 1: YES \n 2: NO\n";
        cin >> choice;

        if (choice == 2) {
            cout << " THANK YOU" << endl;
            return;
        }
        else if (choice == 1) {
            cout << "Hello, please choose your drink number:" << endl;
            cout << "'Choice num' 'Drink' 'Price'" << endl;
            cout << " 1: Mango Juice (50)\n"
                " 2: Classic Lemonade (55)\n"
                " 3: Iced Tea (60)\n"
                " 4: Watermelon Refresher (45)\n"
                " 5: Minty Fresh Limeade (50)\n"
                " 6: Iced Coffee (150)\n"
                " 7: Berry Bliss Smoothie (70)\n"
                " 8: Hot Tea (15)\n"
                " 9: Hot Coffee (50)\n"
                "10: Cappuccino (40)\n";

            cin >> drinkChoice;

            switch (drinkChoice) {
            case 1:
                price1 = 50;
                break;
            case 2:
                price1 = 55;
                break;
            case 3:
                price1 = 60;
                break;
            case 4:
                price1 = 45;
                break;
            case 5:
                price1 = 50;
                break;
            case 6:
                price1 = 150;
                break;
            case 7:
                price1 = 70;
                break;
            case 8:
                price1 = 15;
                break;
            case 9:
                price1 = 50;
                break;
            case 10:
                price1 = 40;
                break;
            default:
                cout << "Invalid choice." << endl;
                return;
            }
        }

        cout << "Do you want to add free extras? \n";
        cout << " 1: YES \n 2: NO\n";
        cin >> extrasChoice;

        if (extrasChoice == 1) {
            cout << "Please choose your favorite extras:\n";
            cout << " 1: caramel\n 2: sugar\n 3: white chocolate sauce\n 4: whipped cream\n";
            cin >> secondextraChoice;
        }
        else {
            cout << "No extras selected." << endl;
        }

        cout << "Your total price is: " << price1 << endl;
    }
};

using namespace std;
//by Mostafa ASHRAF  448 AND OMAR Ashraf 417(:
class Snack :public reception {
private:

    string name;
    float price;
    int quantity;

public:
    Snack()
    {
        name = "Unknown";
        price = 0;
        quantity = 0;
    }



    Snack(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;


    }


    string getName() {
        return name;
    }
    float getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }


    void setQuantity(int q) {
        quantity = q;
    }


    float calculateCost(int qty) {
        return qty * price;
    }

    void displayMenu() {
        vector<Snack> snacks = { Snack("Chips", 1.5, 10),
                                 Snack("Cookies", 2.0, 15),
                                 Snack("Candy", 1.0, 20) };

        int choice;
        float totalCost = 0.0;


        cout << "Choose snacks (enter -1 to finish):" << endl;

        do {
            cout << "Menu:" << endl;
            for (int i = 0; i < snacks.size(); ++i) {
                cout << i + 1 << "-> " << snacks[i].getName() << " $" << snacks[i].getPrice() << " " << endl;
            }
            cout << "Enter your choice (-1 to finish): ";
            cin >> choice;

            if (choice >= 1 && choice <= snacks.size()) {
                int quantity;
                cout << "Enter quantity for " << snacks[choice - 1].getName() << ": ";
                cin >> quantity;

                if (quantity > 0 && quantity <= snacks[choice - 1].getQuantity()) {
                    float cost = snacks[choice - 1].calculateCost(quantity);
                    totalCost += cost;
                    snacks[choice - 1].setQuantity(snacks[choice - 1].getQuantity() - quantity);
                    cout << "Added " << quantity << " " << snacks[choice - 1].getName() << " to cart. Cost: $" << cost << endl;
                }
                else {
                    cout << "Invalid quantity " << endl;
                }
            }
            else if (choice != -1) {
                cout << "Invalid choice!" << endl;
            }
        } while (choice != -1);

        cout << "Total Cost: $" << totalCost << endl;




    }
    ~Snack() {

        cout << "thanks to come here!!!!" << endl;

    }
};
class Sandwitch :public reception
{
protected:
    int number1, number2, number3, number4, number5, number6, number7, number8;
    double price1, price2, price3, price4, price5, price6, price7, price8;
    int num1, num2, num3, num4, num5;
    double pri1, pri2, pri3, pri4, pri5;

public:
    Sandwitch()
    {
        cout << "welcome to our place! " << endl;
    }

    Sandwitch(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, double pr1, double pr2, double pr3, double pr4, double pr5, double pr6, double pr7, double pr8,
        int num1, int num2, int num3, int num4, int num5, double p1, double p2, double p3, double p4, double p5)
    {
        number1 = n1;
        number2 = n2;
        number3 = n3;
        number4 = n4;
        number5 = n5;
        number6 = n6;
        number7 = n7;
        number8 = n8;
        price1 = pr1;
        price2 = pr2;
        price3 = pr3;
        price4 = pr4;
        price5 = pr5;
        price6 = pr6;
        price7 = pr7;
        price8 = pr8;
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
        this->num4 = num4;
        this->num5 = num5;
        pri1 = p1;
        pri2 = p2;
        pri3 = p3;
        pri4 = p4;
        pri5 = p5;
    }

    Sandwitch(Sandwitch& obj)
    {
        number1 = obj.number1;
        number2 = obj.number2;
        number3 = obj.number3;
        number4 = obj.number4;
        number5 = obj.number5;
        number6 = obj.number6;
        number7 = obj.number7;
        number8 = obj.number8;
    }

    ~Sandwitch()
    {
        cout << "wish you a good day <3 " << endl;
    }

    void displaySandwitch()
    {
        cout << "--------------------" << endl;
        cout << "Can you enter your order, please ?" << endl;
        cout << "1:YES\n2:NO\n";
        cin >> number2;

        if (number2 == 2)
        {
            cout << "THANK YOU" << endl;
        }
        else if (number2 == 1)
        {
            cout << "1:grilled sandwitch                  (60:00)\n"
                "2:vegan sandwitch                    (80:00)\n"
                "3:wrapped sandwitch                  (55:00)\n"
                "4:fahita sandwitch                   (45:00)\n"
                "5:shawerma sandwitch                 (75:00)\n"
                "6:hotdog                             (55:00)\n"
                "7:cheese burger                      (110:00)\n"
                "8:chicken burger                     (120:00)\n";
            cin >> number1;
        }
        switch (number1)
        {
        case 1:
            price1 = 60;
            break;
        case 2:
            price2 = 80;
            break;
        case 3:
            price3 = 55;
            break;
        case 4:
            price4 = 45;
            break;
        case 5:
            price5 = 75;
            break;
        case 6:
            price6 = 55;
            break;
        case 7:
            price7 = 110;
            break;
        case 8:
            price8 = 120;
            break;
        }
    }

    void displaysandwitch1()
    {
        cout << "Do you want to add additions to your sandwich?" << endl;
        cout << "1:YES\n2:NO\n";
        cin >> num1;

        if (num1 == 2)
        {
            cout << "THANK YOU" << endl;
        }
        else if (num1 == 1)
        {
            cout << "1:ketchup     (2.00)\n"
                "2:BBQ         (3.00)\n"
                "3:mushroom    (20.00)\n"
                "4:cheddar cheese  (15.00)\n"
                "5:tasty sauce (20.00)\n";
            cin >> num1;
        }
        switch (num1)
        {
        case 1:
            pri1 = 2.00;
            break;
        case 2:
            pri2 = 3.00;
            break;
        case 3:
            pri3 = 20.00;
            break;
        case 4:
            pri4 = 15.00;
            break;
        case 5:
            pri5 = 20.00;
            break;
        }
    }

    double calculateTotal()
    {
        double total = 0;
        total += price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8;
        total += pri1 + pri2 + pri3 + pri4 + pri5;
        return total;
    }

    void displayTotal()
    {
        double total = calculateTotal();
        cout << "Total Price: $" << total << endl;
    }
};
class Dessert :public reception {
protected:
    int num1, num2, num3, num4, num5;
    double price1, price2;


public:

    Dessert() {
        cout << "Welcome to our desserts!" << endl;
    }


    Dessert(int n1, int n2, int n3, int n4, int n5) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
        num4 = n4;
        num5 = n5;
    }


    Dessert(Dessert& obj) {
        num1 = obj.num1;
        num2 = obj.num2;
        num3 = obj.num3;
        num4 = obj.num4;
        num5 = obj.num5;
        price1 = obj.price1;
        price2 = obj.price2;
    }


    ~Dessert() {
        cout << "Wish you enjoyable desserts!" << endl;
    }


    void display() {
        cout << "~" << endl;
        cout << "Do you want to continue?" << endl;
        cout << " 1: YES \n 2: NO\n";
        cin >> num2;

        if (num2 == 2) {
            cout << "Thank you!" << endl;
            return;
        }
        else if (num2 == 1) {
            cout << "Hello, please choose your dessert number:" << endl;
            cout << "'Choice num' 'dessert' 'Price'" << endl;
            cout << " 1: cupcake (30)\n"
                << " 2: cake (150)\n"
                << " 3: ice cream (60)\n"
                << " 4: basbousa (45)\n"
                << " 5: kunafa (50)\n";

            cin >> num2;

            switch (num2) {
            case 1:
                price1 = 30;
                break;
            case 2:
                price1 = 150;
                break;
            case 3:
                price1 = 60;
                break;
            case 4:
                price1 = 45;
                break;
            case 5:
                price1 = 50;
                break;
            default:
                cout << "Invalid choice." << endl;
                return;
            }
        }

        cout << "Do you want to add free flavor? \n";
        cout << " 1: YES \n 2: NO\n";
        cin >> num2;

        if (num2 == 1) {
            cout << "Please choose your favorite flavor:\n";
            cout << " 1: caramel\n 2: vanilla\n 3: white chocolate sauce\n 4: strawberry\n";
            cin >> num2;
        }
        else {
            cout << "No additional flavor selected." << endl;
        }

        cout << "your total price is" << price2 << endl;
    }
};





int main() {
    reception res;
    res.display();
    Cashier defaultCashier;
    Cashier obj1(defaultCashier);
    Cashier R(0, 'G');
    defaultCashier.SelectDrink();
    defaultCashier.ChooseSize();
    defaultCashier.RateDrink();

    drinks drin;
    drin.displaydrinks();
    Snack s1("Sample", 0.0, 0);

    cout << "Name: " << s1.getName() << endl;
    cout << "Price: $" << s1.getPrice() << endl;
    cout << "Quantity: " << s1.getQuantity() << endl;

    s1.displayMenu();
    Sandwitch obj7;
    obj7.displaySandwitch();
    obj7.displaysandwitch1();
    obj7.displayTotal();
    Dessert obj9;

    obj9.display();



    return 0;
}