void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        strcpy(data, "abcdefghijklmnopqrstuvwxyz");
<START>
        memcpy(data + 6, data + 4, 10*sizeof(char));
<END>
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
