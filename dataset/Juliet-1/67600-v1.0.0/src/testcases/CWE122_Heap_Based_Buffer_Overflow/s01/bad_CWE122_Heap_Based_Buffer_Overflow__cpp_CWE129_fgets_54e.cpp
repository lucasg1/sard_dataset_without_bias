namespace NAMESPACE0
{
void FUN0(int data);
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
void FUN6(int data);
void FUN4(int data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int data)
{
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}
} 
