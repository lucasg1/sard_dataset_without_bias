void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
    }
}
