/* -*-mode:c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifndef ABSTRACT_PACKET_QUEUE
#define ABSTRACT_PACKET_QUEUE

#include "queued_packet.hh"

class AbstractPacketQueue
{
public:
    virtual void enqueue( QueuedPacket && p ) = 0;

    virtual QueuedPacket dequeue( void ) = 0;

    virtual bool empty( void ) const = 0;

    virtual ~AbstractPacketQueue() = default;
};

#endif /* ABSTRACT_PACKET_QUEUE */ 
