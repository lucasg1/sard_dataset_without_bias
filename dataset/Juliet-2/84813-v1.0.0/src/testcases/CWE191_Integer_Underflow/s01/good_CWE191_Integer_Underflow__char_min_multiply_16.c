void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = CHAR_MIN;
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
            if (data > (CHAR_MIN/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
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
        data = -2;
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        break;
    }
}
