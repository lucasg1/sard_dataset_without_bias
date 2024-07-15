static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        data = 10;
<END>
        printIntLine(data);
    }
}
