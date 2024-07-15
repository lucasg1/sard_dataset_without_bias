void FUN0()
{
    goto sink;
sink:
<START>
    if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
<END>
    {
        printLine("fwrite failed!");
    }
}
