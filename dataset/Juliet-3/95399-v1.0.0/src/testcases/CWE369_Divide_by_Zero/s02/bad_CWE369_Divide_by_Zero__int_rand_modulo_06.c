static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        printIntLine(100 % data);
<END>
    }
}
