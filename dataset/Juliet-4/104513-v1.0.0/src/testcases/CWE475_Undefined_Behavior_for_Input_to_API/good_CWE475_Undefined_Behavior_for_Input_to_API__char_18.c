void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        strcpy(data, "abcdefghijklmnopqrstuvwxyz");
        memmove(data + 6, data + 4, 10*sizeof(char));
        printLine(data);
    }
}
