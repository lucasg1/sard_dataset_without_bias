namespace NAMESPACE0
{
void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int data);
void FUN3()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int data)
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
