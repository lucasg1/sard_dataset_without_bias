void FUN0()
{
    while(1)
    {
        if (RENAME(OLD_GOOD_FILE_NAME, "newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
        break;
    }
}
