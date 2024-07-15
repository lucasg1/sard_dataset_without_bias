void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        long longNumber;
        errno = 0; 
        longNumber = strtol("0xfffffffff", NULL, 0);
        if (errno == ERANGE)
        {
            printLine("strtol() failed");
            exit(1);
        }
        printf("%li\n", longNumber);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        long longNumber;
        errno = 0; 
        longNumber = strtol("0xfffffffff", NULL, 0);
        if (errno == ERANGE)
        {
            printLine("strtol() failed");
            exit(1);
        }
        printf("%li\n", longNumber);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
