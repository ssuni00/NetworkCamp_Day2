#ifndef PROTOCOL_H
#define PROTOCOL_H

typedef struct
{
    int seq_num;
    char data[512];
} Packet;

typedef struct
{
    int ack_num;
} Ack;

#endif // PROTOCOL_H
