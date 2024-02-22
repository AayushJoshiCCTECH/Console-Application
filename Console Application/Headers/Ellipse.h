class Ellipse
{
public:
    Ellipse(float inSemiMajor, float inSemiMinor);
    ~Ellipse();
    float area();
    float circumference();
private:
    float mSemiMajor,mSemiMinor;
};