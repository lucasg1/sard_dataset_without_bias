namespace NAMESPACE0
{
void FUN0(void * dataArray[]);
void FUN1()
{
    void * data;
    void * dataArray[5];
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataArray[])
{
    void * data = dataArray[2];
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
