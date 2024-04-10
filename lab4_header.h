#ifndef PROGA___LAB4_HEADER_H
#define PROGA___LAB4_HEADER_H

#include <vector>

class IGeoFig {
public:
    virtual double square() const = 0;

    virtual double perimeter() const = 0;
};

//class FigureContainer {
//private:
//    std::vector<IGeoFig*> figures;
//public:
//
//    void addFigure(IGeoFig* figure);
//    // Суммарная площадь всех фигур.
//    double totalSquare() const;
//    // Суммарный периметр всех фигур.
//    double totalPerimeter() const;
//    // Центр масс всей системы.
//    // Возвращается координата x и y центра масс в виде пары.
//    std::pair<double, double> centerOfMass() const;
//};

class IPrintable{
public:
    virtual void draw() const = 0;
};

class IDialogInitiable{
public:
    virtual void initFromDialog()  = 0;
};

class IPhyssObject{
public:
    virtual double mass() const = 0;

    virtual bool operator == (const IPhyssObject& obj) const = 0;

    virtual bool operator < (const IPhyssObject& obj) const = 0;
};

class BaseCObject{
public:
    virtual const char *classname() const = 0;

    virtual unsigned int size() const = 0;
};


class Figure: public IGeoFig, public IPrintable, public IDialogInitiable, public IPhyssObject, public BaseCObject{};


class Circle : public Figure {
private:
    const char *class_name = "Circle";
    double radius;
    double x1, y1;
    double weight;
public:
    Circle();

    Circle(double r);

    double square() const override;

    double perimeter() const override;

    void draw() const override;

    double mass() const override;

    void initFromDialog() override;

    unsigned int size() const override;

    const char *classname() const override;
};

class Parallelogram : public Figure {
private:
    const char *class_name = "Parallelogram";
    double side1, side2;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double weight;
public:
    Parallelogram();

    Parallelogram(double s1, double s2);

    double square() const override;

    double perimeter() const override;

    void draw() const override;

    double mass() const override;

    void initFromDialog() override;

    unsigned int size() const override;

    const char *classname() const override;
};


#endif //PROGA___LAB4_HEADER_H