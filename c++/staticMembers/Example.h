#ifndef EXAMPLE_H
#define EXAMPLE_H

class Example1
{
public:
    Example1();
private:
    static int mValue;
};

//The following class shows how to initalize it in header
class Example2
{
public:
    Example2();

    void initmValue() {mValue = 3;}
private:
    static int mValue;
};

//Prefer this implementation!
//The following class shows how to initalize it in header and by function
class Example3
{
public:
    Example3();

    int mValue(){static int mValue =3 ; return mValue;}  //?

private:

};

#endif // EXAMPLE_H
