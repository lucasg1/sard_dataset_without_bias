static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            strcpy(data, "abcdefghijklmnopqrstuvwxyz");
<START>
            memcpy(data + 6, data + 4, 10*sizeof(char));
<END>
            printLine(data);
        }
    }
}
