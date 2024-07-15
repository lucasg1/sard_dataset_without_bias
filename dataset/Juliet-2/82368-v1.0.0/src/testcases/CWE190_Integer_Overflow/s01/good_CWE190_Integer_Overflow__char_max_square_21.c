static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(char data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char data)
{
    if(VAR1)
    {
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
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char data)
{
    if(VAR2)
    {
        {
            char result = data * data;
            printHexCharLine(result);
        }
    }
}
void FUN5()
{
    char data;
    data = ' ';
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
