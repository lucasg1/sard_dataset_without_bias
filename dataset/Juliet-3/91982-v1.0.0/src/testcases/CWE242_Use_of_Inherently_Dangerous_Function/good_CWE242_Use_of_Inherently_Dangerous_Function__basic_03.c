void FUN0()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[DEST_SIZE];
            char *result;
            result = fgets(dest, DEST_SIZE, stdin);
            if (result == NULL)
            {
                printLine("Error Condition: alter control flow to indicate action taken");
                exit(1);
            }
            dest[DEST_SIZE-1] = '\0';
            printLine(dest);
        }
    }
}
void FUN1()
{
    if(5==5)
    {
        {
            char dest[DEST_SIZE];
            char *result;
            result = fgets(dest, DEST_SIZE, stdin);
            if (result == NULL)
            {
                printLine("Error Condition: alter control flow to indicate action taken");
                exit(1);
            }
            dest[DEST_SIZE-1] = '\0';
            printLine(dest);
        }
    }
}
