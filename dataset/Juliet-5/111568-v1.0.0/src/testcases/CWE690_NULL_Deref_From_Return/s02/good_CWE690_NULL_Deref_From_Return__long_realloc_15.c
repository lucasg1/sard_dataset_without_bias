void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
        break;
    }
}
void FUN1()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    switch(6)
    {
    case 6:
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
