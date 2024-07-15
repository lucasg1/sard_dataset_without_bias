static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 'C';
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
