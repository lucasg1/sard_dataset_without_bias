void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (RENAME(OLD_GOOD_FILE_NAME, L"newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (RENAME(OLD_GOOD_FILE_NAME, L"newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
