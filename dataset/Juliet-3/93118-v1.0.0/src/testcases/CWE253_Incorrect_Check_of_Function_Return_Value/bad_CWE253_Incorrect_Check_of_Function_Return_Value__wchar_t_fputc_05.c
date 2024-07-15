static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (fputwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("fputwc failed!");
        }
    }
}
