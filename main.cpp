#include <QCoreApplication>

//Изначальный взвешенный граф представлен в виде целочисленной таблицы,
// в поле (i, j) которой лежит вес ребра из вершины i в вершину j
// (Для ненаправленного графа будет две записи: (i, j) и (j, i))
//

class GraphWeights
{
public:
    GraphWeights();
    GraphWeights();//Посмотреть инициализатор

    size_t RowsCount();
    size_t ColumnsCount();

    int Weight(size_t row, size_t column);

private:
    int    **m_weights;
    size_t   m_rowsCount;
    size_t   m_columnsCount;
};

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    //return a.exec();


}
