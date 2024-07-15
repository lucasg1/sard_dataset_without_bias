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
        char buffer[sizeof(TwoIntsClass)];
        TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
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
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
