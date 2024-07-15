namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * dataArray[]);
void FUN1()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * dataArray[5];
    data = NULL;
    struct _twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(struct _twoIntsStruct * dataArray[]);
void FUN3()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * dataArray[5];
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * dataArray[])
{
    struct _twoIntsStruct * data = dataArray[2];
    ; 
}
void FUN2(struct _twoIntsStruct * dataArray[])
{
    struct _twoIntsStruct * data = dataArray[2];
    delete data;
}
} 
