class Rectangle
{
public:
    Rectangle(float inLenght, float inBreadth);
    ~Rectangle();
    float area();
    float perimeter();

private:
    float mLength, mBreadth;
};