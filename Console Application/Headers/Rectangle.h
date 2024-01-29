class Rectangle
{
public:
    Rectangle(float lenght, float breadth);
    ~Rectangle();
    float area();
    float perimeter();
private:
    float length, breadth;
};