void FUN0()
{
    if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
    {
        printLine("fwrite failed!");
    }
}
