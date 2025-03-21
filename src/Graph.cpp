#include "../include/Graph.h"
#include <queue>

Graph::Graph(unsigned size): m_nodes(size)
{
    for (int i = 0; i < size; ++i)
    {
        m_nodes[i] = i;
    }
}

void Graph::add_edge(std::ifstream& input, unsigned count)
{
    while (count > 0)
    {
        int from(0);
        int where(0);
        input >> from;
        input >> where;
        m_nodes[from].add_neighbor(&m_nodes[where]);
        m_nodes[where].add_neighbor(&m_nodes[from]);
        --count;
    }
}

void Graph::print_all_nodes_from_choice(int choice) // используем BFS алгоритм
{
    std::queue<Node*> queue; 
    std::vector<int> answer(m_nodes.size()); // индекс массива - номер вершины, значение под этим индексом - кратчайшее растояние
    queue.push(&m_nodes[choice]);
    m_nodes[choice].node_visited();
    int depth = 0;
    int max = queue.back()->get_name(); // последний добавленный сосед 
    
    while (!queue.empty())
    {
        Node* temp(queue.front());
        answer[temp->get_name()] = depth;
        queue.pop();
        
        for (Node* node : temp->get_neighbors())
        {
            if (node->get_marked() == false) // проверка на уникального соседа
            {
                node->node_visited();
                queue.push(node);
            }
        }
        
        if (temp->get_name() == max)
        {
            ++depth;
            max = queue.back()->get_name();
        }
    }

    for (int a : answer)
    {
        std::cout << a << '\n';
    }
}

void Graph::m_print_graph() const // вспомогательная функция
{
    int count = 0;
    for (const Node& a : m_nodes)
    {
        std::cout << count++ << " neghbors are ";
        for (Node* neighbor : a.get_neighbors())
        {
            std::cout << neighbor->get_name() << ", ";
        } 
        std::cout << '\n';
    }
}