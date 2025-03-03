#include <math.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double user_input_valid(string prompt) {
    double val;
    bool invalid = true;

    while(invalid) {

        cout << prompt;
        cout << "Value must be positive\n";
        cin >> val;

        if(val > 0){
            invalid = false;
        }
    }

    return val;
}

void area_of_circle(){

    double r, area;
    double pi = 3.14159;
    string prompt = "Enter radius for the circle\n";

    r = user_input_valid(prompt);

    area = pi * (pow(r, 2));

    cout << "The area of the circle with radius " << r << " is: " << area << endl;
}

void area_of_rectangle() {

    double l, w, area;
    string promptL = "Enter length of rectangle\n";
    string promptW = "Enter width of rectangle\n";

    l = user_input_valid(promptL);
    w = user_input_valid(promptW);

    area = l * w;

    cout << "The area of the rectangle with length: " << l << " and width: " << w << " is: " << area << endl;
}

void area_of_triangle() {

    double b, h, area;
    string promptH = "Enter height of triangle\n";
    string promptB = "Enter base of triangle\n";

    h = user_input_valid(promptH);
    b = user_input_valid(promptB);

    area = b * h * .5;

    cout << "The area of the triangle with a height of: " << h << " and base of: " << b << " is: " << area << endl;

}

int main(){

    int userPick;

    cout << "-------------- MENU ----------------" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "------------------------------------" << endl;

    cin >> userPick;

    /*
    if(userPick == 1) {
        area_of_circle();
    }
    else if(userPick == 2) {
        area_of_rectangle();
    }
    else if(userPick == 3) {
        area_of_triangle();
    }
    else if(userPick == 4) {
        return 0;
    }
    else {
        cout << "Invalid choice, must be between 1-4" << endl;
    }
    */

    switch(userPick) {
        case 1 :
            area_of_circle();
            break;
        case 2 :
            area_of_rectangle();
            break;
        case 3 : 
            area_of_triangle();
            break;
        case 4 :
            cout << "Quitting" << endl << endl;
            break;
        default :
            cout << "Invalid choice, must be between 1-4" << endl;
    }

    return 0;
}