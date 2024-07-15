static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 'C';
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = 'C';
    }
    if(STATIC_CONST_FIVE==5)
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
