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
        assert(1); 
    }
}
void FUN1()
{
    if(staticTrue)
    {
        assert(1); 
    }
}
