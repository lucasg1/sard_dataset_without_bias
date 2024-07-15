static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    long data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5L;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
