#include "include/taskrequest.h"
using namespace std;

TaskRequest::TaskRequest() : numWorkers{0}, leaderUuid{""} {}
TaskRequest::TaskRequest(unsigned int numWorkers, std::string leaderUuid) : numWorkers{numWorkers}, leaderUuid{leaderUuid} {}

string TaskRequest::serialize() const {
    example::TaskRequest taskRequest;
    taskRequest.set_num_workers(this->numWorkers);
    taskRequest.set_leader_uuid(this->leaderUuid);

    string serialized;
    taskRequest.SerializeToString(&serialized);

    return serialized;
}

void TaskRequest::deserialize(const string& serializedData) {
    example::TaskRequest taskRequest;
    taskRequest.ParseFromString(serializedData);

    this->numWorkers = taskRequest.num_workers();
    this->leaderUuid = taskRequest.leader_uuid();
}

void TaskRequest::print() const {
    cout << "Num Workers: " << this->numWorkers << "\n";
    cout << "Leader UUID: " << this->leaderUuid << "\n";
}