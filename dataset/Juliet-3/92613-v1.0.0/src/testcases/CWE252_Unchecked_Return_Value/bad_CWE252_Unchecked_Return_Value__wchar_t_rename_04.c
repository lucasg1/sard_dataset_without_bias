static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
<START>
        RENAME(OLD_BAD_FILE_NAME, L"newbadfilename.txt");
<END>
    }
}
