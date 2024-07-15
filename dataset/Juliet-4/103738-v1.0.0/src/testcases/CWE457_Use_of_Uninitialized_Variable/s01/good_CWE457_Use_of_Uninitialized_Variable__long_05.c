static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long data;
    if(staticTrue)
    {
        ; 
    }
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
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN2()
{
    long data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
    }
    if(staticTrue)
    {
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    if(staticTrue)
    {
        data = 5L;
    }
    if(staticTrue)
    {
        printLongLine(data);
    }
}
