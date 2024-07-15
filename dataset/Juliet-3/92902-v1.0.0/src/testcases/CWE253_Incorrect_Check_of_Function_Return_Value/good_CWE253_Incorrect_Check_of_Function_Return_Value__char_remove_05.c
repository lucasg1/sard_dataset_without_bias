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
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
