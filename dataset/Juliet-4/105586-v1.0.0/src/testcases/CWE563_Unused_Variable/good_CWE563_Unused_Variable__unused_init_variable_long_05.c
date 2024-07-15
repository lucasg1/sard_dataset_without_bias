static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long data;
    data = 5L;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    data = 5L;
    if(staticTrue)
    {
        printLongLine(data);
    }
}
