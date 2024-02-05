class Ellipse
{
public:
    Ellipse(float inSemi_Major, float inSemi_Minor);
    ~Ellipse();
    float area();
    float circumference();
private:
    float mSemi_Major,mSemi_Minor;
};