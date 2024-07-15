void FUN0()
{
    if(globalFive==5)
    {
<START>
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
    }
}
