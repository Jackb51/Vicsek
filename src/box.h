#ifndef BOX_H
#define BOX_H

class Box
{
private:
    double lx, ly, x0, y0;

public:
    // Default constructor
    Box();

    // Parameterized constructor
    Box(double lx, double ly, double x0, double y0);

    // Setters
    void setSides(double lx, double ly);
    void setOrigin(double x, double y);

    // Getters

    double getSidex() const;
    double getSidey() const;
};

#endif // BOX_H