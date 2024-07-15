static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = (unsigned int)RAND32();
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
