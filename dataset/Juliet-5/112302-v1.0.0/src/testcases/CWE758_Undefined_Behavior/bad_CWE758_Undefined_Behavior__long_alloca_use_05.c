static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            long * pointer = (long *)ALLOCA(sizeof(long));
<START>
            long data = *pointer; 
<END>
            printLongLine(data);
        }
    }
}
