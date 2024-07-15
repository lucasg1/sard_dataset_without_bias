void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
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
    FUN2(data);
}
void FUN5(int data);
void FUN6(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN8(int data)
{
    FUN7(data);
}
void FUN6(int data);
void FUN0(int data)
{
    FUN6(data);
}
void FUN8(int data);
void FUN2(int data)
{
    FUN8(data);
}
void FUN5(int data)
{
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
void FUN7(int data)
{
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
