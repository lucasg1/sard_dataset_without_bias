namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    int data;
    data = -1;
    data = 20;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
    {
        size_t dataBytes,i;
        int *intPointer;
        dataBytes = data * sizeof(int); 
        intPointer = (int*)new char[dataBytes];
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
}
} 
