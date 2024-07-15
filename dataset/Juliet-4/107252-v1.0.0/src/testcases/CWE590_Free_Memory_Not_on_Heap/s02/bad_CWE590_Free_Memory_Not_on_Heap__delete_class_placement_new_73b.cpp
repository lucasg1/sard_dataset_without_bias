using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList);
void FUN1()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL; 
    {
        char buffer[sizeof(TwoIntsClass)];
        TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
