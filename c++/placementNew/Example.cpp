//TODO: A ProducerThread and a ConsumerThread
//TODO: Performance TimeMeasurement
//TODO: Check for isConsumable, so that threads dont interrupt each other

#include "Producer.h"
#include "Consumer.h"

Producer::Producer()
{
    init();
    mBufferBegin = sBuffer;
    mProducerStruct = mBufferBegin;
    mBufferLast = sBuffer + kBufferSize;
}

void Producer::init()
{
    memset(sBuffer,0,sizeof(ExampleStruct)*kBufferSize);
}

void Producer::testPlacementNew()
{
    //The placement new!
    //Syntax: new(pointer or address)(ctor);
   new(mExampleStruct)ExampleStruct();
}

