static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            long longNumber;
            longNumber = strtol("0xfffffffff", NULL, 0);
<START>
<END>
            printf("%li\n", longNumber);
        }
    }
}
