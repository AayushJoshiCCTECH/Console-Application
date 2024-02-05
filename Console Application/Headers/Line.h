class Line
    {
 
    public:
        Line(double inX1, double inY1, double inX2, double inY2);
        double length();
        ~Line();

    private:
        double mX1, mY1, mX2, mY2;
    };