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
            int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
<START>
            int64_t data = *pointer; 
<END>
            printLongLongLine(data);
        }
    }
}
