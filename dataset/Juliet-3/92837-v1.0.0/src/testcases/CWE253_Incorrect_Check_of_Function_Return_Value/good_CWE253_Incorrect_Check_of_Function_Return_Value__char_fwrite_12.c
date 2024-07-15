void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
    else
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
}
