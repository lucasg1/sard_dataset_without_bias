void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
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
void FUN10(int data)
{
    FUN6(data);
}
void FUN8(int data);
void FUN12(int data)
{
    FUN8(data);
}
void FUN10(int data);
void FUN0(int data)
{
    FUN10(data);
}
void FUN12(int data);
void FUN2(int data)
{
    FUN12(data);
}
void FUN5(int data)
{
    {
        data--;
        int result = data;
        printIntLine(result);
    }
}
void FUN7(int data)
{
    if (data > INT_MIN)
    {
        data--;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
