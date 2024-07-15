using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<TwoIntsClass *> dataVector);
void FUN1()
{
    TwoIntsClass * data;
    vector<TwoIntsClass *> dataVector;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = new TwoIntsClass[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
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
    printIntLine(data[0].intOne);
    delete [] data;
}
} 
