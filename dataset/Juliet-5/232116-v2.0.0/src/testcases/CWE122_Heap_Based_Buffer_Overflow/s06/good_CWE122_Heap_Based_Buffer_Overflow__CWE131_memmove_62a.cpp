namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN2()
{
    int * data;
    data = NULL;
    FUN0(data);
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
} 
