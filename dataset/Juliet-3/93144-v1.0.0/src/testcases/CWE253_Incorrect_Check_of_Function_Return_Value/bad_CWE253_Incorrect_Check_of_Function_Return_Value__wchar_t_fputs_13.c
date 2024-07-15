void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
    }
}
