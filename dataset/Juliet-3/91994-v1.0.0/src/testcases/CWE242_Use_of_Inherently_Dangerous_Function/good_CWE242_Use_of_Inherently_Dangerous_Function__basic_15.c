void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
