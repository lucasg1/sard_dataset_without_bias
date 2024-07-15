void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
