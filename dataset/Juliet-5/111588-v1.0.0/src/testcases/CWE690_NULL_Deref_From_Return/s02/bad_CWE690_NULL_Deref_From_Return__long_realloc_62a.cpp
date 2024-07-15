namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = (long *)realloc(data, 1*sizeof(long));
}
} 
namespace NAMESPACE0
{
void FUN0(long * &data);
void FUN2()
{
    long * data;
    data = NULL; 
    FUN0(data);
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
} 
