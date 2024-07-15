void FUN0()
{
    if(globalFive==5)
    {
<START>
        if (RENAME(OLD_BAD_FILE_NAME, NEW_BAD_FILE_NAME) == 0)
<END>
        {
            printLine("rename failed!");
        }
    }
}
