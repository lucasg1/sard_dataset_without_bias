namespace NAMESPACE0
{
void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(twoIntsStruct * dataArray[]);
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    ; 
}
void FUN2(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    delete[] data;
}
} 
