void FUN0(char data)
{
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    data = -2;
    funcPtr(data);
}
void FUN2(char data)
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
}
void FUN3()
{
    char data;
    void (*funcPtr) (char) = FUN2;
    data = ' ';
    data = (char)RAND32();
    funcPtr(data);
}
