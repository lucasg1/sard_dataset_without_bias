static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        if(data > 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
