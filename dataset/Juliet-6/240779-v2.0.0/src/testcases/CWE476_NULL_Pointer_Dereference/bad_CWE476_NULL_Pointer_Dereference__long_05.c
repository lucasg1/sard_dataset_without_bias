static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    long * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
    {
<START>
        printLongLine(*data);
<END>
    }
}
