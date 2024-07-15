using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList);
void FUN1()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL;
    data = new TwoIntsClass[50];
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
