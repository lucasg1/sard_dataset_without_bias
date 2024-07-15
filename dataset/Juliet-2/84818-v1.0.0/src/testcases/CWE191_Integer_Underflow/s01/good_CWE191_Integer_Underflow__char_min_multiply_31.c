void FUN0()
{
    char data;
    data = ' ';
    data = -2;
    {
        char dataCopy = data;
        char data = dataCopy;
        if(data < 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    {
        char dataCopy = data;
        char data = dataCopy;
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
    }
}
