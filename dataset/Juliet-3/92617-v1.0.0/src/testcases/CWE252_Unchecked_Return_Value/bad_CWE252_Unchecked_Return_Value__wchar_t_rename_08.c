static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
<END>
    }
}
