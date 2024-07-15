static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, "newbadfilename.txt");
<END>
    }
}
