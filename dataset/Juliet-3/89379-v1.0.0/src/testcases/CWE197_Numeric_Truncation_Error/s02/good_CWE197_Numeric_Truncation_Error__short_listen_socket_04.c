static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    short data;
    data = -1;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    data = -1;
    if(STATIC_CONST_TRUE)
    {
        data = CHAR_MAX-5;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
