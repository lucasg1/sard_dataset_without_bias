void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN4(int data);
void FUN0(int data)
{
    FUN4(data);
}
void FUN6(int data);
void FUN2(int data)
{
    FUN6(data);
}
void FUN1(int data);
void FUN9()
{
    int data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(int data);
void FUN11()
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
    FUN3(data);
}
void FUN4(int data)
{
    {
        int result = data * data;
        printIntLine(result);
    }
}
void FUN6(int data)
{
    if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
