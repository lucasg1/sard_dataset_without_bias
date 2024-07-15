void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
        {
            printLine("fwprintf failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
