static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
