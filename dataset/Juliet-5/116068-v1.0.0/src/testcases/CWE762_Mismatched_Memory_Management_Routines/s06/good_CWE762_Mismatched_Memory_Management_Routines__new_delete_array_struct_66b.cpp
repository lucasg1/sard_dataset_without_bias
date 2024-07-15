namespace NAMESPACE0
{
void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = new twoIntsStruct[100];
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(twoIntsStruct * dataArray[]);
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = new twoIntsStruct;
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    delete [] data;
}
void FUN2(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    delete data;
}
} 
