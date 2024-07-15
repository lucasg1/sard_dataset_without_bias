static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
        {
            printLine("fwprintf failed!");
        }
    }
}
