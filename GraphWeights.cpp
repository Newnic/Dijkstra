#include "GraphWeights.h"
#include <stdexcept>



GraphWeights::GraphWeights():
    m_vericesCount(0)
{
    m_weights = new int*[m_vericesCount];
}

GraphWeights::GraphWeights(size_t verticesCount, vector<vector<int>> weights ):
    m_vericesCount(verticesCount)
{
    m_weights[4][4];
    m_weights = new int*[m_vericesCount];
    for( size_t i = 0; i < m_vericesCount; i++ )
    {
        m_weights[i] = new int[m_vericesCount];
        for( size_t j = 0; j < m_vericesCount; j++ )
        {
            m_weights[i][j] = weights[i][j];
        }
    }
}

GraphWeights::~GraphWeights()
{
    for( size_t i = 0; i < m_vericesCount; i++ )
    {
        delete[] m_weights[i];
    }
    delete[] m_weights;
}


GraphWeights GraphWeights::ReadFromStream( std::ifstream &inFile )
{
    size_t vertexCounts;
    inFile>>vertexCounts;
    if( inFile.fail() )
        throw FileStreamException();

    int **graphWeights = new
    for( size_t i = 0; i < vertexCounts; i++ )
    {
        inFile>>
    }
}


size_t GraphWeights::VerticesCount()
{
    return m_vericesCount;
}

bool GraphWeights::IsEdgeExist(size_t startVertexIndex, size_t endVertexIndex)
{
    if( (startVertexIndex >= m_vericesCount) || (endVertexIndex >= m_vericesCount) )
        throw std::out_of_range("Incorrect vertex index.");

    return (m_weights[startVertexIndex][endVertexIndex] >= 0);
}
int GraphWeights::Weight(size_t startVertexIndex, size_t endVertexIndex)
{
    if( (startVertexIndex >= m_vericesCount) || (endVertexIndex >= m_vericesCount) )
        throw std::out_of_range("Incorrect vertex index.");

    return m_weights[startVertexIndex][endVertexIndex];
}
