namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[]);
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * dataArray[5];
    data = NULL;
    TwoIntsClass VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(TwoIntsClass * dataArray[]);
void FUN3()
{
    TwoIntsClass * data;
    TwoIntsClass * dataArray[5];
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[])
{
    TwoIntsClass * data = dataArray[2];
    ; 
}
void FUN2(TwoIntsClass * dataArray[])
{
    TwoIntsClass * data = dataArray[2];
    delete data;
}
} 
