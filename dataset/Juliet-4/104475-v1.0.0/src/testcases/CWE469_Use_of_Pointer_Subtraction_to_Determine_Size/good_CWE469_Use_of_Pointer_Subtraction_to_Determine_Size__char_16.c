void FUN0()
{
    while(1)
    {
        {
            char string1[] = SOURCE_STRING;
            char * slashInString1;
            size_t indexOfSlashInString1;
            slashInString1 = strchr(string1, '/');
            if (slashInString1 == NULL)
            {
                exit(1);
            }
            indexOfSlashInString1 = (size_t)(slashInString1 - string1);
            printUnsignedLine(indexOfSlashInString1);
        }
        break;
    }
}
