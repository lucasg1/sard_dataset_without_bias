static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
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
void FUN1()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = 20;
    }
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
