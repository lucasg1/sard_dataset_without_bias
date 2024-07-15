static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        fscanf (stdin, "%c", &data);
    }
    if(staticFalse)
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
void FUN1()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        fscanf (stdin, "%c", &data);
    }
    if(staticTrue)
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
void FUN2()
{
    char data;
    data = ' ';
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(staticTrue)
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        data = -2;
    }
    if(staticTrue)
    {
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
