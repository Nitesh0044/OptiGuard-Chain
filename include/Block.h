#pragma once
#include <string>
#include <ctime>

using namespace std;

struct TransactionData {
    string senderIP;
    string auditLog;
    int threatScore; // AI will use this later
};

class Block {
public:
    int index;
    size_t blockHash;
    size_t previousHash;
    TransactionData data;
    long timestamp;

    Block(int idx, TransactionData d, size_t prevHash);
    size_t calculateHash();
};