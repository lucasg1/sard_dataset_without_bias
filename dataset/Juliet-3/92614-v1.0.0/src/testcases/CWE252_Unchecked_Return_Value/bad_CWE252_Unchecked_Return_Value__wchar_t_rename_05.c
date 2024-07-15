static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
<END>
    }
}
