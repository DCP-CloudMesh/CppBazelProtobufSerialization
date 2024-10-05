#include <iostream>

#include "include/taskrequest.h"

using namespace std;

int main() {
    // Create a MyMessage object and set its fields
    TaskRequest* taskRequest = new TaskRequest(2, "leader");

    // Serialize the message to a string
    string serialized = taskRequest->serialize();

    // Print the serialized message
    cout << "Serialized: " << serialized << endl;
    cout << endl;

    // Deserialize the message
    TaskRequest* deserialized = new TaskRequest();
    deserialized->deserialize(serialized);

    // Print the deserialized message
    deserialized->print();

    return 0;
}