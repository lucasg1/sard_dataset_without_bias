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
            char result = data * data;
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
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
