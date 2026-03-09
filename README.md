# Graph-Adjacency-Analyze-Project-cpp-004

This project is a robust C++ implementation designed for fundamental graph data structure representation and analysis. It leverages an adjacency matrix to represent graphs and provides a suite of functionalities for common graph operations, with a particular focus on identifying and characterizing bipartite graphs using the Breadth-First Search (BFS) algorithm. The project aims to offer a clear and efficient way to explore graph properties, demonstrating core concepts in discrete mathematics and algorithm design.

## Features

The `Graph-Adjacency-Analyze-Project-cpp-004` offers the following key features:

*   **Adjacency Matrix Representation:** Graphs are internally represented using an adjacency matrix, providing efficient O(1) lookup for edge existence.
*   **Edge Management:** Functionality to add edges between specified vertices.
*   **Vertex Degree Calculation:** Efficient computation of the degree for any given vertex.
*   **Neighbor Retrieval:** Ability to retrieve all direct neighbors for a specified vertex.
*   **Isolated Vertex Detection:** Identifies vertices that have no connections to other vertices in the graph.
*   **Bipartite Graph Detection:** Implements a Breadth-First Search (BFS) algorithm to determine if a graph is bipartite. If the graph is bipartite, it also identifies the two distinct sets of vertices (coloring) that form the bipartition.
*   **Console Output for Analysis:** Provides detailed console output, including graph loading status, calculated degrees, neighbor lists, and bipartite analysis results with vertex coloring.
*   **Visual Graph Representation (External):** While the core logic is in C++, the project can interface with external visualization tools (such as the `E-Visualgraph` seen in the screenshot) to graphically display the graph structure, especially helpful for visualizing bipartite coloring.

## Project Overview Screenshot

The following screenshot provides a comprehensive view of the project running in a development environment, showcasing the C++ source code, the analytical console output, and a visual representation of a bipartite graph.

![A development environment showing C++ code for a `DiscreteGraph` class, terminal output detailing graph analysis (including bipartite detection and vertex coloring), and a visual representation of a bipartite graph with green and blue vertex sets.](https://raw.githubusercontent.com/teto06920623/Graph-Adjacency-Analyze-Project-cpp-004/main/assets/screenshot_1.png)
This image displays the Visual Studio Code interface. On the left, the `DiscreteGraph.cpp` file contains the C++ implementation of graph operations, including methods for adding edges, calculating degrees, finding neighbors, checking for isolated vertices, and performing a BFS-based bipartite check. In the lower-middle, the terminal output shows the results of graph analysis, confirming the graph is loaded, listing vertex degrees and neighbors, and crucially, declaring the graph as "BIPARTITE" with the two sets of vertices colored Green and Blue. On the right, an `E-Visualgraph` pane visually depicts the same graph, clearly showing the 6 vertices partitioned into two sets (green: 0, 2, 3, 5 and blue: 1, 4) with edges only connecting vertices from different sets, illustrating its bipartite nature.

## Installation

To get started with `Graph-Adjacency-Analyze-Project-cpp-004`, follow these steps.

### Prerequisites

*   A C++ compiler (e.g., GCC, Clang)
*   Make (optional, for using a Makefile if provided)

### Steps

1.  **Clone the Repository:**
    ```bash
    git clone https://github.com/teto06920623/Graph-Adjacency-Analyze-Project-cpp-004.git
    cd Graph-Adjacency-Analyze-Project-cpp-004
    ```

2.  **Compile the Project:**
    Navigate to the project root directory and compile the C++ source files. If a `Makefile` is provided, you can simply use `make`. Otherwise, compile manually:

    ```bash
    # If a Makefile is present
    make

    # Manual compilation (adjust filenames as necessary)
    g++ -std=c++17 -o graph_analyzer main.cpp DiscreteGraph.cpp -Wall -Wextra
    ```
    *Replace `main.cpp` and `DiscreteGraph.cpp` with the actual names of your source files if they differ.*

## Usage

After successful compilation, you can run the executable to perform graph analysis.

1.  **Run the Executable:**
    ```bash
    ./graph_analyzer
    ```
    *Replace `graph_analyzer` with the name of your compiled executable.*

2.  **Interpreting the Output:**
    The program will output detailed information to the console, similar to the screenshot provided. This typically includes:
    *   Confirmation of graph loading and its properties (e.g., number of vertices, representation method).
    *   Calculated degrees for each vertex.
    *   Neighbors for specific vertices.
    *   Identification of any isolated vertices.
    *   The result of the bipartite check (e.g., `Graph is BIPARTITE` or `Graph is NOT BIPARTITE`).
    *   If bipartite, the explicit coloring of vertices into two sets (e.g., `Colors: V(0,2,3,5)=Green, V(1,4)=Blue`).

    The C++ code is designed to print these analytical results directly to standard output, making it easy to observe the properties of the graph being analyzed. You can modify the `main` function in the source code to define and analyze different graph structures.