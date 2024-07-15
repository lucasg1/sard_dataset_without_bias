static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < CHAR_MAX)
        {
            ++data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%c", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        if (data < CHAR_MAX)
        {
            ++data;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            ++data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN3()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        data = 2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            ++data;
            char result = data;
            printHexCharLine(result);
        }
    }
}
