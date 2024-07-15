namespace NAMESPACE0
{
void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL; 
    {
        int * dataBuffer = (int *)ALLOCA(sizeof(int));
        *dataBuffer = 5;
        data = dataBuffer;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
