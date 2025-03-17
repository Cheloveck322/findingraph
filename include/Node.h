#ifndef NODE_H
#define NODE_H

#include <unordered_set>

class Node
{
public:
    Node() = default;

    Node(int name): m_name(name)
    {
    } 

    void add_neighbor(Node* node);

    void node_visited();

    const std::unordered_set<Node*>& get_neighbors() const;

    bool get_marked() const;

    int get_name() const;

private:
    int m_name;
    std::unordered_set<Node*> m_neighbors;
    bool m_marked = false;
};

#endif