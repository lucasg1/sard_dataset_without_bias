using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList);
void FUN1()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL;
    TwoIntsClass VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<TwoIntsClass *> dataList);
void FUN3()
{
    TwoIntsClass * data;
    list<TwoIntsClass *> dataList;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
    ; 
}
void FUN2(list<TwoIntsClass *> dataList)
{
    TwoIntsClass * data = dataList.back();
    delete data;
}
} 
