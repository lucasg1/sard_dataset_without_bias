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
        {
            char result = data + 1;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    char &dataRef = data;
    data = ' ';
    data = (char)RAND32();
    {
        char data = dataRef;
        if (data < CHAR_MAX)
        {
            char result = data + 1;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
