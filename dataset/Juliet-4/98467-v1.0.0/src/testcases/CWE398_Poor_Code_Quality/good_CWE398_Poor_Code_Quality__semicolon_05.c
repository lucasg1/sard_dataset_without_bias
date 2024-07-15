static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Hello from good()");
    }
}
void FUN1()
{
    if(staticTrue)
    {
        printLine("Hello from good()");
    }
}
