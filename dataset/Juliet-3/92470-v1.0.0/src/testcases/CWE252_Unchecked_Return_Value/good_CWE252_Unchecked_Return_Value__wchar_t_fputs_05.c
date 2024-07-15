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
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
    }
}
