namespace NAMESPACE0
{
int FUN0(int data)
{
    data = RAND32();
    return data;
}
} 
namespace NAMESPACE0
{
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    data = FUN0(data);
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
