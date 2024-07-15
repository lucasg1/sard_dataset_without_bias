void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, "newbadfilename.txt");
<END>
    }
    else
    {
        if (RENAME(OLD_GOOD_FILE_NAME, "newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}
