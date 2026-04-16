#include "Block.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Block::Block(int idx, TransactionData d, size_t prevHash) 
    : index(idx), data(d), previousHash(prevHash) {
    timestamp = std::time(nullptr);
    blockHash = calculateHash();
}

size_t Block::calculateHash() {
    stringstream ss;
    ss << index << data.senderIP << data.auditLog << data.threatScore << previousHash << timestamp;

    string toHash = ss.str();
    hash<string> hasher;

    return hasher(toHash);
}