void FUN0()
{
    goto sink;
sink:
    if (RENAME(OLD_GOOD_FILE_NAME, "newgoodfilename.txt") != 0)
    {
        printLine("rename failed!");
    }
}
