void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        scanf("%99s\0", data);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
