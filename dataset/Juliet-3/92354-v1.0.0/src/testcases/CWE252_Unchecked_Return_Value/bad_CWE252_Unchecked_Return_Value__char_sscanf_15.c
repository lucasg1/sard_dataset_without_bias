void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        sscanf(SRC, "%99s\0", data);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
