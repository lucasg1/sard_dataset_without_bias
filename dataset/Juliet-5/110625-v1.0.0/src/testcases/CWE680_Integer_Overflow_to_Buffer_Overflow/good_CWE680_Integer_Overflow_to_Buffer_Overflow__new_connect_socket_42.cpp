namespace NAMESPACE0
{
static int FUN0(int data)
{
    data = 20;
    return data;
}
void FUN1()
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
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
}
} 
