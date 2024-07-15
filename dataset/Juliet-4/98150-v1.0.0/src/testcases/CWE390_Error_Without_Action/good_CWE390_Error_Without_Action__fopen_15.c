void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        FILE * fileDesc = NULL;
        fileDesc = fopen("file.txt", "w+");
        if (fileDesc == NULL)
        {
            printLine("fopen() failed");
            exit(1);
        }
        fclose(fileDesc);
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
        FILE * fileDesc = NULL;
        fileDesc = fopen("file.txt", "w+");
        if (fileDesc == NULL)
        {
            printLine("fopen() failed");
            exit(1);
        }
        fclose(fileDesc);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
