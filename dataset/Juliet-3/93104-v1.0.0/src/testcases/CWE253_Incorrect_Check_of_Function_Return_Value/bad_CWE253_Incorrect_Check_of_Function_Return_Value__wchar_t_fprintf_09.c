void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
        {
            printLine("fwprintf failed!");
        }
    }
}
