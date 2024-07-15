void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            strcpy(data, "abcdefghijklmnopqrstuvwxyz");
            memmove(data + 6, data + 4, 10*sizeof(char));
            printLine(data);
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            strcpy(data, "abcdefghijklmnopqrstuvwxyz");
            memmove(data + 6, data + 4, 10*sizeof(char));
            printLine(data);
        }
    }
}
