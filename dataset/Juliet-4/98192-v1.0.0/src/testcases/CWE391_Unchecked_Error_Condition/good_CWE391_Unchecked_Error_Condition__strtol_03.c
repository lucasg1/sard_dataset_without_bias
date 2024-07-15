void FUN0()
{
    if(5!=5)
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
void FUN1()
{
    if(5==5)
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
