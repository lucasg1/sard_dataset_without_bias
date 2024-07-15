void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
