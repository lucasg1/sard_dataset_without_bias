void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) == 0)
<END>
        {
            printLine("fread failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
