namespace NAMESPACE0
{
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = INT_MAX / 2 + 2; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int data);
void FUN2(int data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int data)
{
    {
        size_t dataBytes,i;
        int *intPointer;
        dataBytes = data * sizeof(int); 
        intPointer = (int*)new char[dataBytes];
        for (i = 0; i < (size_t)data; i++)
        {
<START>
            intPointer[i] = 0; 
<END>
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
}
} 
