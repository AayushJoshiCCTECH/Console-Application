class Line
    {
    private:
        double x1, y1, x2, y2;
 
    public:
        Line(double x1, double y1, double x2, double y2);
 
        double length();
 
        ~Line();
    };