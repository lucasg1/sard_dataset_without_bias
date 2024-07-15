void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        strcpy(data, "abcdefghijklmnopqrstuvwxyz");
        memmove(data + 6, data + 4, 10*sizeof(char));
        printLine(data);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        strcpy(data, "abcdefghijklmnopqrstuvwxyz");
        memmove(data + 6, data + 4, 10*sizeof(char));
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
