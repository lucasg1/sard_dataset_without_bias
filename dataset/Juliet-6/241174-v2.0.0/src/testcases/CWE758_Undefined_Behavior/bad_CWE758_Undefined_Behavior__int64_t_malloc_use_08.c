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
            int64_t * pointer = (int64_t *)malloc(sizeof(int64_t));
            if (pointer == NULL) {exit(-1);}
<START>
            int64_t data = *pointer; 
<END>
            free(pointer);
            printLongLongLine(data);
        }
    }
}
