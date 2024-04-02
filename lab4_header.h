#ifndef PROGA___LAB4_HEADER_H
#define PROGA___LAB4_HEADER_H

#include <vector>

class IGeoFig {
public:
    virtual double square() const = 0;

    virtual double perimeter() const = 0;
};

// Класс, хранящий множество фигур
class FigureContainer {
private:
    std::vector<IGeoFig*> figures;
public:

    void addFigure(IGeoFig* figure);
    // Суммарная площадь всех фигур.
    double totalSquare() const;
    // Суммарный периметр всех фигур.
    double totalPerimeter() const;
    // Центр масс всей системы.
    // Возвращается координата x и y центра масс в виде пары.
    std::pair<double, double> centerOfMass() const;
};

class IPrintable{
public:
    virtual void draw() = 0;
};

class IDialogInitiable{
public:
    virtual void initFromDialog() = 0;
};

class IPhyssObject{
public:
    virtual double mass() = 0;

    virtual bool operator == (const IPhyssObject& obj) const = 0;

    virtual bool operator < (const IPhyssObject& obj) const = 0;
};

class BaseCObject{
public:
    virtual const char * classname() = 0;

    virtual unsigned int size() = 0;
};




class Figure: public IGeoFig, public IPrintable, public IDialogInitiable, public IPhyssObject, public BaseCObject, public FigureContainer {};

class Circle : public Figure {
private:
    double radius;
public:
    Circle();

    Circle(double r);

    double square() const override;

    double perimeter() const override;
};

class Parallelogram : public IGeoFig {
private:
    double side1, side2;
public:
    Parallelogram();

    Parallelogram(double s1, double s2);

    double square() const override;

    double perimeter() const override;
};



#endif //PROGA___LAB4_HEADER_H
