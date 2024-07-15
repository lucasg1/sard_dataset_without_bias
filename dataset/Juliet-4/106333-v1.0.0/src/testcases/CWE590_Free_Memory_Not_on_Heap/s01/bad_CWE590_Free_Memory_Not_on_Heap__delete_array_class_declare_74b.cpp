using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap);
void FUN1()
{
    TwoIntsClass * data;
    map<int, TwoIntsClass *> dataMap;
    data = NULL; 
    {
        TwoIntsClass dataBuffer[100];
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
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap)
{
    TwoIntsClass * data = dataMap[2];
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
} 
