static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
}
