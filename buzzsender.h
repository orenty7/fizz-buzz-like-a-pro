#ifndef FIZZSENDER_H
#define FIZZSENDER_H

#include "sender.h"

class BuzzSender: public Sender
{
public:
    BuzzSender(std::shared_ptr<OutStream>, std::shared_ptr<Number>);
    void send();
private:
    std::shared_ptr<OutStream> out;
    std::shared_ptr<Number> number_resource;
};

#endif // FIZZSENDER_H
