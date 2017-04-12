#include "Producer.h"
#include "Consumer.h"

ExampleStruct::ExampleStruct(int amount, float aFloat)
    : mAmount(amount), mAFloat(aFloat), mIsConsumable(true)
{
//    mIsConsumable = true; //possible in initList?
}

ExampleStruct::~ExampleStruct()
{
    memset(sBuffer,0,sizeof(Example)*buffersize);
    mIsConsumable = false;
}


//Init static variable

Example::Example()
{
    init();
    mBufferBegin = sBuffer;
    mExampleStruct = mBufferBegin;
    mBufferLast = sBuffer + kBufferSize;
}

void Example::init()
{
    memset(sBuffer,0,sizeof(Example)*kBufferSize);
}

void Example::testPlacementNew()
{
    //The placement new!
    //Syntax: new(pointer or address)(ctor);
   new(mExampleStruct)ExampleStruct();
}

