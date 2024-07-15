void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = CHAR_MAX;
        break;
    }
    while(1)
    {
        if(data > 0) 
        {
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
        break;
    }
}
void FUN1()
{
    char data;
    data = ' ';
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        break;
    }
}
