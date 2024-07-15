void FUN0()
{
    while(1)
    {
        if (RENAME(OLD_GOOD_FILE_NAME, NEW_GOOD_FILE_NAME) != 0)
        {
            printLine("rename failed!");
        }
        break;
    }
}
