#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9); G.addEdge(1,9);
  G.addEdge(4, 2); G.addEdge(4, 3);

  cout << "---MATRIX(V,E)---\n";
  G.print();

  //checks numEdges
  cout << "\n---TEST numEdges()---\n";
  cout << "El grafo tiene " << G.numEdges() << " aristas.\n";

  int vertice = 0;
  cout << "\n---TEST inDegree()---\n";

  //checks inDegree
  for (int i = 0; i < G.getNumVertices(); i++) {
    cout << "El vertice " << vertice << " tiene " << G.inDegree(vertice) << " grados de entrada.\n";
    vertice++;
  }

  //checks isInfluencer
  cout << "\n---TEST isInfluencer()---\n";
  vertice = 0;
  for (int i = 0; i < G.getNumVertices(); i++) {
    if (G.isInfluencer(vertice)) {
      cout << "El vertice " << vertice << " es el de mayor grado de entrada.\n";
    }
    else{ 
      cout << "El vertice " << vertice << " NO es el de mayor grado de entrada.\n";
    }
    vertice++;
  }

}
