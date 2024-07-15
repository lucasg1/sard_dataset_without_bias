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
<START>
            fscanf(stdin, "%99s\0", data);
<END>
        }
    }
}
