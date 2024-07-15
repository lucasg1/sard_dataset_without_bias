void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
    }
    else
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
}
