#ifndef SENDER_H
#define SENDER_H

#include <memory>

#include "outstream.h"


class Sender {
public:
    Sender(OutStream &, std::shared_ptr<Number>);
    virtual void send(int i);

};

#endif // SENDER_H
