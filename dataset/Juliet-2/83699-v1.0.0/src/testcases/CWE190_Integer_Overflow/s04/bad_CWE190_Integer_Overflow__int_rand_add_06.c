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
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
