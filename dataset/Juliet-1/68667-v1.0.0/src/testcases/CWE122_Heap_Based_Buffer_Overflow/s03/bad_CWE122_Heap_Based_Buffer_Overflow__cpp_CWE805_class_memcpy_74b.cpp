using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, TwoIntsClass *> dataMap);
void FUN1()
{
    TwoIntsClass * data;
    map<int, TwoIntsClass *> dataMap;
    data = NULL;
    data = new TwoIntsClass[50];
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
<START>
        memcpy(data, source, 100*sizeof(TwoIntsClass));
<END>
        printIntLine(data[0].intOne);
        delete [] data;
    }
}
} 
