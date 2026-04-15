#include "Block.h"
#include <iostream>
#include <string>

using namespace std;

Block::Block(int idx, TransactionData d, size_t prevHash) 
    : index(idx), data(d), previousHash(prevHash) {
    timestamp = std::time(nullptr);
    blockHash = calculateHash();
}

size_t Block::calculateHash() {
    hash<string> hasher;
    // Simple hashing logic for Day 1
    string toHash = data.auditLog + to_string(index) + to_string(previousHash);
    return hasher(toHash);
}