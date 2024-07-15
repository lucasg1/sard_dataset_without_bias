static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN3()
{
    if(FUN0())
    {
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
    }
}
