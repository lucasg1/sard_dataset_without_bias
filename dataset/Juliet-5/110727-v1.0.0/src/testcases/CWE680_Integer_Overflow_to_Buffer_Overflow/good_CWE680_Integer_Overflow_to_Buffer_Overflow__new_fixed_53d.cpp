namespace NAMESPACE0
{
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = 20;
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int data);
void FUN3(int data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int data)
{
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
