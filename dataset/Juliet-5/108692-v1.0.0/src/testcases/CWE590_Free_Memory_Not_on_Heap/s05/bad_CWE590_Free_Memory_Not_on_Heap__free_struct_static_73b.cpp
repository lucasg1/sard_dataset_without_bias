using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList);
void FUN1()
{
    twoIntsStruct * data;
    list<twoIntsStruct *> dataList;
    data = NULL; 
    {
        static twoIntsStruct dataBuffer[100];
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
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<twoIntsStruct *> dataList)
{
    twoIntsStruct * data = dataList.back();
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
} 
