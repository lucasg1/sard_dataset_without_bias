static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (fputwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("fputwc failed!");
        }
    }
}
