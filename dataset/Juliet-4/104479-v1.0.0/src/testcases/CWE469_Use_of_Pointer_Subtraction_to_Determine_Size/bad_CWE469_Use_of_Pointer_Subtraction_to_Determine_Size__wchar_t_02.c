void FUN0()
{
    if(1)
    {
        {
            wchar_t string1[] = SOURCE_STRING;
            wchar_t string2[] = SOURCE_STRING;
            wchar_t * slashInString1;
            size_t indexOfSlashInString1;
            slashInString1 = wcschr(string1, L'/');
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
