#ifndef GRAPHWEIGHTS_H
#define GRAPHWEIGHTS_H

#include <vector>
#include <fstream>
#include <exception>



class FileStreamException : public std::exception
{

};





class GraphWeights
{
public:
    GraphWeights();
    GraphWeights( size_t verticesCount, vector<vector<int>> weights );
    //Конструктор перемещения?
    //Оператор перемещения?
    ~GraphWeights();



    static GraphWeights ReadFromStream( std::ifstream &inFile );

    size_t VerticesCount();

    bool IsEdgeExist(size_t startVertexIndex, size_t endVertexIndex);
    int Weight(size_t startVertexIndex, size_t endVertexIndex);

private:
    size_t              m_vericesCount;
    vector<vector<int>> m_weights;


};

#endif // GRAPHWEIGHTS_H
