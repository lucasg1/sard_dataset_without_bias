void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
