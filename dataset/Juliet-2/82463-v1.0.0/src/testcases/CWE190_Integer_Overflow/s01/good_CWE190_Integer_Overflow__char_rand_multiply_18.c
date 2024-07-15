void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    data = (char)RAND32();
    goto sink;
sink:
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
void FUN1()
{
    char data;
    data = ' ';
    goto source;
source:
    data = 2;
    goto sink;
sink:
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
