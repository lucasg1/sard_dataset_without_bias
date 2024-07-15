static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char data;
    if(STATIC_CONST_TRUE)
    {
        data = 'C';
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    if(STATIC_CONST_TRUE)
    {
        data = 'C';
    }
    if(STATIC_CONST_TRUE)
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(STATIC_CONST_TRUE)
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
