void FUN0()
{
    while(1)
    {
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) != strlen("string"))
        {
            printLine("fwrite failed!");
        }
        break;
    }
}
