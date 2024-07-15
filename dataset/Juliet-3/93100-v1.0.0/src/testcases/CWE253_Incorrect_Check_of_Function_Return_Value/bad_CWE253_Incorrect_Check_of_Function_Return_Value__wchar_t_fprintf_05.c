static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
        {
            printLine("fwprintf failed!");
        }
    }
}
