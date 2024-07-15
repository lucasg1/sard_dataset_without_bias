static int staticFive = 5;
void FUN0()
{
    float data;
    data = 0.0F;
    if(staticFive==5)
    {
        fscanf (stdin, "%f", &data);
    }
    if(staticFive==5)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
