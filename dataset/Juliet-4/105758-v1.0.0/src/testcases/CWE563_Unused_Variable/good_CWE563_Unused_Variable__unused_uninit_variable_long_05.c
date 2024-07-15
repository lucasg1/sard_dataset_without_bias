static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long data;
    ; 
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    ; 
    if(staticTrue)
    {
        data = 5L;
        printLongLine(data);
    }
}
