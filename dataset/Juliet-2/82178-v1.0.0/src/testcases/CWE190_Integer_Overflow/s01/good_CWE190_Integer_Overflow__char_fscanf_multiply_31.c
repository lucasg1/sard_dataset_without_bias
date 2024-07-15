void FUN0()
{
    char data;
    data = ' ';
    data = 2;
    {
        char dataCopy = data;
        char data = dataCopy;
        if(data > 0) 
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
    fscanf (stdin, "%c", &data);
    {
        char dataCopy = data;
        char data = dataCopy;
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
    }
}
