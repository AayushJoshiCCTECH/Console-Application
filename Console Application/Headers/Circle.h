class Circle
{
public:
    Circle(float inRadius);
    ~Circle();
    float area();
    float circumference();
private:
    float mRadius;
};