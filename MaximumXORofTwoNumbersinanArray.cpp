
#include <bits/stdc++.h> 

int maximumXor(vector<int> A) {

struct TrieNode {
    TrieNode* children[2];
    TrieNode() {
        children[0] = nullptr;
        children[1] = nullptr;
    }
};


    int maxXOR = 0;
    int mask = 0;

    for (int i = 31; i >= 0; i--) {

        // Update the mask bit by bit
        mask |= (1 << i); 

        unordered_set<int> prefixes;

        for (int num : A) {

            // Extract the prefix of the current number
            int prefix = num & mask; 

            if (prefixes.count(prefix ^ (maxXOR | (1 << i)))) {
                
                // If there is a number in the set that when XORed with the current maxXOR gives a new prefix,
                // it means we can include this bit in the maxXOR to maximize it.
                maxXOR |= (1 << i);
                break;
            }
            prefixes.insert(prefix);
        }
    }
    return maxXOR;
}
