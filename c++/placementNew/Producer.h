#ifndef Producer_H 
#define Producer_H 

include "ExampleStruct.h"

class Producer 
{
    static const int kBufferSize = 1000;
public:
    Producer();
private:
    static ExampleStruct sBuffer[kBufferSize] ;
    ExampleStruct* mExampleStruct;
    ExampleStruct* mBufferBegin;
    ExampleStruct* mBufferLast;
};
#endif //Producer_H 
