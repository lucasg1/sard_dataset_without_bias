static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (putwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("putwc failed!");
        }
    }
}
