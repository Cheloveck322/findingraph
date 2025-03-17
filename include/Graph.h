#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include <vector>

class Graph
{
public:
    Graph() = default;

private:
    std::vector<Node*> nodes{};
};

#endif