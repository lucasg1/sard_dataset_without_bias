void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (RENAME(OLD_BAD_FILE_NAME, NEW_BAD_FILE_NAME) == 0)
<END>
        {
            printLine("rename failed!");
        }
    }
}
