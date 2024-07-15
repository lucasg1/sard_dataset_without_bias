using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector);
void FUN1()
{
    TwoIntsClass * data;
    vector<TwoIntsClass *> dataVector;
    data = NULL;
    data = new TwoIntsClass[100];
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector)
{
    TwoIntsClass * data = dataVector[2];
    {
        TwoIntsClass source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0].intOne);
            delete [] data;
        }
    }
}
} 
