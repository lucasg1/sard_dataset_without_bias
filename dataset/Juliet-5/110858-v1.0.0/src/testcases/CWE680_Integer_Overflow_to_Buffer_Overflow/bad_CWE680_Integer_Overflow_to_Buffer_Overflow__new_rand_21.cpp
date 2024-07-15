namespace NAMESPACE0
{
static int VAR1 = 0;
static int FUN0(int data)
{
    if(VAR1)
    {
        data = RAND32();
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR1 = 1; 
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
    ;
}
} 
