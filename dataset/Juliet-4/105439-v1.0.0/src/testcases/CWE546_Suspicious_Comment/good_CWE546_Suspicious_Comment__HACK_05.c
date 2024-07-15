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
        printLine("Hello");
    }
}
void FUN1()
{
    if(staticTrue)
    {
        printLine("Hello");
    }
}
