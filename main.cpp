#include <iostream>
#include <vector>
#include "Block.h"

using namespace std;

int main() {
    // 1. Prepare data for the first block (Genesis Block)
    TransactionData genesisData;
    genesisData.senderIP = "0.0.0.0";
    genesisData.auditLog = "Genesis Block - System Start";
    genesisData.threatScore = 0.0;

    // 2. Create the Genesis Block
    Block genesis(0, genesisData, 0); // index 0, data, prevHash 0

    // 3. Prepare data for a new security audit log
    TransactionData log1;
    log1.senderIP = "192.168.1.105"; // Simulated Network Layer IP
    log1.auditLog = "Unauthorized Login Attempt Detected";
    log1.threatScore = 85.5;

    // 4. Create the next block, linking it to the Genesis hash
    Block secondBlock(1, log1, genesis.blockHash);

    // 5. Output the results to the terminal
    cout << "--- OptiGuard-Chain Security Audit ---" << endl;
    cout << "Block 0 Hash: " << genesis.blockHash << endl;
    cout << "Block 1 Hash: " << secondBlock.blockHash << endl;
    cout << "Block 1 Origin IP: " << secondBlock.data.senderIP << endl;

    return 0;
}