//
// Created by Ben Johnson on 9/24/18.
//

#ifndef TREES_REGULARNODE_H
#define TREES_REGULARNODE_H

#include<vector>
using namespace std;
class RegularNode {
private:
    RegularNode *parent;
    vector<RegularNode *> children;
    int data;
};


#endif //TREES_REGULARNODE_H
