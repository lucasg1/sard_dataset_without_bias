namespace NAMESPACE0
{
int * FUN0(int * data)
{
    data = new int[100];
    return data;
}
} 
namespace NAMESPACE0
{
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
