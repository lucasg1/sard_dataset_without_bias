using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, struct _twoIntsStruct *> dataMap);
void FUN1()
{
    struct _twoIntsStruct * data;
    map<int, struct _twoIntsStruct *> dataMap;
    data = NULL;
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, struct _twoIntsStruct *> dataMap);
void FUN3()
{
    struct _twoIntsStruct * data;
    map<int, struct _twoIntsStruct *> dataMap;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, struct _twoIntsStruct *> dataMap)
{
    struct _twoIntsStruct * data = dataMap[2];
    ; 
}
void FUN2(map<int, struct _twoIntsStruct *> dataMap)
{
    struct _twoIntsStruct * data = dataMap[2];
    delete[] data;
}
} 
