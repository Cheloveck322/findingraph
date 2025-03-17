#ifndef GRAPH_H
#define GRAPH_H

#include "Node.h"
#include <iostream>
#include <vector>
#include <fstream>

class Graph
{
public:
    explicit Graph(unsigned size);

    void add_edge(std::ifstream& input, unsigned count);

    void print_all_nodes_from_choice(int choice);

    void print_graph() const;

private:
    std::vector<Node> m_nodes{};
};

#endif