void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (RENAME(OLD_GOOD_FILE_NAME, L"newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}
