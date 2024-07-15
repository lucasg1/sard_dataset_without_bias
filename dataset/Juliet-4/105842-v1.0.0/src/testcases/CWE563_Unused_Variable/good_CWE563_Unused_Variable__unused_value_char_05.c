static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    if(staticTrue)
    {
        data = 'C';
    }
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
    if(staticTrue)
    {
        data = 'C';
    }
    if(staticTrue)
    {
        printHexCharLine(data);
    }
}
void FUN2()
{
    char data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(staticTrue)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    if(staticTrue)
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(staticTrue)
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
