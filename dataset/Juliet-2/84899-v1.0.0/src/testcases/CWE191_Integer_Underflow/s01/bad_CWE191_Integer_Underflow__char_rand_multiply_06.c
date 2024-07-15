static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        data = (char)RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
