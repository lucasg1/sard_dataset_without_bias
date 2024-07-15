void FUN0()
{
    goto sink;
sink:
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
