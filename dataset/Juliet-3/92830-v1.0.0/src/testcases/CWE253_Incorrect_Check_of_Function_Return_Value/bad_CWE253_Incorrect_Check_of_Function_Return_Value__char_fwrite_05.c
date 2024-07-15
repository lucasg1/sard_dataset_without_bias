static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
    }
}
