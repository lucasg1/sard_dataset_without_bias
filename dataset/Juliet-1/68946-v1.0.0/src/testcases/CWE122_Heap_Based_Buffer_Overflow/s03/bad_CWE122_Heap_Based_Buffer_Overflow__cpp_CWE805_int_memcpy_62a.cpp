namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[50];
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
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
