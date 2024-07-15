namespace NAMESPACE0
{
void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL;
    data = new long[100];
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
<START>
    free(data);
<END>
}
} 
