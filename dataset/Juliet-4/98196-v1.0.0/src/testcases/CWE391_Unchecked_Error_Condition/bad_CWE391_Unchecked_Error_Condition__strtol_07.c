static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
