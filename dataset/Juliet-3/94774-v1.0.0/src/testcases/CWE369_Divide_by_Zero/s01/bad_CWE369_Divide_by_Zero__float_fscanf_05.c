static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    float data;
    data = 0.0F;
    if(staticTrue)
    {
        fscanf (stdin, "%f", &data);
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
