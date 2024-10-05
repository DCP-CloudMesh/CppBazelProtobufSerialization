#ifndef _TASK_REQUEST_H
#define _TASK_REQUEST_H

#include <iostream>
#include <string>

#include "proto/taskrequest.pb.h"

class TaskRequest {
    unsigned int numWorkers;
    std::string leaderUuid;

   public:
    TaskRequest();
    TaskRequest(unsigned int numWorkers, std::string leaderUuid);

    std::string serialize() const;
    void deserialize(const std::string& serializedData);
    void print() const;
};

#endif