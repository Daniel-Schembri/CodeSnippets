#ifndef ExampleStruct_H 
#define ExampleStruct_H 

class ExampleStruct
{
public:
    ExampleStruct(int amount, float aFloat);
    ~ExampleStruct();
private:
   bool mIsConsumable;
   int mAmount;
   float mAFloat;
};


#endif //ExampleStruct_H 
