static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (putwchar((wchar_t)L'A') == 0)
<END>
        {
            printLine("putwchar failed!");
        }
    }
}
