static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
    }
}
