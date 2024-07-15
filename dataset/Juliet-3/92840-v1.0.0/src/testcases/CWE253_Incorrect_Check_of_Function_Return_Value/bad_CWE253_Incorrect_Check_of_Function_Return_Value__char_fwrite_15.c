void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
