namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 7;
}
void FUN1(int &data)
{
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
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN3()
{
    int data;
    data = -1;
    FUN0(data);
    {
        int i;
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}
void FUN1(int &data);
void FUN5()
{
    int data;
    data = -1;
    FUN1(data);
    {
        int i;
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
} 
