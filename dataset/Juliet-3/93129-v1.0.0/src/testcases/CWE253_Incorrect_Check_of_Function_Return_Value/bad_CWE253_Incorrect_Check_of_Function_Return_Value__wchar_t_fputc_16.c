void FUN0()
{
    while(1)
    {
<START>
        if (fputwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("fputwc failed!");
        }
        break;
    }
}
