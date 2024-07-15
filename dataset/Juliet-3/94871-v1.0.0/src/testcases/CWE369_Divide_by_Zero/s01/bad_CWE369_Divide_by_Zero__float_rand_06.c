static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    float data;
    data = 0.0F;
    if(STATIC_CONST_FIVE==5)
    {
        data = (float)RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
