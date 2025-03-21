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

private:
    std::vector<Node> m_nodes{};
    void m_print_graph() const;
};

#endif