static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
    }
}
