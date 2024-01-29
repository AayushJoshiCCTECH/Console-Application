class Ellipse
{
public:
    Ellipse(float semi_major, float semi_minor);
    ~Ellipse();
    float area();
    float circumference();
private:
    float semi_major,semi_minor;
};