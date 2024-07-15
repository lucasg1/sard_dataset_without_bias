static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = RAND32();
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
