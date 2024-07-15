static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, "newbadfilename.txt");
<END>
    }
}
