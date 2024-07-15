void FUN0()
{
    switch(6)
    {
    case 6:
    {
        long longNumber;
        longNumber = strtol("0xfffffffff", NULL, 0);
<START>
<END>
        printf("%li\n", longNumber);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
