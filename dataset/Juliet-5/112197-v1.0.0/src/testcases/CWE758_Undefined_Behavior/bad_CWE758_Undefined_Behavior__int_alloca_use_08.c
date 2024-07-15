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
            int * pointer = (int *)ALLOCA(sizeof(int));
<START>
            int data = *pointer; 
<END>
            printIntLine(data);
        }
    }
}
