namespace NAMESPACE0
{
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR1;
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
void FUN1()
{
    int data;
    data = -1;
    data = INT_MAX / 2 + 2; 
    VAR1 = data;
    FUN0();
}
} 
