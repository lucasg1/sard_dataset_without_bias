void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
