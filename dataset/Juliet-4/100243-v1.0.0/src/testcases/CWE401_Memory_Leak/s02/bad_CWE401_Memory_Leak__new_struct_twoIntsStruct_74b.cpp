using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, struct _twoIntsStruct *> dataMap);
void FUN1()
{
    struct _twoIntsStruct * data;
    map<int, struct _twoIntsStruct *> dataMap;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, struct _twoIntsStruct *> dataMap)
{
    struct _twoIntsStruct * data = dataMap[2];
<START>
<END>
    ; 
}
} 
