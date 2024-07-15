void FUN0()
{
    if(globalTrue)
    {
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
    }
}
