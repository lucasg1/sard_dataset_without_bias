static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    float data;
    data = 0.0F;
    if(staticTrue)
    {
        data = (float)RAND32();
    }
    if(staticTrue)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
