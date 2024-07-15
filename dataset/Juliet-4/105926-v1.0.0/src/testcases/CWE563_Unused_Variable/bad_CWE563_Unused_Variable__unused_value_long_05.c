static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long data;
    if(staticTrue)
    {
        data = 5L;
    }
    if(staticTrue)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
