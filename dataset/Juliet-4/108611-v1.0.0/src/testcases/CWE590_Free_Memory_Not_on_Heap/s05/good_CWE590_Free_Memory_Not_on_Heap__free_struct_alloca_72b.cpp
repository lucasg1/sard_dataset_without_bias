using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<twoIntsStruct *> dataVector);
void FUN1()
{
    twoIntsStruct * data;
    vector<twoIntsStruct *> dataVector;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
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
void FUN0(vector<twoIntsStruct *> dataVector)
{
    twoIntsStruct * data = dataVector[2];
    printStructLine(&data[0]);
    free(data);
}
} 
