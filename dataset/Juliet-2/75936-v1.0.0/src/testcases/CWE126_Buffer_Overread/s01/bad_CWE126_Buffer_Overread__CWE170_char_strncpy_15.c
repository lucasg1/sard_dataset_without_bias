void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char data[150], dest[100];
        memset(data, 'A', 149);
        data[149] = '\0';
        strncpy(dest, data, 99);
<START>
        printLine(dest);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
