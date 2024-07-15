static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char data;
    data = 'C';
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
    data = 'C';
    if(STATIC_CONST_FIVE==5)
    {
        printHexCharLine(data);
    }
}
