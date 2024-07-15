void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        if (scanf("%99s\0", data) == 0)
<END>
        {
            printLine("scanf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
