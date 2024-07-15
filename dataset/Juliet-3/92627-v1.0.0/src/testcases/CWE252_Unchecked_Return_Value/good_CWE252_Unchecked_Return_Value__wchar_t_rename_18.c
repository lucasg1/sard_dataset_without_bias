void FUN0()
{
    goto sink;
sink:
    if (RENAME(OLD_GOOD_FILE_NAME, L"newgoodfilename.txt") != 0)
    {
        printLine("rename failed!");
    }
}
