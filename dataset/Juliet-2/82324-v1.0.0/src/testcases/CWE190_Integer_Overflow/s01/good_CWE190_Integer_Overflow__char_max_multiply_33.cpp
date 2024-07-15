namespace NAMESPACE0
{
void FUN0()
{
    char data;
    char &dataRef = data;
    data = ' ';
    data = 2;
    {
        char data = dataRef;
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
    char &dataRef = data;
    data = ' ';
    data = CHAR_MAX;
    {
        char data = dataRef;
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
} 
