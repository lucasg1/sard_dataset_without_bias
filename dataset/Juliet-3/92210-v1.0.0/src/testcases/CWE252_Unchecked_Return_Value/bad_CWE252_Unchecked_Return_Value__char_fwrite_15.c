void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
