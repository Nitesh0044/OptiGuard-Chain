#include "Block.h"
#include <iostream>

using namespace std;

int main() {
    cout << "OptiGuard-Chain v1.0 | Dev: Nitesh Dungdung (24030480068)" << endl;
    cout << "--------------------------------------------------------" << endl;

    TransactionData genesis = {"0.0.0.0", "Genesis Block Initialized", 0};
    Block genesisBlock(0, genesis, 0);
    Block* ptrToBlock = &genesisBlock;

    //Acessing the hash using the pointer (the '->' is the arrow operator)

    cout << "Acessing the Hash via Pointer : " << ptrToBlock->blockHash << endl;

    cout << "Successfully created Genesis Block!" << endl;
    cout << "Block Hash: " << genesisBlock.blockHash << endl;
    
    return 0;
}