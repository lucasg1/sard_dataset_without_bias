void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
