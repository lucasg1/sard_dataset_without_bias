void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (RENAME(OLD_GOOD_FILE_NAME, "newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        if (RENAME(OLD_GOOD_FILE_NAME, "newgoodfilename.txt") != 0)
        {
            printLine("rename failed!");
        }
    }
}
