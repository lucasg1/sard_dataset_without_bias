namespace NAMESPACE0
{
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR2;
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
    data = 20;
    VAR2 = data;
    FUN0();
}
} 
