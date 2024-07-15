static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = RAND32();
    }
    if(staticTrue)
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
