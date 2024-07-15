static int VAR0 = 0;
static int VAR1 = 0;
static int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CHAR_MAX-5;
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
static int FUN2(int data)
{
    if(VAR1)
    {
        data = CHAR_MAX-5;
    }
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN2(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
