void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
    }
}
