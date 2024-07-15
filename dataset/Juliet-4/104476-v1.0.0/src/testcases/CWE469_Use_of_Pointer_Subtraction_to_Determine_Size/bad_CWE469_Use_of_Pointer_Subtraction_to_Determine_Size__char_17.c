void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char string1[] = SOURCE_STRING;
            char string2[] = SOURCE_STRING;
            char * slashInString1;
            size_t indexOfSlashInString1;
            slashInString1 = strchr(string1, '/');
            if (slashInString1 == NULL)
            {
                exit(1);
            }
<START>
            indexOfSlashInString1 = (size_t)(slashInString1 - string2);
<END>
            printUnsignedLine(indexOfSlashInString1);
        }
    }
}
