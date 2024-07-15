namespace NAMESPACE0
{
void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[50];
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
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
