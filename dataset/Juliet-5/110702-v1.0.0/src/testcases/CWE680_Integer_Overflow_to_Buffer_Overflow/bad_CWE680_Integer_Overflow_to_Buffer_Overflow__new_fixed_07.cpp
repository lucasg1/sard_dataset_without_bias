static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = INT_MAX / 2 + 2; 
    }
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
