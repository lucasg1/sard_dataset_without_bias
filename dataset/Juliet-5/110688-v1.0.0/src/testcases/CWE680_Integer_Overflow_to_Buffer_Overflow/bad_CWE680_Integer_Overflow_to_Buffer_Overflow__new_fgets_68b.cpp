int VAR0;
int VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    VAR0 = data;
    FUN0();
}
} 
extern int VAR0;
extern int VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    int data = VAR0;
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
