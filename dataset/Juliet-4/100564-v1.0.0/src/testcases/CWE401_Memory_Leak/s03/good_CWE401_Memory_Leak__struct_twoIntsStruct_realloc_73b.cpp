using namespace std;
namespace NAMESPACE0
{
void FUN0(list<struct _twoIntsStruct *> dataList);
void FUN1()
{
    struct _twoIntsStruct * data;
    list<struct _twoIntsStruct *> dataList;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<struct _twoIntsStruct *> dataList);
void FUN3()
{
    struct _twoIntsStruct * data;
    list<struct _twoIntsStruct *> dataList;
    data = NULL;
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<struct _twoIntsStruct *> dataList)
{
    struct _twoIntsStruct * data = dataList.back();
    ; 
}
void FUN2(list<struct _twoIntsStruct *> dataList)
{
    struct _twoIntsStruct * data = dataList.back();
    free(data);
}
} 
