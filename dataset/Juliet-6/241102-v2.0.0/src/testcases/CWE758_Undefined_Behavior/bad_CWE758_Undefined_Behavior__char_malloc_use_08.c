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
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
<START>
            char data = *pointer; 
<END>
            free(pointer);
            printHexCharLine(data);
        }
    }
}
