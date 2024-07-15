void FUN0()
{
    if (RENAME(OLD_GOOD_FILE_NAME, L"newgoodfilename.txt") != 0)
    {
        printLine("rename failed!");
    }
}
