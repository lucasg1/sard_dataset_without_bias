void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%c", &data);
    }
    else
    {
        fscanf (stdin, "%c", &data);
    }
    if(globalReturnsTrueOrFalse())
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
void FUN1()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        data = -2;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
    else
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
