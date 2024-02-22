#include <iostream>
#include "Headers/Rectangle.h"
#include "Headers/Line.h"
#include "Headers/Triangle.h"
#include "Headers/Square.h"
#include "Headers/Circle.h"
#include "Headers/Ellipse.h"

using namespace std;
int main()
{

    int c;
    do
    {

        cout << "Choose a shape - > (1.Line 2.Triangle 3.Square 4.Rectange 5.Circle 6.Ellipse 0.Exit)" << endl;
        cin >> c;
        switch (c)
        {
        // Case for line
        case 1:
        {
            double inX1, inY1, inX2, inY2;

            cout << "Enter x-coordinate1 : ";
            cin >> inX1;
            cout << "Enter y-coordinate1 : ";
            cin >> inY1;
            cout << "Enter x-coordinate2 : ";
            cin >> inX2;
            cout << "Enter y-coordinate2 : ";
            cin >> inY2;

            Line line(inX1, inY1, inX2, inY2);
            cout << "Length of line is : " << line.length() << endl;
        }
        break;

        // Case for triangle
        case 2:
        {
            float inBase, inHeight;
            cout << "Input base and height of triangle ->" << endl;
            cin >> inBase >> inHeight;
            Triangle tr(inBase, inHeight);
            cout << "The area of triangle is :" << tr.area() << endl;
        }
        break;

        // Case for square
        case 3:
        {
            float inSide;
            cout << "Input side of square ->";
            cin >> inSide;
            Square sq(inSide);
            int input;
            cout << "Select area or perimeter(1/2) and for both enter 3 " << endl;
            cin >> input;
            switch (input)
            {
            case 1:
                cout << "The area of square is :" << sq.area() << endl;
                break;

            case 2:
                cout << "The perimeter of square is :" << sq.perimeter() << endl;
                break;

            case 3:
                cout << "The area of square is :" << sq.area() << endl;
                cout << "The perimeter of square is :" << sq.perimeter() << endl;
                break;

            default:
                cout << "Incorrect Selection !!!" << endl;
                break;
            }
        }
        break;

        // Case for rectangle
        case 4:
        {
            float inLenght, inBreadth;
            cout << "Input lenght and breadth of square ->" << endl;
            cin >> inLenght >> inBreadth;
            Rectangle rect(inLenght, inBreadth);
            cout << "The area of square is :" << rect.area() << endl;
            cout << "The perimeter of square is :" << rect.perimeter() << endl;
        }
        break;

        // Case for circle
        case 5:
        {
            float inRadius;
            cout << "Input radius of circle ->" << endl;
            cin >> inRadius;
            Circle cir(inRadius);
            cout << "The area of circle is :" << cir.area() << endl;
            cout << "The perimeter of circle is :" << cir.circumference() << endl;
        }
        break;

        // Case for ellipse
        case 6:
        {
            float mSemi_Major, mSemi_Minor;
            cout << "Input the length of mSemi_Major axis of ellipse and mSemi_Minor axis of ellipse ->" << endl;
            cin >> mSemi_Major >> mSemi_Minor;
            Ellipse elps(mSemi_Major, mSemi_Minor);
            cout << "The area of ellipse is :" << elps.area() << endl;
            cout << "The perimeter of ellipse is :" << elps.circumference() << endl;
        }
        break;

        case 0:
            cout << "Thank You!!!";
            break;

        // Default case
        default:
            cout << "Incorrect Selection !!!" << endl;
            break;
        }

    } while (c != 0);

    return 0;
}