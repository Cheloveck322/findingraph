#include "../include/Graph.h"

int main()
{
    std::ifstream input("../graph.txt");

    if (!input)
    {
        std::cerr << "Opening file error.\n";
        return -1;
    }

    unsigned graph_size(0);
    unsigned count_edges(0);
    int choice(0);

    input >> graph_size;
    input >> count_edges;

    Graph graph(graph_size);
    graph.add_edge(input, count_edges);

    input >> choice;

    graph.print_all_nodes_from_choice(choice);

    return 0;
}