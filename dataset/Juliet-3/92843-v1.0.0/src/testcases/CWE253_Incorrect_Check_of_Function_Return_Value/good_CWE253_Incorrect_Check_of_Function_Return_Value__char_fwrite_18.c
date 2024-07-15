void FUN0()
{
    goto sink;
sink:
    if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
    {
        printLine("fwrite failed!");
    }
}
