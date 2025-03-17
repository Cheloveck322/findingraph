#include "../include/Node.h"

void Node::add_neighbor(Node* node)
{
    m_neighbors.insert(node);
}

void Node::node_visited()
{
    m_marked = true;
}

const std::unordered_set<Node*>& Node::get_neighbors() const
{
    return m_neighbors;
}

bool Node::get_marked() const
{
    return m_marked;
}

int Node::get_name() const
{
    return m_name;
}