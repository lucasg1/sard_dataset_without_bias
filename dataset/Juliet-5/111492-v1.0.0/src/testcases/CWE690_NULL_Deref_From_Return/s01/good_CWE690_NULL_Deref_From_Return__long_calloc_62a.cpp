namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = (long *)calloc(1, sizeof(long));
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
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
} 
