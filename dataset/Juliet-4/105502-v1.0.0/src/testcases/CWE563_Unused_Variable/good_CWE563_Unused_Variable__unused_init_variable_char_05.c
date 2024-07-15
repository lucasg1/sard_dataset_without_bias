static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    data = 'C';
    if(staticFalse)
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
    if(staticTrue)
    {
        printHexCharLine(data);
    }
}
