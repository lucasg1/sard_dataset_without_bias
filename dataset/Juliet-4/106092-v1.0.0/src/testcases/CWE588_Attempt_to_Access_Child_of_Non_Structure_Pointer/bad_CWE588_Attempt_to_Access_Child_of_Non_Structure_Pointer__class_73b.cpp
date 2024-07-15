using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList);
void FUN1()
{
    void * data;
    list<void *> dataList;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR2;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<void *> dataList)
{
    void * data = dataList.back();
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
