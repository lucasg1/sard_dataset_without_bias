static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
<START>
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
    }
}
