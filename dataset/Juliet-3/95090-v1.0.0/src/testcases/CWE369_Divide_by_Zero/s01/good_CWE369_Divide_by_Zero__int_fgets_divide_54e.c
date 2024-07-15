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
void FUN1(int data);
void FUN5(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN7(int data)
{
    FUN3(data);
}
void FUN8(int data);
void FUN9()
{
    int data;
    data = -1;
    data = 7;
    FUN8(data);
}
void FUN10(int data);
void FUN11()
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
    FUN10(data);
}
void FUN5(int data);
void FUN8(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN10(int data)
{
    FUN7(data);
}
void FUN0(int data)
{
    printIntLine(100 / data);
}
void FUN2(int data)
{
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
