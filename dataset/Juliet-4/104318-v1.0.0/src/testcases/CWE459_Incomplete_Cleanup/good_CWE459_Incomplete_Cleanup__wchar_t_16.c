void FUN0()
{
    while(1)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"goodXXXXXX";
            FILE *pFile;
            filename = MKTEMP(tmpl);
            if (filename != NULL)
            {
                pFile = FOPEN(filename, L"w");
                if (pFile != NULL)
                {
                    fprintf(pFile, "Temporary file");
                    fclose(pFile);
                    UNLINK(filename); 
                }
            }
        }
        break;
    }
}
