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
            long * pointer = (long *)malloc(sizeof(long));
            if (pointer == NULL) {exit(-1);}
<START>
            long data = *pointer; 
<END>
            free(pointer);
            printLongLine(data);
        }
    }
}
