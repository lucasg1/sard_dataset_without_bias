static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char data;
    ; 
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    ; 
    if(staticTrue)
    {
        data = 'C';
        printHexCharLine(data);
    }
}
