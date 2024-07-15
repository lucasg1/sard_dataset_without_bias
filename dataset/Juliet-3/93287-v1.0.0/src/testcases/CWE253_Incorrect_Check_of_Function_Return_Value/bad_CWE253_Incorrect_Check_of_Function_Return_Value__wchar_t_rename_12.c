void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (RENAME(OLD_BAD_FILE_NAME, NEW_BAD_FILE_NAME) == 0)
<END>
        {
            printLine("rename failed!");
        }
    }
    else
    {
        if (RENAME(OLD_GOOD_FILE_NAME, NEW_GOOD_FILE_NAME) != 0)
        {
            printLine("rename failed!");
        }
    }
}
