#ifndef MESSAGES_H
#define MESSAGES_H


enum Messages
{
    INIT_BUILD_FORWARD_INDEX = 1,
    BUILD_BACKWARD_INDEX = 2,
    INDEX = 10,
    INDEX_IMAGE = 11,
    PING = 20,
    STOP = 30,
};

enum Replies
{
    OK = 1,
    ERROR_GENERIC = 2,
    PONG = 3,
    WRONG_MODE = 10,
    IMAGE_DATA_TOO_BIG = 20,
    IMAGE_NOT_INDEXED = 21,
};

#define MSG_INDEX_LEN 15
#define MSG_INDEX_IMAGE_HEADER_LEN 9


#endif // MESSAGES_H
