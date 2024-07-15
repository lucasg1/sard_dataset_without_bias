static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        data = (short)RAND32();
    }
    if(staticTrue)
    {
        {
<START>
            data++;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
