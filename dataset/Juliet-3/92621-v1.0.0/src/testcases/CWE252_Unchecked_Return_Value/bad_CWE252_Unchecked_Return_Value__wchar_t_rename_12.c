void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
<END>
    }
    else
    {
        if (RENAME(OLD_GOOD_FILE_NAME, L"newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}
