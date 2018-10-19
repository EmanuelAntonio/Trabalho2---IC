#include <iostream>
#include "Graph.h"

using namespace std;

int main(){

    char filePath [100] = "InstancesInput";
    char folder [10] = "/TipoC/";              ///  "/"  "/TipoA/"  "/TipoB/"  "/TipoC/" "/TipoD/"
    char fileName [] = "DCC136-480_01.txt";   /// InstancesInput/instanciaExemplo.txt      A -> DCC136-82_01.txt    B -> DCC136-240_01   C -> DCC136-480_01    D->  200_25_A.txt
    char fileType = folder[6] != '/' ? 'A' : folder[5];
    strcat(filePath,folder);
    strcat(filePath,fileName);

    Graph* g = new Graph(filePath,fileType);

    //g->printVertexWeight();
    //g->printGroupsBounds();
    //g->printGraph();
    //g->printGraphList();

    g->runGreedyAlgorithm();
    g->runLocalSearchAlgorithm(true, 120);

    delete g;

    return 0;
}
