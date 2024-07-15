static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
