void FUN0()
{
    goto sink;
sink:
    {
        wchar_t * filename;
        wchar_t tmpl[] = L"badXXXXXX";
        FILE *pFile;
        filename = MKTEMP(tmpl);
        if (filename != NULL)
        {
            pFile = FOPEN(filename, L"w");
            if (pFile != NULL)
            {
                fprintf(pFile, "Temporary file");
                fclose(pFile);
<START>
            }
<END>
        }
    }
}
