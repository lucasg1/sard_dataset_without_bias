static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
}
