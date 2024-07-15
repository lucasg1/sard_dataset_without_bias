void FUN0()
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
