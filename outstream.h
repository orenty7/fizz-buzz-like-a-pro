#ifndef OUTSTREAM_H
#define OUTSTREAM_H


#include<iostream>

class OutStream
{
public:
    OutStream();
    virtual void sendString(std::string);

};

#endif // OUTSTREAM_H
