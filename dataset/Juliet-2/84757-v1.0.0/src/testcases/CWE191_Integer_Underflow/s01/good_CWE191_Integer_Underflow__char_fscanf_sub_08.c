static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    char data;
    data = ' ';
    if(FUN0())
    {
        fscanf (stdin, "%c", &data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > CHAR_MIN)
        {
            char result = data - 1;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(FUN0())
    {
        fscanf (stdin, "%c", &data);
    }
    if(FUN0())
    {
        if (data > CHAR_MIN)
        {
            char result = data - 1;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN4()
{
    char data;
    data = ' ';
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(FUN0())
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
void FUN5()
{
    char data;
    data = ' ';
    if(FUN0())
    {
        data = -2;
    }
    if(FUN0())
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
