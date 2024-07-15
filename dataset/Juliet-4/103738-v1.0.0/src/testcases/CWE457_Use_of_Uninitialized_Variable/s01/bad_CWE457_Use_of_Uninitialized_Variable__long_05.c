static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
<START>
        printLongLine(data);
<END>
    }
}
