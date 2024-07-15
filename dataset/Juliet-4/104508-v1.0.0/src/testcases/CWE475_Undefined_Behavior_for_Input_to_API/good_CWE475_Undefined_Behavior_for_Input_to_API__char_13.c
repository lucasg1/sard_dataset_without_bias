void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
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
